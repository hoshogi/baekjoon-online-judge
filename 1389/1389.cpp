/*
Title   : BOJ_1389 [케빈 베이컨의 6단계 법칙]
Author  : Hoseok Lee
Date    : 2022/03/24
https://www.acmicpc.net/problem/1389
https://github.com/hoshogi
*/

#include <iostream>
#include <algorithm>
#include <vector>
#define INF 1e9
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, m;
    int graph[101][101] = {0, };
    
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i != j)
                graph[i][j] = INF;
        }
    }
    
    for (int i = 0; i < m; i++) {
        int x, y;
        
        cin >> x >> y;
        graph[x][y] = graph[y][x] = 1;
    }
    
    for (int k = 1; k <= n; k++)
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= n; j++)
                graph[i][j] = min(graph[i][j], graph[i][k] + graph[k][j]);
    
    vector<pair<int, int> > v;
    for (int i = 1; i <= n; i++) {
        int sum = 0;
        
        for (int j = 1; j <= n; j++) {
            sum += graph[i][j];
        }
        v.push_back({sum, i});
    }
    sort(v.begin(), v.end());
    cout << v[0].second << '\n';
    return 0;
}
