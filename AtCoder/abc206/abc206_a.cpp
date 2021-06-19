#include<iostream>
#include <string.h>
using namespace std;

int main()
{
    // 入力を変数に格納
    int a;
    cin >> a;
    string ans;

    int price = a * 1.08;
    if (price < 206) {
        ans = "Yay!";
    } else if (price == 206) {
        ans = "so-so";
    } else {
        ans = ":(";
    }
    cout << ans << endl; 
}
