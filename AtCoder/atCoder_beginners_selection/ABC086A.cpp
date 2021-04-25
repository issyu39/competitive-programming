#include<iostream>
using namespace std;
int main()
{
    // スペース区切りの入力
    int a, b;
    cin >> a >> b;

    string result; 

    // 積の偶奇判定
    if ((a * b) % 2 == 0 ) {
        // 偶数であればEven
        result = "Even";
    } else {
        // 奇数であればOdd
        result = "Odd";
    }

    // 出力
    cout << result << endl;
    return 0;

}