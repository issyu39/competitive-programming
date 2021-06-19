#include<iostream>
using namespace std;
int main()
{
    // 入力を変数に格納
    int year;
    cin >> year;

    // 何世紀か計算
    int century;
    if (year % 100 == 0) {
        century = year / 100;
    } else {
        century = (year / 100) + 1;
    }
    
    cout << century << endl;
}
