/*
Title   : BOJ_11404 [플로이드]
Author  : Hoseok Lee
Date    : 2022/03/18
https://www.acmicpc.net/problem/11404
https://github.com/hoshogi
*/

#include <iostream>
#include <algorithm>
#define INF 1e9
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, m;
    int graph[101][101] {0, };
    
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i != j)
                graph[i][j] = INF;
        }
    }
    
    for (int i = 0; i < m; i++) {
        int a, b, c;
        
        cin >> a >> b >> c;
        graph[a][b] = min(graph[a][b], c);
    }
    
    for (int k = 1; k <= n; k++)
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= n; j++)
                graph[i][j] = min(graph[i][j], graph[i][k] + graph[k][j]);
            
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (graph[i][j] == INF)
                cout << 0 << ' ';
            else
                cout << graph[i][j] << ' ';
        }
        cout << '\n';
    }
    return 0;
}
