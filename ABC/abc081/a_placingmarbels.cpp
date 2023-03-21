#include <iostream>
using namespace std;

int main() {
    string a;
    cin >> a;
    int cnt = 0;
    if (a[0] == '1') cnt++;
    if (a[1] == '1') cnt++;
    if (a[2] == '1') cnt++;
    cout << cnt << endl;
}