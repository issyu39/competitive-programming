#include<iostream>
#include <string.h>
using namespace std;

int main()
{
    // 入力を変数に格納
    int N;
    cin >> N;
    int ans;
    long long amount = 0;

    for (int i=0; i<N; i++) {
        amount = amount + (i+1);
        if (amount >= N) {
            ans = i+1;
            break;
        }
	}
    cout << ans << endl; 
}
