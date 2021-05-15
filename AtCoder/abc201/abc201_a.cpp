#include<iostream>
using namespace std;
int main()
{
    int a[3];
    string result;

    // 入力を変数に格納
    for (int i=0; i<3; i++) {
        cin >> a[i];
    }
 
    sort(a, a+3);
   
    if (a[2]-a[1] == a[1]-a[0]) {
        result = "Yes";
    } else {
        result = "No";
    }
 
    cout << result << endl; 
}