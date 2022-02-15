#include <iostream>
#include <string>
#include <iomanip>  // setw()
#include <time.h>
using namespace std;

/*
1. *Напишите функцию, которая принимает целое число,
и возвращает его куб.
2. *Напишите функцию, которая принимает два целых числа,
и возвращает их сумму.
*/


// Ф-ция вычисления куба для значения в аргументе N
int Cub(int N)
{
	int result = N * N * N; // вычисление куба
	// не возврат значения - вывод на экран для пользователя
	//cout << "result = " << result << endl;
	return result; // выход из ф-ции и возврат результата
}

int Cub2()
{
	cout << "Введите число: ";
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
	// вызовы ф-ции Cub()
	cout << a << "**3 = " << Cub(a) << endl; // без сохранения результата
	// с сохраненим в переменной res
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
2. *Напишите функцию, которая принимает два числа,
и возвращает их сумму.
*/

float Summa(float a, float b) {
	//float res = a + b;
	//return res;
	return a + b; // сокращенный вариант
}

int main()
{
	system("chcp 1251>nul");
	srand(time(0));
	cout << "Enter 2 number: ";
	float a, b;
	cin >> a >> b;
	// вызовы ф-ции Summa()
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
4. *Напишите функцию, которая принимает два целых числа,
и определяет большее из них.

5. *Напишите функцию, которая принимает три целых числа,
и определяет большее из них.
*/
int Max(int a, int b) {
	if (a > b) {
		return a;
	}
	return b;
}

int Max3(int a, int b, int c) {
	// 1 вариант с помощью ф-ции Max()
	/*int Res = Max(a, b);
	Res = Max(Res, c);
	return Res;*/
	// 2 вариант с помощью вложенного вызова ф-ций Max()
	return Max(Max(a, b), c);
}

int main()
{
	system("chcp 1251>nul");
	srand(time(0));
	cout << "Enter 2 number: ";
	int a, b;
	cin >> a >> b;

	// вызовы ф-ции Max()
	cout << "Max = " << Max(a, b) << endl;

	// проверка работы ф-ции Max3()
	cout << "Enter c: ";
	int c;
	cin >> c;
	// вызовы ф-ции Max3()
	cout << "Max3 = " << Max3(a, b, c) << endl;

	cin.get(); cin.get();
}

#include <iostream>
#include <string>
#include <iomanip>  // setw()
#include <time.h>
using namespace std;

/*
6. *Напишите функцию, которая принимает одномерный
массив целых чисел и возвращает сумму всех чисел.
*/
int SumMas(int mas[], int size)
{
	int sum = 0; // переменная суммы
	for (int i = 0; i < size; i++) {
		sum += mas[i]; // накопление суммы
	}
	return sum; // возвращаем сумму элементов массива
}

// Ф-ция печати массива на экран
void PrintMas(int mas[], int size)
{ // начало ф-ции - пролог ф-ции
	for (int i = 0; i < size; i++) {
		cout << mas[i] << " ";
		// mas[i] = rand() %
	}
	cout << endl;
} // конец ф-ции - эпилог ф-ции

int main()
{
	system("chcp 1251>nul");
	srand(time(0));
	const int size = 10;
	// ин-ция списком
	int mas[size] = { 1,2,3,4,5,6,7,8,9,10 };
	// печать массива с помощью ф-ции PrintMas()
	PrintMas(mas, size);
	//int res = PrintMas(mas, size); - ошибка, т.к. ф-ция
	//      PrintMas() не возвращает значений

	int summa = SumMas(mas, size);
	cout << "summa = " << summa << endl;
	// PrintMas() можно вызывать много раз
	PrintMas(mas, size);
	PrintMas(mas, size);
	PrintMas(mas, size);
	cin.get(); cin.get();
}

