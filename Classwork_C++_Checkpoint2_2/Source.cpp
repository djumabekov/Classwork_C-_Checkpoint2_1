#include <iostream>
#include <iomanip> // набор манипуляторов
#include <time.h> // для ф-ции time()

using namespace std;

/*
13. ***Написать программу, которая рисует
прямоугольные треугольники 4х видов.

+        +    +++    +++
++      ++    ++      ++
+++    +++    +        +

размер одной стороны прямоугольника задает пользователь.
Общение с пользователем организовать через меню.
*/
int main()
{
    setlocale(LC_ALL, "Rus");
    int a;
    cout << "Введите длину катетa:";
    cin >> a;

    char sym;
    cout << "Введите символ";
    cin >> sym;

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << sym;
        }
        cout << endl;
    }
    cout << endl;


    for (int i = 0; i < a; i++) {
        for (int j = 0; j < a - (i + 1); j++) {
            cout << " ";
        }
        for (int k = 0; k < i + 1; k++) {
            cout << sym;
        }
        cout << endl;
    }
    cout << endl;

    for (int i = a; i > 0; i--) {
        //for (int j = 0; j < i; j++)
        for (int j = i; j > 0; j--)
        {
            cout << sym;
        }
        cout << endl;
    }
    cout << endl;


    for (int i = a; i > 0; i--)
    {
        for (int j = 0; j < a - i; j++)
        {
            cout << " ";
        }
        for (int k = 0; k < i; k++)
        {
            cout << sym;
        }
        cout << endl;
    }
    cin.get(); cin.get();
}


#include <iostream>
#include <Windows.h> // для SetPos(), SetColor(), Sleep()
#include <time.h>    // для time(), clock()
#include <conio.h>   // для _kbhit(), _getch(), _getche() = _getch + echo
using namespace std;


// функция для смена цвета
void SetColor(int colBkgr, int colSym)
{
    int wAttributes = colBkgr * 16 + colSym;
    HANDLE hOUTPUT = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hOUTPUT, wAttributes);
}

// Функция для установки позиции курсора вывода
void SetPos(int Row, int Col)
{
    COORD cd;
    cd.X = Col;
    cd.Y = Row;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), cd);
}


// печисление константных имен для цветов консоли
// безымянное перечисление
enum
{
    black,    // 0 - по умолчанию перечисление начинается с нуля
              //     const int black = 0;
              blue,     // 1 <= black + 1;  const int blue  = black + 1;
              // далее остальные цвета

};



// перечисление кодов клавиш клавиатуры
// имяннованное перечисление с именем KEY
enum KEY
{
    ESC = 27,     // const int ESC = 27;
    ENTER = 13,     // ВВОД
    SPACE = 32,     // пробел
    UP = 72,     // стрелка вверх
    DOWN = 80,     // стрелка вниз
    LEFT = 75,     // стрелка влево
    RIGHT = 77,     // стрелка вправо
};


// примеры использования ф-ций
//  SetPos(), SetColor(), _kbhit(), _getch()
int main()
{
    setlocale(LC_ALL, "Rus");



    cin.get(); cin.get(); // блокирующие консоль функции
} // main()


#include <iostream>
#include <Windows.h> // для Sleep()
#include <time.h>    // для time(), clock()
#include <conio.h>   // для _kbhit(), _getch()

// добавть заголовочный файл Win10.h

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

// Глобальная область кода

// Глобальные переменные для меню:
//  Координаты вывода главного меню: строка, столбец
//  Пременная для индекса активного пункта меню
//  Пременные для цвета пунктов меню - активного, неактивных, цвет по умолчанию

// Глобальные переменные для игры:
//  Координата верхнего-левого угла поля: строка, столбец
//  Двумерный массив 3x3 для хранения информации об ячейках игрового поля


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

int main() {
    setlocale(LC_ALL, "Rus");

    // Вывод приветствия - приглашение к игре (пролог)

    // Бесконечный цикл для главного меню игры
    // В цикле:
    //   печать, вывод пунктов меню (Начать игру, Настройки, Об авторах, и т.д.);
    //   обработка нажатия клавиш:
    //    если пользователь нажал на кнопку - узнать на какую кнопку нажал пользователь
    //    среагировать на нажатие кнопок ESC, ENTER, UP/DOWN/LEFT/RIGHT

    // Вывод о завершении работы программы (эпилог)

    cin.get(); cin.get(); // блокирующие консоль ф-ции 
} // main()
