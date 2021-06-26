#include<iostream>
using namespace std;
 
int main() {
    // 入力を変数に格納
    long long a, b, c, d;
    cin >> a >> b >> c >> d;
    int ans = -1;
    int count = 1;
    long long blue = a;
    long long red = 0;
 
    for (int i=0; i<a; i++) {
        blue = blue+b;
        red = red+c;
        if (blue <= red*d) {
            ans = count;
            break;
        }
        count++;
    }
    cout << ans << endl; 
}