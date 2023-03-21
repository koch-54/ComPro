#include <iostream>
using namespace std;

string asc[] = {".", "A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", "U",
                "V", "W", "X", "Y", "Z"};
int main() {
    int H, W;
    cin >> H >> W;
    int input_num;
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            cin >> input_num;
            cout << asc[input_num]; 
        }
      cout << endl;
    }
}