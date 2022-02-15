//
// Source.cpp
//
#include <iostream>
#include <Windows.h> // ��� Sleep()
#include <time.h>    // ��� time(), clock()
#include <conio.h>   // ��� _kbhit(), _getch()
#include "Win10.h"   // �������� ������������ ���� Win10.h
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

// ���������� �������

// ���������� ���������� ��� ����:
//  ���������� ������ �������� ����: ������, �������
int menuRow = 5, menuCol = 8;
//  ��������� ��� ������� ��������� ������ ����
int Select = 0;
//  ��������� ��� ����� ������� ���� - ���������, ����������, ���� �� ���������
int cSelFon = _COLOR::purple;
int cSelSym = _COLOR::black;

int cUnSelFon = _COLOR::black;
int cUnSelSym = _COLOR::green;

// ����������� ���� ������� (0,7)
int cDefFon = black;    // _COLOR::black;
int cDefSym = white;    // _COLOR::white;

// ���������� ���������� ��� ����:
//  ���������� ��������-������ ���� ����: ������, �������
int gridRow = 4, gridCol = 10;

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

// ��������� � ���������� �-��� StartGameXO()
//  ������ ����� ���� XO
void StartGameXO()
{ // ������ �-���
  // ���� �-���
    system("cls"); // ������� ������
    // ���������� �������� ���� XO
    SetPos(gridRow + 0, gridCol); cout << "+---+---+---+";
    SetPos(gridRow + 1, gridCol); cout << "|   |   |   |";
    SetPos(gridRow + 2, gridCol); cout << "+---+---+---+";
    SetPos(gridRow + 3, gridCol); cout << "|   |   |   |";
    SetPos(gridRow + 4, gridCol); cout << "+---+---+---+";
    SetPos(gridRow + 5, gridCol); cout << "|   |   |   |";
    SetPos(gridRow + 6, gridCol); cout << "+---+---+---+";
    // �������� ������ �� ������
    CursorHide(TRUE, 25); // 10 - 10%, 25 - 25%
    // �������� ���� ���� - ���� �������� ��������
    bool GameOver = false; // ���������� ��������� ����
    int gRow, gCol; // ������� ���������� ������� � �����
    gRow = gridRow + 1;
    gCol = gridCol + 2;
    int row = 0, col = 0; // 
    bool isTurnX = true; // true - ������� ����� ��������

    //  ��������� ������ 3x3 ��� �������� ���������� �� ������� �������� ����
    int cell[3][3] = { 0 }; // ���������� ������� ������

    while (!GameOver) //while (GameOver == false)
    {
        SetPos(gRow, gCol); // ������ � ������� �������
        // �������� ������� ������ �������������
        int key = _getch();
        //
        switch (key)
        {
        case _KEY::UP: // �����
            if (row > 0) {
                gRow -= 2; // ����������� ������� �����
                row--;
            }
            break;
        case _KEY::DOWN: // ����
            if (row < 2) {
                gRow += 2; // ����������� ������� ����
                row++;
            }
            break;
        case _KEY::LEFT: // �����
            if (col > 0) {
                gCol -= 4; // ����������� ������� �����
                col--;
            }
            break;
        case _KEY::RIGHT: // ������
            if (col < 2) {
                gCol += 4;
                col++;
            }
            break;

        case _KEY::ENTER: case _KEY::SPACE: // ��� ������
          // �������� ������ �� ���������
            if (cell[row][col] != 0) { break; } // �������, ���� ������ ������
            // ������ ��������: cell[row][col] == 0
            if (isTurnX == true) { // ��� ���������
                cout << "X";
                cell[row][col] = 1; // ���������� X � ������ (row,col)
                //isTurnX = false; //isTurnX = !true;
            }
            else {
                cout << "O";
                cell[row][col] = 2; // ���������� X � ������ (row,col)
                //isTurnX = true;
            }
            isTurnX = !isTurnX;
            break;

        case ESC: // ����� �� ���� � �������� ����

            break;
        } // switch(key)
    } // while(!GameOver)
} // ����� �-��� StartGameXO()


