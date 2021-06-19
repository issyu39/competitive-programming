#include<iostream>
#include <string>
using namespace std;
int main()
{
    // 入力を変数に格納
    long long N;
    int K;
    cin >> N >> K;
   
    for (int i=0 ; i<K; i++) {
        if (N % 200 == 0) {
            N = N / 200;
        } else {
            std::string str;
            str = std::to_string(N);
            // "200"を後ろに結合
            str = str + "200";
            N = atol(str.c_str());
        }
    }
   
  cout << N << endl;

}