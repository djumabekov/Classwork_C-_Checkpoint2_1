//
// Source.cpp
//
#include <iostream>
#include <Windows.h> // для Sleep()
#include <time.h>    // для time(), clock()
#include <conio.h>   // для _kbhit(), _getch()
#include "Win10.h"   // добавить заголовочный файл Win10.h
using namespace std;


/*
  Крестики-нолики
  0) Главное меню игры
  1) Игровое поле 3х3 типа char
  2) Перемещение по игровому полю
  3) Проверка есть ли победитель
  4) Игровой цикл
  5) Отрисовка игрового поля
  6) Инициализация игрового поля
*/

// Глобальная область

// Глобальные переменные для меню:
//  Координаты вывода главного меню: строка, столбец
int menuRow = 5, menuCol = 8;
//  Пременная для индекса активного пункта меню
int Select = 0;
//  Пременные для цвета пунктов меню - активного, неактивных, цвет по умолчанию
int cSelFon = _COLOR::purple;
int cSelSym = _COLOR::black;

int cUnSelFon = _COLOR::black;
int cUnSelSym = _COLOR::green;

// стандартный цвет консоли (0,7)
int cDefFon = black;    // _COLOR::black;
int cDefSym = white;    // _COLOR::white;

// Глобальные переменные для игры:
//  Координата верхнего-левого угла поля: строка, столбец
int gridRow = 4, gridCol = 10;

/*
Игровое поле XO
"+---+---+---+"
"|   |   |   |"
"+---+---+---+"
"|   |   |   |"
"+---+---+---+"
"|   |   |   |"
"+---+---+---+"
*/

// обявление и реализации ф-ции StartGameXO()
//  начать новую игру XO
void StartGameXO()
{ // начало ф-ции
  // тело ф-ции
    system("cls"); // очистка экрана
    // прорисовка игрового поля XO
    SetPos(gridRow + 0, gridCol); cout << "+---+---+---+";
    SetPos(gridRow + 1, gridCol); cout << "|   |   |   |";
    SetPos(gridRow + 2, gridCol); cout << "+---+---+---+";
    SetPos(gridRow + 3, gridCol); cout << "|   |   |   |";
    SetPos(gridRow + 4, gridCol); cout << "+---+---+---+";
    SetPos(gridRow + 5, gridCol); cout << "|   |   |   |";
    SetPos(gridRow + 6, gridCol); cout << "+---+---+---+";
    // показать курсор на экране
    CursorHide(TRUE, 25); // 10 - 10%, 25 - 25%
    // основной цикл игры - цикл игрового процесса
    bool GameOver = false; // переменная окончания игры
    int gRow, gCol; // текущие координаты курсора в сетке
    gRow = gridRow + 1;
    gCol = gridCol + 2;
    int row = 0, col = 0; // 
    bool isTurnX = true; // true - первыми ходят крестики

    //  Двумерный массив 3x3 для хранения информации об ячейках игрового поля
    int cell[3][3] = { 0 }; // заполнение массива нулями

    while (!GameOver) //while (GameOver == false)
    {
        SetPos(gRow, gCol); // курсор в текущую позицию
        // ожидание нажатия клавиш пользователем
        int key = _getch();
        //
        switch (key)
        {
        case _KEY::UP: // вверх
            if (row > 0) {
                gRow -= 2; // перемещение курсора вверх
                row--;
            }
            break;
        case _KEY::DOWN: // вниз
            if (row < 2) {
                gRow += 2; // перемещение курсора вниз
                row++;
            }
            break;
        case _KEY::LEFT: // влево
            if (col > 0) {
                gCol -= 4; // перемещение курсора влево
                col--;
            }
            break;
        case _KEY::RIGHT: // вправо
            if (col < 2) {
                gCol += 4;
                col++;
            }
            break;

        case _KEY::ENTER: case _KEY::SPACE: // ход игрока
          // проверка ячейки на занятость
            if (cell[row][col] != 0) { break; } // выходим, если ячейка занята
            // ячейка свободна: cell[row][col] == 0
            if (isTurnX == true) { // ход крестиков
                cout << "X";
                cell[row][col] = 1; // запоминаем X в ячейке (row,col)
                //isTurnX = false; //isTurnX = !true;
            }
            else {
                cout << "O";
                cell[row][col] = 2; // запоминаем X в ячейке (row,col)
                //isTurnX = true;
            }
            isTurnX = !isTurnX;
            break;

        case ESC: // выход из игры в основное меню

            break;
        } // switch(key)
    } // while(!GameOver)
} // конец ф-ции StartGameXO()


