/*
Title   : BOJ_14002 [가장 긴 증가하는 부분 수열 4]
Author  : Hoseok Lee
Date    : 2022/07/26
https://www.acmicpc.net/problem/14002
https://github.com/hoshogi
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int d[1000];
int a[1000];
int v[1000];
vector<int> sequence;


void align(int n) {
    sequence.push_back(a[n]);
    if (v[n] == n)
        return;
    align(v[n]);
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int n, result = 0, result_index = 0;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        v[i] = i;
        
        for (int j = 0; j < i; j++) {
            if (a[j] < a[i] && d[j] > d[i]) {
                d[i] = d[j];
                v[i] = j;
            }
        }
        d[i]++;
        
        if (d[i] > result) {
            result = d[i];
            result_index = i;
        }
    }
    
    align(result_index);
    reverse(sequence.begin(), sequence.end());
    
    cout << result << '\n';
    for (auto it : sequence)
        cout << it << ' ';
    
    return 0;
}
