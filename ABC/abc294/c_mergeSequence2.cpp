#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    unsigned N, M;
    cin >> N >> M;

    vector<unsigned> A(N), B(M);
    for (auto &&a : A) cin >> a;
    for (auto &&b : B) cin >> b;    // 普段使ってるfor文の省略形

    vector<unsigned> C(N + M);
    merge(begin(A), end(A), begin(B), end(B), begin(C)); // 2つのリストをくっつける, しかもこのとき昇順に並んでいる

    for (const auto a : A) {
        cout << lower_bound(begin(C), end(C), a) - begin(C) + 1 << " ";     // lower_bound a以上の値で最小の要素を返す。begin()でひくことで配列の頭からの距離を出している(つまりインデックス)求めたい値は頭1からなので+1
    }
    cout << endl;

    for (const auto b : B) {
        cout << lower_bound(begin(C), end(C), b) - begin(C) + 1 << " ";
    }
    cout << endl;

    return 0;
}