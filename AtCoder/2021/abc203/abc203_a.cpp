#include<iostream>
#include <string.h>
using namespace std;

int main()
{
    // 入力を変数に格納
    int a, b, c;
    cin >> a >> b >> c;
    int ans;

    if (a == b) {
      ans = c;
    } else if (b == c) {
      ans = a;
    } else  if (a == c) {
      ans = b;
    } else {
      ans  = 0;
    }
    cout << ans << endl; 
}