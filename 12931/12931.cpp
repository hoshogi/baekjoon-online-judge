/*
Title   : BOJ_12931 [두 배 더하기]
Author  : Hoseok Lee
Date    : 2022/03/12
https://www.acmicpc.net/problem/12931
https://github.com/hoshogi
*/

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, result = 0;
    
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    sort(v.begin(), v.end(), greater<>());
    
    while (true) {
        int countZero = 0;
        bool div = false;
        for (int i = 0; i < v.size(); i++) {
            if (v[i] == 0)
                countZero++;
            else {
                if (v[i] % 2 == 0) {
                    v[i] /= 2;
                    div = true;
                }
                else {
                    result++;
                    v[i] -= 1;
                    if (v[i] != 0) {
                        v[i] /= 2;
                        div = true;
                    }
                }
            }
            if (i == v.size() - 1 && div)
                result++;
        }
        if (countZero == n)
            break;
    }
    cout << result << '\n';
    return 0;
}
