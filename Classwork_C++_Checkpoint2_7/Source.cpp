#include <iostream>
#include <iomanip>  // setw()
#include <time.h>
using namespace std;

/*
  Массивы, отладка
*/
int main()
{
    setlocale(LC_ALL, "Rus");
    srand(time(0));
    const int Size = 10;
    int mas[Size];
    cout << mas << endl; // печать адреса массива
    for (int i = 0; i < Size; i++)
    {
        mas[i] = rand() % 10; // 0..9
        cout << mas[i] << " ";
    }
    int Sum = 0;
    for (int i = 0; i < Size; i++)
    {
        Sum += mas[i];
    }
    cout << "Summa = " << Sum << endl;

    cin.get(); cin.get();
}


#include <iostream>
#include <iomanip>  // setw()
#include <time.h>
using namespace std;

/*
 Двумерные массивы
1) *Пользователь вводит с клавиатуры числа N и M.
Организуйте заполнение матрицы (двумерного массива)
N x M
a) вводом с клавиатуры;
b) случайными значениями;
после чего выведите ее на экран.
*/
int main()
{
    setlocale(LC_ALL, "Rus");
    srand(time(0));
    const int Row = 5; // кол-во строк двум. массива
    const int Col = 8; // кол-во столбцов двум. массива
    int mas[Row][Col]; // двумерный массив размером Row на Col
    // цикл иниц-ции массива
    for (int i = 0; i < Row; i++) { // по строкам
        for (int j = 0; j < Col; j++) { // по столбцам
          // rand()% (Max - Min + 1) + Min;
          // 1..100 ==> %(100 - 1 + 1) + 1
            mas[i][j] = rand() % 100 + 1;
            cout << setw(3) << mas[i][j] << " "; // печать одной строки двум. массива
        }
        cout << endl; // конец i-ой строки
    }
    cout << endl;
    cin.get(); cin.get();
}


#include <iostream>
#include <iomanip>  // setw()
#include <time.h>
using namespace std;

/*
 Двумерные массивы
3) **В двумерном массиве целых чисел посчитать сумму элементов:
a) в каждой строке;
b) в каждом столбце;
c) ***одновременно по всем строкам и всем столбцам.
Оформить следующим образом:
  3  5  6  7 | 21
 12  1  1  1 | 15
  0  7 12  1 | 20
------------------
 15 13 19  9 | 56
*/
// размеры двум. массива
#define ROW 3  /* годы */
#define COL 4  /* кварталы */

int main()
{
    setlocale(LC_ALL, "Rus");
    srand(time(0));
    int mas[ROW][COL];
    int Min, Max;
    cout << "Введите диапазон прибылей: ";
    cin >> Min >> Max;
    if (Min > Max) { swap(Min, Max); }
    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++) {
            mas[i][j] = rand() % (Max - Min + 1) + Min;
            cout << setw(4) << mas[i][j] << " ";
        }
        cout << endl; // конец строки
    }
    cout << endl;
    int Sum = 0;
    int Total = 0; // общая, итоговая сумма массива
    for (int i = 0; i < ROW; i++) {
        Sum = 0; // обнуление Sum перед суммой каждой строки
        for (int j = 0; j < COL; j++) {
            cout << setw(4) << mas[i][j] << " ";
            Sum += mas[i][j]; // накопление суммы
        }
        // печать суммы i-той строки
        cout << " | " << Sum << endl;
        //Total += Sum;
    }
    cout << "--------------------------\n";

    for (int j = 0; j < COL; j++) { // по столбцам
        int Sum = 0;
        for (int i = 0; i < ROW; i++) { // по строкам
            Sum += mas[i][j]; // сумма по столбцам
            //Total += mas[i][j];
        }
        // печать суммы j-ого столбца
        cout << setw(4) << Sum << " ";
        Total += Sum; // по суммам столбцов
    }
    // итоговая, общая сумма
    cout << " | " << Total << endl;

    cin.get(); cin.get();
}
