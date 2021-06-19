#include<iostream>
#include <vector> 
using namespace std;
int main()
{
    // 入力を変数に格納
    long N, A; 
    cin >> N;
 
    vector<long> input(N);
    long ans = 0;
    
    for (int i=0; i<N; i++) {
        cin >> A;
        input[i] = A;
    }

    for (int i=0; i<N-1; i++) {
        for (int j=i+1; j<N; j++) {
            if ((input[i] - input[j]) % 200 == 0) {
                ans++;
            }
        } 
    }

    cout << ans << endl; 

}