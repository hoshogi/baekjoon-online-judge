/*
Title   : BOJ_11203 [Numbers On a Tree]
Author  : Hoseok Lee
Date    : 2021/04/15
 
https://www.acmicpc.net/problem/11203
https://github.com/hoshogi
*/

#include <iostream>
#include <string>
using namespace std;

/*
완전 이진 트리
노드의 깊이: 루트로부터 어떤 노드까지의 거리
트리의 높이: 말단 노드 중 루트로부터 가장 멀리 떨어진 노드의 깊이
높이가 h인 트리의 최대 노드의 개수: 2^(h + 1)
Left Child = 2 * Node Num
Right Child = 2 * Node Num + 1
*/

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    long long treeLevel, totalNodeNum = 1, nodeNum = 1;
    string path = "";
    
    cin >> treeLevel >> path;
    
    for (int i = 0;i < path.length();i++)
    {
        if (path[i] == 'L')
            nodeNum *= 2;
        else if (path[i] == 'R')
            nodeNum = 2 * nodeNum + 1;
    }

    for (int i = 0;i <= treeLevel;i++)
        totalNodeNum *= 2;
    
    cout << totalNodeNum - nodeNum << '\n';
    return 0;
}
