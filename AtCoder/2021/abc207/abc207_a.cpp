#include<iostream>
using namespace std;

int main() {
    // 入力を変数に格納
    int a, b, c;
    int ans;
    cin >> a >> b >> c;

    if (a+b > a+c) {
        if (b+c > a+b) {
            ans = b+c;
        } else {
            ans = a+b;
        }
    } else {
        if (b+c > a+c) {
            ans = b+c;
        } else {
            ans = a+c;
        }
    }
    
    cout << ans << endl; 
}