#include <iostream>
#include <string>
#include <iomanip>  // setw()
#include <time.h>
using namespace std;

/*
1. *�������� �������, ������� ��������� ����� �����,
� ���������� ��� ���.
2. *�������� �������, ������� ��������� ��� ����� �����,
� ���������� �� �����.
*/


// �-��� ���������� ���� ��� �������� � ��������� N
int Cub(int N)
{
	int result = N * N * N; // ���������� ����
	// �� ������� �������� - ����� �� ����� ��� ������������
	//cout << "result = " << result << endl;
	return result; // ����� �� �-��� � ������� ����������
}

int Cub2()
{
	cout << "������� �����: ";
	int N;
	cin >> N;
	return N * N * N;
	//return cin >> N, N* N* N;
}

int main()
{
	system("chcp 1251>nul");
	srand(time(0));
	int a = 10;
	// ������ �-��� Cub()
	cout << a << "**3 = " << Cub(a) << endl; // ��� ���������� ����������
	// � ���������� � ���������� res
	int res = Cub(a);
	cout << "res = " << res << endl;

	int res2 = Cub(res);
	cout << "res2 = " << res2 << endl;

	cin.get(); cin.get();
}


#include <iostream>
#include <string>
#include <iomanip>  // setw()
#include <time.h>
using namespace std;

/*
2. *�������� �������, ������� ��������� ��� �����,
� ���������� �� �����.
*/

float Summa(float a, float b) {
	//float res = a + b;
	//return res;
	return a + b; // ����������� �������
}

int main()
{
	system("chcp 1251>nul");
	srand(time(0));
	cout << "Enter 2 number: ";
	float a, b;
	cin >> a >> b;
	// ������ �-��� Summa()
	float res = Summa(a, b);
	cout << a << " + " << b << " = " << res << endl;
	cout << a << " + " << b << " = " << Summa(a, b) << endl;

	cin.get(); cin.get();
}


#include <iostream>
#include <string>
#include <iomanip>  // setw()
#include <time.h>
using namespace std;

/*
4. *�������� �������, ������� ��������� ��� ����� �����,
� ���������� ������� �� ���.

5. *�������� �������, ������� ��������� ��� ����� �����,
� ���������� ������� �� ���.
*/
int Max(int a, int b) {
	if (a > b) {
		return a;
	}
	return b;
}

int Max3(int a, int b, int c) {
	// 1 ������� � ������� �-��� Max()
	/*int Res = Max(a, b);
	Res = Max(Res, c);
	return Res;*/
	// 2 ������� � ������� ���������� ������ �-��� Max()
	return Max(Max(a, b), c);
}

int main()
{
	system("chcp 1251>nul");
	srand(time(0));
	cout << "Enter 2 number: ";
	int a, b;
	cin >> a >> b;

	// ������ �-��� Max()
	cout << "Max = " << Max(a, b) << endl;

	// �������� ������ �-��� Max3()
	cout << "Enter c: ";
	int c;
	cin >> c;
	// ������ �-��� Max3()
	cout << "Max3 = " << Max3(a, b, c) << endl;

	cin.get(); cin.get();
}

#include <iostream>
#include <string>
#include <iomanip>  // setw()
#include <time.h>
using namespace std;

/*
6. *�������� �������, ������� ��������� ����������
������ ����� ����� � ���������� ����� ���� �����.
*/
int SumMas(int mas[], int size)
{
	int sum = 0; // ���������� �����
	for (int i = 0; i < size; i++) {
		sum += mas[i]; // ���������� �����
	}
	return sum; // ���������� ����� ��������� �������
}

// �-��� ������ ������� �� �����
void PrintMas(int mas[], int size)
{ // ������ �-��� - ������ �-���
	for (int i = 0; i < size; i++) {
		cout << mas[i] << " ";
		// mas[i] = rand() %
	}
	cout << endl;
} // ����� �-��� - ������ �-���

int main()
{
	system("chcp 1251>nul");
	srand(time(0));
	const int size = 10;
	// ��-��� �������
	int mas[size] = { 1,2,3,4,5,6,7,8,9,10 };
	// ������ ������� � ������� �-��� PrintMas()
	PrintMas(mas, size);
	//int res = PrintMas(mas, size); - ������, �.�. �-���
	//      PrintMas() �� ���������� ��������

	int summa = SumMas(mas, size);
	cout << "summa = " << summa << endl;
	// PrintMas() ����� �������� ����� ���
	PrintMas(mas, size);
	PrintMas(mas, size);
	PrintMas(mas, size);
	cin.get(); cin.get();
}

