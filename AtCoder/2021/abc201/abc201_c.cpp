#include<iostream>
#include <vector>  
#include <string>
using namespace std;

int main()
{
    // 入力を変数に格納
    string str;
    cin >> str;

    std::vector<int> o;
    std::vector<int> x;  

    int ans = 0; 

    // 確実に含まれる数字、確実に含まれない数字を記憶  
    for (int i=0; i<10; i++) {
        if (str[i] == 'o') {
            o.push_back(i);
        } else if (str[i] == 'x') {
            x.push_back(i);
        } 
    }
  
    // 条件を満たすパターンを数える
    if (o.size() > 4) {
        ans = 0;
    } else if (o.size() == 4) {
        ans = 24;
    } else {
        // 0000~9999まで全探索
        for (int i=0; i<10000; i++) {
           std::string secret = std::to_string(i);
           bool isOK = false;
           // oの数字を数える用にvectorを用意
           std::vector<int> o_tmp = o; 

           // 4桁の数字でない場合は先頭を0埋めする
           while (secret.length() < 4) {
               secret = "0" + secret;
           }             
           // secretが条件を満たしているか判定する
           for (int j=0; j<4; j++) {
               // secret[j]を文字列から数値に変換
               int targetNo = secret[j] - '0';
               // j文字目がxの数字を含んでいたら、判定処理を終了
               if (std::find(x.begin(), x.end(), targetNo) != x.end()) {
                   isOK = false;
                   break;
               }
               // j文字目がo_tmpの数字を含んでいたら、o_tmpから数字を削除
               std::vector<int>::iterator itr = std::find(o_tmp.begin(), o_tmp.end(), targetNo); 
               if (itr != o_tmp.end()) {
                   o_tmp.erase(itr);
               }
               // 最後の数字をチェックした後に、oの数字が全て含まれていたらOKとする
               if ((j == 3) && (o_tmp.size() == 0)) {
                   isOK = true;
               }
           }
           // 条件を満たすならカウントを+1する
           if (isOK) ans++;
       }
    }
    cout << ans << endl; 
}