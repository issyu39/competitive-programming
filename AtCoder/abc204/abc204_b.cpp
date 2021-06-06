#include <iostream>
using namespace std;
int main() {
    int N;
    int ans = 0;

    cin >> N;

    for (int i = 0; i < N; i++) {
        int a;
        cin >> a;
        if (a > 10){
            ans = ans + (a - 10);
        }
    }

    cout << ans << endl;
}