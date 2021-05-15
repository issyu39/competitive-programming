#include<iostream>
#include <string>
using namespace std;
 
string dedupe(std::string ans) {
    for (int i=0; i<ans.length()-1; i++) {
        // 同じ文字が2つ連続で並んでいたら、その2文字を取り除く
        if (ans[i] == ans[i+1]) {
            ans.erase(i, 2);
            break;
        }
    }
    return ans;
}
 
int main()
{
    // 入力を変数に格納
    string str;
    cin >> str;
 
    std::string ans = "";
 
    // strのi文字目が'R'のとき、Tを反転させる
    // strのi文字目が'R'でないとき、その文字をTの末尾に加える
    for (int i=0; i<str.length(); i++) {
        if (str[i] == 'R') {
            reverse(ans.begin(), ans.end());
        } else {
            ans += str[i];
        }
    }
 
    // Tの中に同じ文字が2つ連続で並んでいたら、その2文字を取り除く。この操作を出来る限り続ける。
    std::string dedupe_ans = dedupe(ans);
    while (dedupe_ans != ans) {
         ans = dedupe_ans;
         dedupe_ans = dedupe(ans);
    } 
 
    cout << ans << endl;
}
