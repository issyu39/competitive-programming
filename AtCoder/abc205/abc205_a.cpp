#include <iostream>
using namespace std;
int main() {
    double A, B;
    double ans = 0;

    // 入力を変数に格納
    cin >> A >> B;

    ans = A * (B / 100);

    cout << ans << endl;
}