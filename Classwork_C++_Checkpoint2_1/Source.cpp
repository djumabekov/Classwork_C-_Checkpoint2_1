#include <iostream>
#include <iomanip>
#include <time.h> // ��� �-��� time()
using namespace std;
/*
������ 7*** (�����)
�������� ���������, ������� ������� �� �����
�������������� ����������� �� �������� ^.
������ ������������ ������ ������������.
��������� ��� ���������:
������� ������ ������������: 5
    ^
   ^^^
  ^^^^^
 ^^^^^^^
^^^^^^^^^
*/
int main()
{
    setlocale(LC_ALL, "Rus");
    cout << "������� ������ ������������: ";
    int size;
    cin >> size;
    cout << "������� ������: ";
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
#include <time.h> // ��� �-��� time()
using namespace std;
/*
������ 3** - ���� ������������ (�������� �������� if)
���� ������������ ���������� � 255-� ���� ����
(��� ���� 1 ������ ��������� ������� ����).
��������� �������� ���������, ������� ��������� ����
(�����, ����� � ���� ������ �������������� ���������),
�� ������� ���������� ���� ������������ � �������� ����.
� ������������� ��������� ���������� ��������:
- ���, ����� �������� ������� ������ �� 400;
- ���, ����� �������� ������� �� 4, �� �� ������� �� 100
*/
int main()
{
    setlocale(LC_ALL, "Rus");
    int year;
    const int beg_date = 1900;
    cout << "������� ��� -> "; cin >> year;
    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
    {
        cout << "12 �������� " << year << endl;
    }
    else
    {
        cout << "13 �������� " << year << endl;
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
    case 0:cout << "�����������" << endl; break;
    case 1:cout << "�������" << endl; break;
    case 2:cout << "�����" << endl; break;
    case 3:cout << "�������" << endl; break;
    case 4:cout << "�������" << endl; break;
    case 5:cout << "�������" << endl; break;
    case 6:cout << "�����������" << endl; break;
    }

    cin.get(); cin.get();
}


#include <iostream>
#include <iomanip>
#include <time.h> // ��� �-��� time()
using namespace std;
/*
1. � ������������������ ����� ����� ���������� ����������
������������� ����� � ���������� ���������, ��������
������� ��������� � ��������� -10 �� -20.
*/
int main()
{
    setlocale(LC_ALL, "Rus");
    srand(time(0));
    int number, col_number;
    // min, max - �������� ��� ��������� ����.����� [-100;100]
    int min = -100, max = 100;
    cout << "���-�� ����� :"; cin >> number;
    int count_1 = 0, count_2 = 0; // ��������
    for (int i = 0; i < number; i++)
    {
        // ��������� ����.����� � ��������� [min;max]
        // rand () % (Max - Min + 1) + Min
        //int a = rand() % 201 + (-100);
        int a = rand() % (max - min + 1) + min;
        cout << a << " ";
        if (a > 0) {
            count_1++; // ������� �����.�����
        }
        else if (a > -20 && a < -10) {
            count_2++; // ������� ����� � ��������� (-20;-10)
        }
    }
    cout << endl;
    cout << "���-�� ������������� ����� :" << count_1 << endl;
    cout << "���-��  ����� (-20 , -10 ) :" << count_2 << endl;
    cin.get(); cin.get();
}


