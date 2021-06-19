#include <iostream>
using namespace std;
int main()
{
    // 入力を変数に格納
    int x, y;
    int ans;

    cin >> x >> y;

    if (x==y) {
        ans = x;
    } else if ((x==0 && y==1) || (x==1 && y==0)) {
        ans =2;
    } else if ((x==1 && y== 2) || (x==2 && y==1)) {
        ans = 0;
    } else {
        ans = 1; 
    }
    
    cout << ans << endl;
}