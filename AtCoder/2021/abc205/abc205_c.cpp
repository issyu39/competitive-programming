#include <iostream>
#include <cstdlib>
using namespace std;
int main(){

    int A, B, C;
    cin >> A >> B >> C;

    string ans;

    if (C % 2 == 0){
        // Cが偶数の場合は単純に絶対値で比較する
        if (std::abs(A) > std::abs(B)) {
            ans = ">";
        } else if (std::abs(A) == std::abs(B)) {
            ans = "=";
        } else {
            ans = "<";
        }
    } else {
        // Cが奇数の場合
        // 符号が違う場合はマイナスの方が小さい
        if (A * B < 0) {
            if (A < 0) {
                ans = "<";
            } else {
                ans = ">";
            }
        }
        else if (A * B == 0) {
            if (A == B) {
                ans = "=";
            } else {
                // 片方が0の場合
                // Aが0でない場合
                if (A < 0) {
                    ans = "<";
                } else if (A > 0) {
                    ans = ">";
                }
                // Bが0でない場合
                if (B < 0) {
                    ans = ">";
                } else if (B > 0) {
                    ans = "<";
                }
            }
        } else {
            // 符号が一緒の場合は絶対値で判定
            if (std::abs(A) > std::abs(B)) {
                if (A > 0) {
                    // 両方正の場合は絶対値が大きい方が大きい
                    ans = ">";
                } else {
                    // 両方負の場合は絶対値が大きい方が小さい
                    ans = "<";
                }
            } else if (std::abs(A) == std::abs(B)) {
                ans = "=";
            } else{
                if (A > 0){
                    // 両方正の場合は絶対値が小さい方が小さい
                    ans = "<";
                } else{
                    // 両方負の場合は絶対値が小さい方が大きい
                    ans = ">";
                };
            }
        }
    }
    
    cout << ans << endl;
}