// �-��� ��� �������� ���������� ����
void Settings()
{
}
// �-��� ��� ������ ���������� �� �����
void StatGame()
{
}
// �-��� ������ ������. �� ������� � ����
void About()
{ // ������ �-���
    system("cls"); // ������� ������� ������ cls - Clear Screen
    SetPos(3, 5);
    cout << "���� \"��������-������\"";
    SetPos(4, 5);
    cout << "�����: ������ SEP-211/1";
    SetPos(6, 5);
    //system("pause"); // ����� � ������� ��������� � ������� "��� ����������� ������� ����� �������"
    system("pause > nul"); // ����� � ������� ��������� ��� ����������� ������
    system("cls"); // ������� ������ ����� ������������ � ����
} // ����� �-���

// �-��� main()
int main() {
    setlocale(LC_ALL, "Rus");

    // ����� ����������� - ����������� � ���� (������)

    // ����������� ���� ��� �������� ���� ����
    // � �����:
    //   ������, ����� ������� ���� (������ ����, ���������, �� �������, � �.�.);
    //   ��������� ������� ������:
    //    ���� ������������ ����� �� ������ - ������ �� ����� ������ ����� ������������
    //    ������������ �� ������� ������ ESC, ENTER, UP/DOWN/LEFT/RIGHT
    bool isWork = true; // ������ � ������/���������� ����� ����
    //system("color 2A"); // ������� ��������� ����� ���� �������
    while (isWork == true)
    {
        CursorHide(); // ������ ������ ������

        // ����� ������� ����
        SetPos(menuRow + 0, menuCol);
        if (Select == 0) { SetColor(cSelFon, cSelSym); }
        else { SetColor(cUnSelFon, cUnSelSym); }
        cout << "������ ����� ����";

        SetPos(menuRow + 1, menuCol);
        if (Select == 1) { SetColor(cSelFon, cSelSym); }
        else { SetColor(cUnSelFon, cUnSelSym); }
        cout << "���������";

        SetPos(menuRow + 2, menuCol);
        if (Select == 2) { SetColor(cSelFon, cSelSym); }
        else { SetColor(cUnSelFon, cUnSelSym); }
        cout << "���������� ����";

        SetPos(menuRow + 3, menuCol);
        if (Select == 3) { SetColor(cSelFon, cSelSym); }
        else { SetColor(cUnSelFon, cUnSelSym); }
        cout << "�� �������";

        SetPos(menuRow + 4, menuCol);
        if (Select == 4) { SetColor(cSelFon, cSelSym); }
        else { SetColor(cUnSelFon, cUnSelSym); }
        cout << "�����";

        // �������������� ���� ������� �� ���������
        SetColor(cDefFon, cDefSym); // (0, 7)

        // ��������� ������� ������
        //if ( _kbhit() )//if ( _kbhit() != 0 )
        { // ���� ������� ������� �� ����������
          // �������� ��� ������� ������
            int key = _getch();
            // ��������� ���� ������� �������
            switch (key)
            {
            case _KEY::UP:    // ������ �����
            case 'w': case 'W': case _KEY::LEFT:
                if (Select > 0) { Select--; }
                else { Select = 4; } // ���������
                break;
            case _KEY::DOWN:  // ������ ����
            case 's': case 'S': case _KEY::RIGHT:
                if (Select < 4) { Select++; }
                else { Select = 0; } // ���������
                break;
            case _KEY::ENTER: // ����� ������ ����
              //SetPos(menuRow + 5 + 2, menuCol);
              //cout << "��� ������ " << Select + 1
              //  << " ����� ����";
              // ��������� ������ ����
                switch (Select)
                {
                case 0: // ������ ����� ����
                    StartGameXO(); // ����� �-��� ������ ���� StartGameXO()
                    break;
                case 1: // ���������
                    Settings(); // ����� �-��� ��� �������� ����
                    break;
                case 2: // ����������
                    StatGame(); // ����� �-��� ��� ����������� ���������� ���
                    break;
                case 3: // �� �������
                    About(); // ����� �-��� About() - ����� ����������
                             //  �� ������ ���������
                    break;
                case 4: // �����
                    isWork = false;
                    break;
                }
                break;
            case ESC:         // _KEY::ESC:
              // ����� �� ����
                isWork = false;
                break;
            } // switch(key);
        } // if(_kbhit())
    } // while( isWork == true )

    // ����� � ���������� ������ ��������� (������)
    SetPos(0, 0); // ���������� �������� ������ ���� ���� �������
    cout << "Good bye...";

    cin.get(); cin.get(); // ����������� ������� �-��� 
} // main()
