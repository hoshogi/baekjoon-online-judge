/*
Title   : BOJ_18353 [병사 배치하기]
Author  : Hoseok Lee
Date    : 2022/08/09
https://www.acmicpc.net/problem/18353
https://github.com/hoshogi
*/

#include <iostream>
using namespace std;

int v[2000];

void align(int p, int& count) {
    count++;
    if (v[p] != -1)
        return align(v[p], count);
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int n, result = 0, max_index = -1, count = 0;
    int a[2000] = {0, };
    int d[2000] = {0, };
    
    cin >> n;
    fill_n(v, n, -1);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    
    for (int i = 0; i < n; i++) {
        for (int j = i - 1; j >= 0; j--)
            if (a[i] < a[j] && d[j] > d[i]) {
                d[i] = d[j];
                v[i] = j;
            }
        d[i]++;
    }
    
    for (int i = 0; i < n; i++) {
        if (d[i] > result) {
            result = d[i];
            max_index = i;
        }
    }
    
    align(max_index, count);
    cout << n - count << '\n';
    return 0;
}
