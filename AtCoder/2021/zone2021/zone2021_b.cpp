#include<iostream>
using namespace std;
int main()
{
    // 入力を変数に格納
    int shieldCnt, ufoDistance, ufoHeight;
    cin >> shieldCnt >> ufoDistance >> ufoHeight;
    
    // 遮蔽物の位置を配列に格納
    int shieldPos[shieldCnt][2];
    for (int i=0 ; i<shieldCnt; i++){
        cin >> shieldPos[i][0] >> shieldPos[i][1];
    }
    
    // 各遮蔽物に対して遮蔽されない最低の高さを求める
    float minPosMax = 0;
    for (int i=0 ; i<shieldCnt; i++){
        float minPos;
        float heightDiff = ufoHeight - shieldPos[i][1];
        float disDiff = ufoDistance - shieldPos[i][0];
        minPos = shieldPos[i][1] - (heightDiff / disDiff * shieldPos[i][0]);
 
        // 最低の高さが負の場合は0とする
        if (minPos < 0) { 
            minPos = 0;
        }

        // 前の値より大きかったら、値を更新
        if (minPos > minPosMax) {
            minPosMax = minPos;
        }
    }
    cout << minPosMax << endl;
}
