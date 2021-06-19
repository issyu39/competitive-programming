#include <iostream>
using namespace std;
int main() {
    int N;

    cin >> N;

    int a[N]; 

    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }

    string ans = "No"; 

    // 配列をソート
    sort(a, a+N);

    for (int i = 0; i < N; i++) {
        if (a[i] != (i+1)) {
            ans = "No";
            break;
        } 
        ans = "Yes";
    }

    cout << ans << endl;
}