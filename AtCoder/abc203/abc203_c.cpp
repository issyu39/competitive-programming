#include<iostream>
#include <math.h>
#include <string.h>
#include <vector>  
using namespace std;

struct friend {
  int index;  // インデックス
  int amount; // 渡す金額
};

bool index_cmp(const struct friend& p, const struct friend& q) {
    return p.index > q.index;
}

int main() {
    long long N, K;

    // 入力を変数に格納
    cin >> N >> K;

    vector<friend> friends(N);
    long long index;
    long long amount;

    // 入力を変数に格納
    for (int i=0; i<N; i++) {
		cin >> index >> amount;
        village v = {index, amount};
        villages.push_back(v);
	}

    sort(friends.begin(), friends.end(), index_cmp);

    // TODO: 各友達について計算する
  
}