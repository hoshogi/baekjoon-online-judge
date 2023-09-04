/*
Title   : BOJ_1940 [주몽]
Author  : Hoseok Lee
Date    : 2023/09/04
https://www.acmicpc.net/problem/1940
https://github.com/hoshogi
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, m, result = 0;
    vector<int> v;

    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        int num;

        cin >> num;
        v.push_back(num);
    }
    sort(v.begin(), v.end());
    int left = 0, right = v.size() - 1;
    while (left < right) {
        if (v[left] + v[right] == m) {
            result++;
            left++;
            right--;
        }
        else if (v[left] + v[right] > m) {
            right--;
        } else {
            left++;
        }
    }
    cout << result << '\n';
    return 0;
}