/*
Title   : BOJ_1269 [대칭 차집합]
Author  : Hoseok Lee
Date    : 2023/09/05
https://www.acmicpc.net/problem/1269
https://github.com/hoshogi
*/

#include <iostream>
#include <set>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int a, b;
    set<int> s;

    cin >> a >> b;
    for (int i = 0; i < a + b; i++) {
        int num;

        cin >> num;
        s.insert(num);
    }
    cout << 2 * s.size() - a - b << '\n';
    return 0;
}