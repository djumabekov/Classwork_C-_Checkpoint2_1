#include <iostream>
#include <iomanip>
#include <time.h> // для ф-ции time()
using namespace std;
/*
Задача 7*** (Циклы)
Написать программу, которая выводит на экран
равнобедренный треугольник из символов ^.
Высоту треугольника вводит пользователь.
Примерный вид программы:
Введите высоту треугольника: 5
    ^
   ^^^
  ^^^^^
 ^^^^^^^
^^^^^^^^^
*/
int main()
{
    setlocale(LC_ALL, "Rus");
    cout << "введите высоту треугольника: ";
    int size;
    cin >> size;
    cout << "введите символ: ";
    char simvol;
    cin >> simvol;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size - (i + 1); j++) {
            cout << " ";
        }
        for (int j = 0; j < i * 2 + 1; j++) {
            cout << simvol;
        }
        cout << endl;
    }
    cin.get(); cin.get();
}


#include <iostream>
#include <iomanip>
#include <time.h> // для ф-ции time()
using namespace std;
/*
Задача 3** - День программиста (условный оператор if)
День программиста отмечается в 255-й день года
(при этом 1 января считается нулевым днем).
Требуется написать программу, которая определит дату
(месяц, число и день недели григорианского календаря),
на которую приходится День программиста в заданном году.
В григорианском календаре високосным является:
- год, номер которого делится нацело на 400;
- год, номер которого делится на 4, но не делится на 100
*/
int main()
{
    setlocale(LC_ALL, "Rus");
    int year;
    const int beg_date = 1900;
    cout << "Введите год -> "; cin >> year;
    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
    {
        cout << "12 сентября " << year << endl;
    }
    else
    {
        cout << "13 сентября " << year << endl;
    }
    int days = 0;
    for (int i = beg_date; i < year; i++)
    {
        if (i % 400 == 0 || i % 4 == 0 && i % 100 != 0)
        {
            days += 366;
        }
        else
        {
            days += 365;
        }
    }
    int week_day = (days + 256 - 1) % 7;
    switch (week_day)
    {
    case 0:cout << "понедельник" << endl; break;
    case 1:cout << "вторник" << endl; break;
    case 2:cout << "среда" << endl; break;
    case 3:cout << "четверг" << endl; break;
    case 4:cout << "пятница" << endl; break;
    case 5:cout << "суббота" << endl; break;
    case 6:cout << "воскресенье" << endl; break;
    }

    cin.get(); cin.get();
}


#include <iostream>
#include <iomanip>
#include <time.h> // для ф-ции time()
using namespace std;
/*
1. В последовательности целых чисел определить количество
положительных чисел и количество элементов, значения
которых находятся в интервале -10 до -20.
*/
int main()
{
    setlocale(LC_ALL, "Rus");
    srand(time(0));
    int number, col_number;
    // min, max - диапазон для генерации случ.чисел [-100;100]
    int min = -100, max = 100;
    cout << "Кол-во чисел :"; cin >> number;
    int count_1 = 0, count_2 = 0; // счетчики
    for (int i = 0; i < number; i++)
    {
        // генерация случ.чисел в диапазоне [min;max]
        // rand () % (Max - Min + 1) + Min
        //int a = rand() % 201 + (-100);
        int a = rand() % (max - min + 1) + min;
        cout << a << " ";
        if (a > 0) {
            count_1++; // подсчет полож.чисел
        }
        else if (a > -20 && a < -10) {
            count_2++; // подсчет чисел в диапазоне (-20;-10)
        }
    }
    cout << endl;
    cout << "Кол-во положительных чисел :" << count_1 << endl;
    cout << "Кол-во  чисел (-20 , -10 ) :" << count_2 << endl;
    cin.get(); cin.get();
}


