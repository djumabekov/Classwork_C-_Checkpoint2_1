#include <iostream>
#include <iomanip> // ����� �������������
#include <time.h> // ��� �-��� time()

using namespace std;

/*
13. ***�������� ���������, ������� ������
������������� ������������ 4� �����.

+        +    +++    +++
++      ++    ++      ++
+++    +++    +        +

������ ����� ������� �������������� ������ ������������.
������� � ������������� ������������ ����� ����.
*/
int main()
{
    setlocale(LC_ALL, "Rus");
    int a;
    cout << "������� ����� �����a:";
    cin >> a;

    char sym;
    cout << "������� ������";
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
#include <Windows.h> // ��� SetPos(), SetColor(), Sleep()
#include <time.h>    // ��� time(), clock()
#include <conio.h>   // ��� _kbhit(), _getch(), _getche() = _getch + echo
using namespace std;


// ������� ��� ����� �����
void SetColor(int colBkgr, int colSym)
{
    int wAttributes = colBkgr * 16 + colSym;
    HANDLE hOUTPUT = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hOUTPUT, wAttributes);
}

// ������� ��� ��������� ������� ������� ������
void SetPos(int Row, int Col)
{
    COORD cd;
    cd.X = Col;
    cd.Y = Row;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), cd);
}


// ���������� ����������� ���� ��� ������ �������
// ���������� ������������
enum
{
    black,    // 0 - �� ��������� ������������ ���������� � ����
              //     const int black = 0;
              blue,     // 1 <= black + 1;  const int blue  = black + 1;
              // ����� ��������� �����

};



// ������������ ����� ������ ����������
// ������������ ������������ � ������ KEY
enum KEY
{
    ESC = 27,     // const int ESC = 27;
    ENTER = 13,     // ����
    SPACE = 32,     // ������
    UP = 72,     // ������� �����
    DOWN = 80,     // ������� ����
    LEFT = 75,     // ������� �����
    RIGHT = 77,     // ������� ������
};


// ������� ������������� �-���
//  SetPos(), SetColor(), _kbhit(), _getch()
int main()
{
    setlocale(LC_ALL, "Rus");



    cin.get(); cin.get(); // ����������� ������� �������
} // main()


#include <iostream>
#include <Windows.h> // ��� Sleep()
#include <time.h>    // ��� time(), clock()
#include <conio.h>   // ��� _kbhit(), _getch()

// ������� ������������ ���� Win10.h

using namespace std;


/*
  ��������-������
  0) ������� ���� ����
  1) ������� ���� 3�3 ���� char
  2) ����������� �� �������� ����
  3) �������� ���� �� ����������
  4) ������� ����
  5) ��������� �������� ����
  6) ������������� �������� ����
*/

// ���������� ������� ����

// ���������� ���������� ��� ����:
//  ���������� ������ �������� ����: ������, �������
//  ��������� ��� ������� ��������� ������ ����
//  ��������� ��� ����� ������� ���� - ���������, ����������, ���� �� ���������

// ���������� ���������� ��� ����:
//  ���������� ��������-������ ���� ����: ������, �������
//  ��������� ������ 3x3 ��� �������� ���������� �� ������� �������� ����


/*
������� ���� XO
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

    // ����� ����������� - ����������� � ���� (������)

    // ����������� ���� ��� �������� ���� ����
    // � �����:
    //   ������, ����� ������� ���� (������ ����, ���������, �� �������, � �.�.);
    //   ��������� ������� ������:
    //    ���� ������������ ����� �� ������ - ������ �� ����� ������ ����� ������������
    //    ������������ �� ������� ������ ESC, ENTER, UP/DOWN/LEFT/RIGHT

    // ����� � ���������� ������ ��������� (������)

    cin.get(); cin.get(); // ����������� ������� �-��� 
} // main()
