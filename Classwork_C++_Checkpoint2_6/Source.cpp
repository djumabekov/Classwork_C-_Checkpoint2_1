#include <iostream>
#include <iomanip>  // setw()
#include <time.h>
using namespace std;

/*
 �������, ����������
9. *�������� ���������, ����������� ����������
����������� ������� ����� ����� ������� ��������.
������� ���� "��������� ����������������", 4 ����
*/
int main()
{
    setlocale(LC_ALL, "Rus");
    srand(time(0));
    int Size; // ������ ������������� �������
    cout << "������� ������ �������: ";
    cin >> Size;
    // �������� �������������� ������������� �������
    //  �������� Size
    // mas - ��������� �� �����. ������ � ������
    int* mas = new int[Size];

    // �������� ������������� ������������� ������� �������� Size
    // mas2 - ��������� �� �����. ������ � ������
    float* mas2 = new float[Size];

    cout << mas << endl; // ������ ������ �������

    for (int i = 0; i < Size; i++) {
        // 1..20
        mas[i] = rand() % 20 + 1;
        cout << mas[i] << " ";
    }
    cout << endl;

    // ����������
    for (int i = 0; i < Size; i++) { // ���� �������
      // ���� ���������� �������� "��������"
        for (int j = Size - 1; j > 0; j--) {
            //if (mas[j] < mas[j - 1]) { // �� �����������
            if (mas[j] > mas[j - 1]) { // �� ��������
                swap(mas[j], mas[j - 1]); // �����
            }
        }
    }
    // ����� ����������������� �������
    for (int i = 0; i < Size; i++) {
        cout << mas[i] << " ";
    }
    cout << endl;

    // �������� ������������ ��������
    // ������� ����� ���������� ������
    delete[]mas;
    delete[]mas2;

    cin.get(); cin.get();
}

#include <iostream>
#include <iomanip>  // setw()
#include <time.h>
using namespace std;

/*
 �������, ����������
11. **�������� ���������, � ������� ���������� ������ �� 20 �����������
���������� ���������� �� 1 �� 20, �� ����� �������, ����� � ������� ��������
�� �����������.

4. ���������� ������ �� 19 ��������� �������� ���������� �� 1 �� 20 � ��������� �������.
�������� � ������� �� �����������. ���� �� �������� � ��������� �� 1 �� 20 ���������.
a** ) ���������� �������� ���������, ������� ������ ����������� ��������.
b***) ���������� �������� ���������, ������� ������ ����������� �������� ��������� ������ ���� ���� - �� ���� ������ �� �������.
������ ������������ ���������� � ��������� �����.
*/
int main()
{
    setlocale(LC_ALL, "Rus");
    srand(time(0));
    int Size;
    cout << "������� ������ �������: ";
    cin >> Size;
    int* mas = new int[Size];
    for (int i = 0; i < Size; i++) {
        mas[i] = i + 1;
        cout << mas[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < Size * 5; i++) {
        int i1 = rand() % Size;
        int i2 = rand() % Size;
        swap(mas[i1], mas[i2]);
    }
    for (int i = 0; i < Size; i++) {
        cout << mas[i] << " ";
    }
    cout << endl;
    // 4 ������
    int Size2 = Size - 1;
    int* mas2 = new int[Size2];
    int i1 = rand() % Size; //������ �� ��������
    /*cout << "������� ������ ��� ��������: ";
    int i1;
    cin >> i1;*/
    for (int i = 0, j = 0; i < Size; i++) {
        if (i != i1) {
            mas2[j++] = mas[i];
        }
    }
    for (int i = 0; i < Size2; i++) {
        cout << mas2[i] << " ";
    }
    // ����������
    for (int i = 0; i < Size2; i++) {
        for (int j = Size2 - 1; j > 0; j--) {
            if (mas2[j] < mas2[j - 1]) {
                swap(mas2[j], mas2[j - 1]);
            }
        }
    }
    cout << endl;
    for (int i = 0; i < Size2; i++) {
        cout << mas2[i] << " ";
    }
    cout << endl;
    int sum = Size * (Size + 1) / 2;
    for (int i = 0; i < Size2; i++) {
        sum -= mas2[i];
    }
    cout << sum << " ";

    delete mas;
    delete mas2;
    cin.get(); cin.get();
}

