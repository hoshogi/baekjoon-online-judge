/*
Title   : BOJ_10971 [외판원 순회 2]
Author  : Hoseok Lee
Date    : 2022/09/28
https://www.acmicpc.net/problem/10971
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
    
    int n, answer = 1e9;
    int graph[10][10] = {0, };
    vector<int> v;
    
    cin >> n;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> graph[i][j];
    
    for (int i = 0; i < n; i++)
        v.push_back(i);
    
    do {
        int temp = v[0];
        int result = 0;
        bool check = false;
        
        for (int i = 1; i < n; i++) {
            if (graph[temp][v[i]] == 0) {
                check = true;
                break;
            }
            result += graph[temp][v[i]];
            temp = v[i];
        }
        
        if (check || graph[v[n - 1]][v[0]] == 0)
            continue;
        
        result += graph[v[n - 1]][v[0]];
        answer = min(answer, result);
    } while (next_permutation(v.begin(), v.end()));
    
    cout << answer << '\n';
    return 0;
}
