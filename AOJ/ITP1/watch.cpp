#include <iostream>
// #include <cstdlib>
using namespace std;

int main() {
    int S;
    cin >> S;
    int hour = S / 3600;
    int mui = (S%3600) / 60;
    int sec = S - (hour * 3600 + mui * 60);
    printf("%d:%d:%d", hour, mui, sec);
    cout << endl;

    return 0;

}