// ф-ция для настроек параметров игры
void Settings()
{
}
// ф-ция для вывода статистики на экран
void StatGame()
{
}
// ф-ция вывода информ. об авторах и игре
void About()
{ // начало ф-ции
    system("cls"); // команда очистки экрана cls - Clear Screen
    SetPos(3, 5);
    cout << "Игра \"Крестики-Нолики\"";
    SetPos(4, 5);
    cout << "Автор: группа SEP-211/1";
    SetPos(6, 5);
    //system("pause"); // пауза в консоли программы с выводом "Для продолжения нажмите любую клавишу"
    system("pause > nul"); // пауза в консоли программы без паразитного вывода
    system("cls"); // очистка экрана перед возвращением в меню
} // конец ф-ции

// ф-ция main()
int main() {
    setlocale(LC_ALL, "Rus");

    // Вывод приветствия - приглашение к игре (пролог)

    // Бесконечный цикл для главного меню игры
    // В цикле:
    //   печать, вывод пунктов меню (Начать игру, Настройки, Об авторах, и т.д.);
    //   обработка нажатия клавиш:
    //    если пользователь нажал на кнопку - узнать на какую кнопку нажал пользователь
    //    среагировать на нажатие кнопок ESC, ENTER, UP/DOWN/LEFT/RIGHT
    bool isWork = true; // сигнал о работе/завершения цикла меню
    //system("color 2A"); // команда изменения цвета всей консоли
    while (isWork == true)
    {
        CursorHide(); // скрыть курсор экрана

        // Вывод пунктов меню
        SetPos(menuRow + 0, menuCol);
        if (Select == 0) { SetColor(cSelFon, cSelSym); }
        else { SetColor(cUnSelFon, cUnSelSym); }
        cout << "Начать новую игру";

        SetPos(menuRow + 1, menuCol);
        if (Select == 1) { SetColor(cSelFon, cSelSym); }
        else { SetColor(cUnSelFon, cUnSelSym); }
        cout << "Настройки";

        SetPos(menuRow + 2, menuCol);
        if (Select == 2) { SetColor(cSelFon, cSelSym); }
        else { SetColor(cUnSelFon, cUnSelSym); }
        cout << "Статистика игры";

        SetPos(menuRow + 3, menuCol);
        if (Select == 3) { SetColor(cSelFon, cSelSym); }
        else { SetColor(cUnSelFon, cUnSelSym); }
        cout << "Об авторах";

        SetPos(menuRow + 4, menuCol);
        if (Select == 4) { SetColor(cSelFon, cSelSym); }
        else { SetColor(cUnSelFon, cUnSelSym); }
        cout << "Выход";

        // восстанвливаем цвет консоли по умолчанию
        SetColor(cDefFon, cDefSym); // (0, 7)

        // обработка нажатий клавиш
        //if ( _kbhit() )//if ( _kbhit() != 0 )
        { // было нажатие клавиши на клавиатуре
          // получить код нажатой кнопки
            int key = _getch();
            // обработка кода нажатой клавиши
            switch (key)
            {
            case _KEY::UP:    // кнопка вверх
            case 'w': case 'W': case _KEY::LEFT:
                if (Select > 0) { Select--; }
                else { Select = 4; } // вкруговую
                break;
            case _KEY::DOWN:  // кнопка вниз
            case 's': case 'S': case _KEY::RIGHT:
                if (Select < 4) { Select++; }
                else { Select = 0; } // вкруговую
                break;
            case _KEY::ENTER: // Выбор пункта меню
              //SetPos(menuRow + 5 + 2, menuCol);
              //cout << "Был выбран " << Select + 1
              //  << " пункт меню";
              // Обработка команд меню
                switch (Select)
                {
                case 0: // Начать новую игру
                    StartGameXO(); // вызов ф-ции начала игры StartGameXO()
                    break;
                case 1: // Настройки
                    Settings(); // вызов ф-ции для настроек игры
                    break;
                case 2: // Статистика
                    StatGame(); // вызов ф-ции для отображения статистики игр
                    break;
                case 3: // Об авторах
                    About(); // вызов ф-ции About() - вывод информации
                             //  об авторе программы
                    break;
                case 4: // Выход
                    isWork = false;
                    break;
                }
                break;
            case ESC:         // _KEY::ESC:
              // выход из меню
                isWork = false;
                break;
            } // switch(key);
        } // if(_kbhit())
    } // while( isWork == true )

    // Вывод о завершении работы программы (эпилог)
    SetPos(0, 0); // координата верхнего левого угла окна консоли
    cout << "Good bye...";

    cin.get(); cin.get(); // блокирующие консоль ф-ции 
} // main()
