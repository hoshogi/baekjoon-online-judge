/*
Title   : BOJ_2563 [색종이]
Author  : Hoseok Lee
Date    : 2023/09/01
https://www.acmicpc.net/problem/2563
https://github.com/hoshogi
*/

#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int count, result = 0;
    bool check[100][100] = {false, };

    cin >> count;
    while (count--) {
        int x, y;

        cin >> x >> y;
        for (int i = x; i < x + 10; i++) {
            for (int j = y; j < y + 10; j++) {
                if (!check[i][j]) {
                    check[i][j] = true;
                    result++;
                }
            }
        }
    }
    cout << result << '\n';
    return 0;
}