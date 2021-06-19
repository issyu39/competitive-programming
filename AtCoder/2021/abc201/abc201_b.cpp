#include<iostream>
#include <string.h>
using namespace std;

int main()
{
    int N;
    int s[N];
    int sorted[N];
    
    string T[N];
    string result;

    cin >> N;

    // 入力を変数に格納
    for (int i=0; i<N; i++) {
        cin >> T[i] >> s[i];
    }

    memcpy(sorted, s, sizeof(s)); 
    sort(sorted, sorted+N);
 
    for (int i=0; i<N; i++) {
        if (s[i] == sorted[N-2]) {
            result = T[i];
            break;
        }
    } 
    cout << result << endl; 
}