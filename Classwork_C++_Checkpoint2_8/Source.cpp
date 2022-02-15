#include <iostream>
#include <string>
#include <iomanip>  // setw()
#include <time.h>
using namespace std;

/*
12. ***�������� ��������� <����������>. ������� ��� ���������� �������. ����
������ ������ ������ ICQ, ������ - ���������� ������. ����������� ���� ���
������������:
a) ������������� �� ������� ICQ
b) ������������� �� ������� ��������
c) ������� ������ �������������
d) �����
*/
const int OPERATOR[] = { 701,702,708,705,
                        700,777,778,776,775,707 };
int OperSize = sizeof(OPERATOR) / sizeof(OPERATOR[0]);
int main()
{
    //setlocale(LC_ALL, "Rus");
    system("chcp 1251>nul");
    srand(time(0));
    int size;
    cout << "������� ���-�� ���������: ";
    cin >> size;
    cin.ignore();
    int* ICQ = new int[size];
    long long* Phone = new long long[size];
    string* Name = new string[size];
    cout << "������� ����� ���������: \n";
    int maxLen = 0;
    for (int i = 0; i < size; i++)
    {
        cout << i + 1 << "->";
        //cin >> Name[i];       1-� �������
        getline(cin, Name[i]);//2-� �������
        if (maxLen < Name[i].length())
        {
            maxLen = Name[i].length();
        }
        // rand() (Max-Min+1)+Min; �������� �� 1000 �� 100000;
        ICQ[i] = rand() % 99001 + 1000;
        //Phone[i]=rand()%
        long long Tel = 70'000'000'000;
        //int TempOper = rand() % (OperSize-1 - 0 + 1) + 0;
        int TempOper = rand() % OperSize;
        //Tel += (long long)OPERATOR[TempOper] * 10'000'000LL;//7'070'000'000
        //LL - ������� ��� ���� ������ long long;
        Tel += (long long)OPERATOR[TempOper] * 10'000'000LL;
        Tel += rand() % 9'999'999 + 1;
        Phone[i] = Tel;
    }
    for (int i = 0; i < size; i++) {
        cout << i + 1 << " | "
            << left
            << setw(maxLen + 2) << Name[i] << " | "
            << right
            << "+" << Phone[i] << " | "
            << setw(7) << ICQ[i]
            << endl;
    }
    while (true)
    {
        cout << "1: ������ ���������." << endl;
        cout << "2: ���������� �� ������." << endl;
        cout << "3: ���������� �� ���������." << endl;
        cout << "4: ���������� �� ICQ." << endl;
        cout << "0. �����." << endl;
        int menu;
        cin >> menu;
        if (menu == 0)
        {
            system("cls");
            cout << "�� ��������!" << endl;
            break;
        }
        switch (menu) {
        case 1:
            for (int i = 0; i < size; i++) {
                cout << i + 1 << " | "
                    << left
                    << setw(maxLen + 2) << Name[i] << " | "
                    << right
                    << "+" << Phone[i] << " | "
                    << setw(7) << ICQ[i]
                    << endl;
            }
            break;
        case 2:
            for (int i = 0; i < size; i++) {
                for (int j = 0; j < size - 1; j++) {
                    if (Name[j] > Name[j + 1]) {
                        swap(Name[j], Name[j + 1]);
                        swap(Phone[j], Phone[j + 1]);
                        swap(ICQ[j], ICQ[j + 1]);
                    }
                }
            }
            break;
        case 3:
            for (int i = 0; i < size; i++) {
                for (int j = 0; j < size - 1; j++) {
                    if (Phone[j] > Phone[j + 1]) {
                        swap(Name[j], Name[j + 1]);
                        swap(Phone[j], Phone[j + 1]);
                        swap(ICQ[j], ICQ[j + 1]);
                    }
                }
            }
            break;
        case 4:
            for (int i = 0; i < size; i++) {
                for (int j = 0; j < size - 1; j++) {
                    if (ICQ[j] > ICQ[j + 1]) {
                        swap(Name[j], Name[j + 1]);
                        swap(Phone[j], Phone[j + 1]);
                        swap(ICQ[j], ICQ[j + 1]);
                    }
                }
            }
            break;
        default:
            cout << "������! ������������ �����." << endl; break;
        }
    }
    cin.get(); cin.get();
}
