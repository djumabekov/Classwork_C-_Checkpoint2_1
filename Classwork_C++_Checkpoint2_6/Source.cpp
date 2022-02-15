#include <iostream>
#include <iomanip>  // setw()
#include <time.h>
using namespace std;

/*
 ћассивы, сортировка
9. *Ќаписать программу, выполн€ющую сортировку
одномерного массива целых чисел методом пузырька.
ƒональд  нут "»скусство программировани€", 4 тома
*/
int main()
{
    setlocale(LC_ALL, "Rus");
    srand(time(0));
    int Size; // размер динамического массива
    cout << "¬ведите размер массива: ";
    cin >> Size;
    // создание целочисленного динамического массива
    //  размером Size
    // mas - указатель на динам. массив в пам€ти
    int* mas = new int[Size];

    // создание вещественного динамического массива размером Size
    // mas2 - указатель на динам. массив в пам€ти
    float* mas2 = new float[Size];

    cout << mas << endl; // печать адреса массива

    for (int i = 0; i < Size; i++) {
        // 1..20
        mas[i] = rand() % 20 + 1;
        cout << mas[i] << " ";
    }
    cout << endl;

    // сортировка
    for (int i = 0; i < Size; i++) { // цикл раундов
      // цикл сортировки метотдом "пузырька"
        for (int j = Size - 1; j > 0; j--) {
            //if (mas[j] < mas[j - 1]) { // по возрастанию
            if (mas[j] > mas[j - 1]) { // по убыванию
                swap(mas[j], mas[j - 1]); // обмен
            }
        }
    }
    // вывод отсортированногой массива
    for (int i = 0; i < Size; i++) {
        cout << mas[i] << " ";
    }
    cout << endl;

    // удаление динамических массивов
    // вовзрат ранее выделенной пам€ти
    delete[]mas;
    delete[]mas2;

    cin.get(); cin.get();
}

#include <iostream>
#include <iomanip>  // setw()
#include <time.h>
using namespace std;

/*
 ћассивы, сортировка
11. **Ќаписать программу, в которой одномерный массив на 20 заполн€етс€
случайными значени€ми от 1 до 20, но таким образом, чтобы в массиве значени€
не повтор€лись.

4. ќдномерный массив на 19 элементов заполнен значени€ми от 1 до 20 в случайном пор€дке.
«начени€ в массиве не повтор€ютс€. ќдно из значений в диапазоне от 1 до 20 пропущено.
a** ) Ќеобходимо написать программу, котора€ найдет пропущенное значение.
b***) Ќеобходимо написать программу, котора€ найдет пропущенное значение использу€ только один цикл - за один проход по массиву.
Ќельз€ использовать сортировку и вложенные циклы.
*/
int main()
{
    setlocale(LC_ALL, "Rus");
    srand(time(0));
    int Size;
    cout << "¬ведите размер массива: ";
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
    // 4 задача
    int Size2 = Size - 1;
    int* mas2 = new int[Size2];
    int i1 = rand() % Size; //индекс на удаление
    /*cout << "¬ведите индекс дл€ удалени€: ";
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
    // сортировка
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

