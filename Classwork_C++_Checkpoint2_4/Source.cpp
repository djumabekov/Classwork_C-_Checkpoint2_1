#include <iostream>
#include <time.h>
using namespace std;

/*
 ?????, ???????
1. *????????, ?????????, ??????? ????????? ??????? ?????
?? 6 ???????.
???????????? ?????? ??????? ????? ?? ?????? ?????.
2. *???????? ?????????, ??????? ??????? ??????????
?????? ? ???????? ???????
3. *???????????? ?????? ????? ?????? ?????????????,
?????? ??????? ?????????? ?
??????, ?????????? ????????? ???????? ????????????? (???????? - ????? ???? ??????).
5. *? ?????????? ???????, ??????????? ?????????? ???????,
?????????? ??????????? ? ???????????? ????????
6. **???????????? ?????? ??????? ????? ?? ??? (12 ???????).
????? ???????????? ?????? ???????? (????????, 3 ? 6 - ????? ????? 3-? ? 6-? ???????).
?????????? ?????????? ?????, ? ??????? ??????? ???? ??????????? ? ?????,
? ??????? ??????? ???? ?????????? ? ?????? ?????????? ?????????.
*/
/*
1. *????????, ?????????, ??????? ????????? ??????? ?????
?? 6 ???????.
*/
int main()
{
    setlocale(LC_ALL, "Rus");

    int mas[6]; // ??????? ?? ???????
    // ?????? ???????????? ????-??? ???????
    //mas[0] = 1;
    //mas[1] = 2;
    // 
    cout << "??????? ??????? ?? 6 ???????:\n";
    for (int i = 0; i < 6; i++) {
        // ?????? ???? ? ??????? ??? i-?? ???????? ???????
        cout << i << "-> ";
        cin >> mas[i];
    }
    int Sum = 0;
    for (int i = 0; i < 6; i++) {
        // ????? i-?? ???????? ???????
        cout << i + 1 << ": " << mas[i] << endl;
        Sum += mas[i]; // ???????????? ????????? ???????
    }
    cout << "????????? ??????? ?? 6 ??c????: " << Sum << endl;
    cin.get(); cin.get();
}


#include <iostream>
#include <time.h>
using namespace std;

/*
 ?????, ???????
1. *????????, ?????????, ??????? ????????? ??????? ?????
?? 6 ???????.
???????????? ?????? ??????? ????? ?? ?????? ?????.
2. *???????? ?????????, ??????? ??????? ??????????
?????? ? ???????? ???????
3. *???????????? ?????? ????? ?????? ?????????????,
?????? ??????? ?????????? ?
??????, ?????????? ????????? ???????? ????????????? (???????? - ????? ???? ??????).
5. *? ?????????? ???????, ??????????? ?????????? ???????,
?????????? ??????????? ? ???????????? ????????
6. **???????????? ?????? ??????? ????? ?? ??? (12 ???????).
????? ???????????? ?????? ???????? (????????, 3 ? 6 - ????? ????? 3-? ? 6-? ???????).
?????????? ?????????? ?????, ? ??????? ??????? ???? ??????????? ? ?????,
? ??????? ??????? ???? ?????????? ? ?????? ?????????? ?????????.
*/
/*
1. *????????, ?????????, ??????? ????????? ??????? ?????
?? 6 ???????.
*/
int main()
{
    setlocale(LC_ALL, "Rus");
    srand(time(0)); // ????-??? ?????????? ????. ????? ??????? ????????

    int mas[6]; // ??????? ?? ???????

    //cout << "??????? ??????? ?? 6 ???????:\n";
    for (int i = 0; i < 6; i++) {
        // ?????? ???? ? ??????? ??? i-?? ???????? ???????
        //cout << i << "-> ";
        //cin >> mas[i];
        // ?????????? ????. ??????????
        //  [-10; 50]
        //  [Min; Max] ==> rand() % (Max - Min + 1) + Min
        //mas[i] = rand() % (50 - (-10) + 1) + (-10);
        mas[i] = rand() % 61 - 10; // [-10; 50]
    }
    int Sum = 0;
    cout << "??????? ?? 6 ???????:\n";
    for (int i = 0; i < 6; i++) {
        // ????? i-?? ???????? ???????
        cout << i + 1 << ": " << mas[i] << endl;
        Sum += mas[i]; // ???????????? ????????? ???????
    }
    cout << "????????? ??????? ?? 6 ??c????: " << Sum << endl;
    cin.get(); cin.get();
}

#include <iostream>
#include <time.h>
using namespace std;

/*
 ?????, ???????
3. *???????????? ?????? ????? ?????? ?????????????,
?????? ??????? ?????????? ?
??????, ?????????? ????????? ???????? ????????????? (???????? - ????? ???? ??????).
5. *? ?????????? ???????, ??????????? ?????????? ???????,
?????????? ??????????? ? ???????????? ????????
6. **???????????? ?????? ??????? ????? ?? ??? (12 ???????).
????? ???????????? ?????? ???????? (????????, 3 ? 6 - ????? ????? 3-? ? 6-? ???????).
?????????? ?????????? ?????, ? ??????? ??????? ???? ??????????? ? ?????,
? ??????? ??????? ???? ?????????? ? ?????? ?????????? ?????????.
*/
/*
2. *???????? ?????????, ??????? ??????? ??????????
?????? ? ???????? ???????
*/
int main()
{
    setlocale(LC_ALL, "Rus");
    srand(time(0));
    //int a = 10;
    const int Size = 12; // ??????????? ?????? ???????????? ???????
    // ??????????? ?????? ??????? Size
    // ????????? ????????????? ???????
    int mas[Size] = { 1, 2, 3, 4, 5, 6, 7 };

    cout << mas << endl; // ?? ?????? ???????, ? ?????? ?????? ? ?????? ??? ?????????? ??????

    // ?????? ????????? ??????? ? ?????? ???????????
    for (int i = 0; i < Size; i++) {
        cout << mas[i] << " "; // ?????? ????????? ??????? ? ??????
    }
    cout << endl;
    // ?????? ????????? ??????? ? ???????? ???????
    // [Size-1] - ????? ?????????? ???????? ???????
    for (int i = Size - 1; i >= 0; i--) {
        cout << mas[i] << " "; // ? ???? ??????
    }
    cout << endl;
    cin.get(); cin.get();
}
