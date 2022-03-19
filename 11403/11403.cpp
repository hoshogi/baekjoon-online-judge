/*
Title   : BOJ_11403 [경로 찾기]
Author  : Hoseok Lee
Date    : 2022/03/19
https://www.acmicpc.net/problem/11403
https://github.com/hoshogi
*/

#include <iostream>
#include <algorithm>
#define INF 1e9
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    int graph[101][101] = {0, };
    
    cin >> n;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            graph[i][j] = INF;
    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            int edge;
            
            cin >> edge;
            if (edge == 1)
                graph[i][j] = 1;
        }
    }

    for (int k = 1; k <= n; k++)
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= n; j++)
                graph[i][j] =  min(graph[i][j], graph[i][k] + graph[k][j]);
    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (graph[i][j] == INF)
                cout << 0 << ' ';
            else
                cout << 1 << ' ';
        }
        cout << '\n';
    }
    return 0;
}
