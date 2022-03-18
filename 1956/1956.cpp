/*
Title   : BOJ_1956 [운동]
Author  : Hoseok Lee
Date    : 2022/03/18
https://www.acmicpc.net/problem/1956
https://github.com/hoshogi
*/

#include <iostream>
#include <algorithm>
#define INF 1e9
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int v, e;
    int graph[401][401] = {0, };
    
    cin >> v >> e;
    for (int i = 1; i <= v; i++)
        for (int j = 1; j <= v; j++)
            graph[i][j] = INF;
    
    for (int i = 0; i < e; i++) {
        int a, b, c;
        
        cin >> a >> b >> c;
        graph[a][b] = c;
    }
    
    for (int k = 1; k <= v; k++)
        for (int i = 1; i <= v; i++)
            for (int j = 1; j <= v; j++)
                graph[i][j] = min(graph[i][j], graph[i][k] + graph[k][j]);
    
    int minCycle = INF;
    for (int i = 1; i <= v; i++)
        minCycle = min(minCycle, graph[i][i]);
    
    if (minCycle == INF)
        cout << -1 << '\n';
    else
        cout << minCycle << '\n';
    return 0;
}
