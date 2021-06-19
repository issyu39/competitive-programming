#include<iostream>
using namespace std;

// 文字列の中の"ZONe"の出現回数を数える
int find(const string& str) {
  int count = 0;
  string subStr = "ZONe";
  for (string::size_type pos = 0; (pos = str.find(subStr, pos)) != string::npos; pos += subStr.size()) {
    ++count;
  }
  return count;
}

int main()
{
    // 文字列の入力
    string str;
    cin >> str;

    // 文字列の出現回数を数えて出力
    int n= find(str);
    cout << n << endl;

    return 0;
}
