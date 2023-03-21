#include <iostream>
#include<algorithm>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    int A[N], B[M];
    for (int i = 0; i < N; i++) cin >> A[i];
    for (int i = 0; i < M; i++) cin >> B[i];
    // 配列を連結する
    int m = sizeof(A) / sizeof(*A);
    int n = sizeof(B) / sizeof(*B);
 
    int C[m + n];
    copy(A, A + m, C);
    copy(B, B + n, C + m);

    //  配列をソートする
  	int l = sizeof(C) / sizeof(C[0]);
  	sort(C, C + l);

    int resultA[N], resultB[M];
    for (int i = 0; i < N; i++) {
        auto itr = find(C, C + l, A[i]);
        resultA[i] = distance(C, itr) + 1;
    }
    for (int i = 0; i < M; i++) {
        auto itr = find(C, C + l, B[i]);
        resultB[i] = distance(C, itr) + 1;
    }

    for (int i = 0; i < N; i++){
        cout << resultA[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < M; i++){
        cout << resultB[i] << " ";
    }
}