#include <iostream>
#include <iomanip>  // setw()
#include <time.h>
using namespace std;

/*
  �������, �������
*/
int main()
{
    setlocale(LC_ALL, "Rus");
    srand(time(0));
    const int Size = 10;
    int mas[Size];
    cout << mas << endl; // ������ ������ �������
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
 ��������� �������
1) *������������ ������ � ���������� ����� N � M.
����������� ���������� ������� (���������� �������)
N x M
a) ������ � ����������;
b) ���������� ����������;
����� ���� �������� �� �� �����.
*/
int main()
{
    setlocale(LC_ALL, "Rus");
    srand(time(0));
    const int Row = 5; // ���-�� ����� ����. �������
    const int Col = 8; // ���-�� �������� ����. �������
    int mas[Row][Col]; // ��������� ������ �������� Row �� Col
    // ���� ����-��� �������
    for (int i = 0; i < Row; i++) { // �� �������
        for (int j = 0; j < Col; j++) { // �� ��������
          // rand()% (Max - Min + 1) + Min;
          // 1..100 ==> %(100 - 1 + 1) + 1
            mas[i][j] = rand() % 100 + 1;
            cout << setw(3) << mas[i][j] << " "; // ������ ����� ������ ����. �������
        }
        cout << endl; // ����� i-�� ������
    }
    cout << endl;
    cin.get(); cin.get();
}


#include <iostream>
#include <iomanip>  // setw()
#include <time.h>
using namespace std;

/*
 ��������� �������
3) **� ��������� ������� ����� ����� ��������� ����� ���������:
a) � ������ ������;
b) � ������ �������;
c) ***������������ �� ���� ������� � ���� ��������.
�������� ��������� �������:
  3  5  6  7 | 21
 12  1  1  1 | 15
  0  7 12  1 | 20
------------------
 15 13 19  9 | 56
*/
// ������� ����. �������
#define ROW 3  /* ���� */
#define COL 4  /* �������� */

int main()
{
    setlocale(LC_ALL, "Rus");
    srand(time(0));
    int mas[ROW][COL];
    int Min, Max;
    cout << "������� �������� ��������: ";
    cin >> Min >> Max;
    if (Min > Max) { swap(Min, Max); }
    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++) {
            mas[i][j] = rand() % (Max - Min + 1) + Min;
            cout << setw(4) << mas[i][j] << " ";
        }
        cout << endl; // ����� ������
    }
    cout << endl;
    int Sum = 0;
    int Total = 0; // �����, �������� ����� �������
    for (int i = 0; i < ROW; i++) {
        Sum = 0; // ��������� Sum ����� ������ ������ ������
        for (int j = 0; j < COL; j++) {
            cout << setw(4) << mas[i][j] << " ";
            Sum += mas[i][j]; // ���������� �����
        }
        // ������ ����� i-��� ������
        cout << " | " << Sum << endl;
        //Total += Sum;
    }
    cout << "--------------------------\n";

    for (int j = 0; j < COL; j++) { // �� ��������
        int Sum = 0;
        for (int i = 0; i < ROW; i++) { // �� �������
            Sum += mas[i][j]; // ����� �� ��������
            //Total += mas[i][j];
        }
        // ������ ����� j-��� �������
        cout << setw(4) << Sum << " ";
        Total += Sum; // �� ������ ��������
    }
    // ��������, ����� �����
    cout << " | " << Total << endl;

    cin.get(); cin.get();
}
