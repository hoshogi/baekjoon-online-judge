/*
Title   : BOJ_11404 [플로이드]
Author  : Hoseok Lee
Date    : 2021/06/19

https://www.acmicpc.net/problem/11404
https://github.com/hoshogi
*/

#include <iostream>
using namespace std;

const int INF = 1000000001;

/*'
Floyd's Algorithm

d(k)[i][j] = min(d(k-1)[i][j], d(k-1)[i][k] + d(k-1)[k][j]);
*/

void Floyd(int n, int d[][101])
{
    for (int k = 1;k <= n;k++)
        for (int i = 1;i <= n;i++)
            for (int j = 1;j <= n;j++)
                d[i][j] = min(d[i][j], (d[i][k] + d[k][j]));
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int vertexNum, edgeNum;
    int d[101][101] = {0, };

    for (int i = 1;i < 101;i++)
        for (int j = 1;j < 101;j++)
            if (i != j)
                d[i][j] = INF;

    cin >> vertexNum >> edgeNum;

    for (int i = 0;i < edgeNum;i++)
    {
        int u, v, e;

        cin >> u >> v >> e;
        if (e < d[u][v])
            d[u][v] = e;
    }

    Floyd(vertexNum, d);

    for(int i = 1;i <= vertexNum;i++)
    {
        for (int j = 1;j <= vertexNum;j++)
        {
            if (d[i][j] == INF)
                cout << 0 << ' ';
            else
                cout << d[i][j] << ' ';
        }
        cout << '\n';
    }

    return 0;
}
