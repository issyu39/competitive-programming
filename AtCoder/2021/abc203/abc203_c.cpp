#include<iostream>
#include <math.h>
#include <string.h>
#include <vector>  
using namespace std;

int main() {
    long long N, K;
    long long ans;
    vector<pair<long long, long long> > friends;

    // 入力を変数に格納
    cin >> N >> K;
    for (int i=0; i<N; i++) {
        long long index;
        long long amount;
        cin >> index >> amount;
        friends.push_back(make_pair(index, amount));
	}
    
    // 村番号が小さい順にソート
    sort(friends.begin(), friends.end());

    // 各友達について計算する
    for (int i=0; i<N; i++) {
        long long dis;
        // i人目まで来れているかを確認する
        if (i==0) {
            dis = friends[i].first;
            if (K < dis) {
                ans = K;
                break;
            } 
        } else {
            dis = friends[i].first - friends[i-1].first;
            if (K < dis) {
                ans = friends[i-1].first + K;  
                break;
            } 
        }

        // 所持金更新
        K = K - dis;
        // 来れていたら所持金に金額を足す
        K = K + friends[i].second;

        // 最後の友達からお金をもらったら、可能な限り行ける村番号を答えとする
        if (i==N-1) {
            ans = friends[i].first + K;
        }
    }  

    cout << ans << endl; 
}
