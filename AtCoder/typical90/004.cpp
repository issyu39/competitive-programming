/**
 * 競プロ典型 90 問
 * 004 - Cross Sum（★2）
 * https://atcoder.jp/contests/typical90/tasks/typical90_d
 */

#include<iostream>
using namespace std;
int main()
{
    // 入力を変数に格納
    int row, column;
    cin >> row >> column;

    int grid[row][column];

    int sumRow[row];
    int sumColumn[column];
    int result[row][column];

    // 配列初期化
    for (int i=0 ; i<row; i++){
        sumRow[i] = 0;
    }
    for (int j=0; j<column; j++) {
        sumColumn[j] = 0;
    }
    

    // 行ごと、列ごとの総和を入力と同時に計算しておく
    for (int i=0 ; i<row; i++){
        for (int j=0; j<column; j++) {
            cin >> grid[i][j];
            sumRow[i] = sumRow[i] + grid[i][j];
            sumColumn[j] = sumColumn[j] + grid[i][j];
        }
    }
    
    // マス(i, j)と同じ行または同じ列にあるマス(自分自身を含む)に書かれている整数をすべて合計した値を求める
    for (int i=0 ; i<row; i++){
        for (int j=0; j<column; j++) {
            cout << sumRow[i] + sumColumn[j] - grid[i][j] << " "; 
        }
        cout << endl;
    }

}
