/*
Title   : BOJ_2947 [나무 조각]
Author  : Hoseok Lee
Date    : 2021/09/30
https://github.com/hoshogi
https://www.acmicpc.net/problem/2947
*/

#include <iostream>
#include <algorithm>
using namespace std;

int num[5];

bool check() {
    for (int i = 0; i < 5; i++) {
        if (num[i] != i + 1)
            return false;
    }
    return true;
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    for (int i = 0; i < 5; i++)
        cin >> num[i];
    while (true) {
        for (int i = 0; i < 4; i++) {
            if (num[i] > num[i + 1]) {
                swap(num[i], num[i + 1]);
                for (int j : num)
                    cout << j << ' ';
                cout << '\n';
            }
            if (check())
                exit(0);
        }
    }
    return 0;
}
