/*
Title   : BOJ_1991 [트리 순회]
Author  : Hoseok Lee
Date    : 2023/04/20
https://www.acmicpc.net/problem/1991
https://github.com/hoshogi
*/

#include <iostream>
#include <vector>
using namespace std;

char graph[26][2];

void preorder(char vertex) {
    if (vertex == '.')
        return;
    cout << vertex;
    preorder(graph[vertex - 'A'][0]);
    preorder(graph[vertex - 'A'][1]);
}

void inorder(char vertex) {
    if (vertex == '.')
        return;
    inorder(graph[vertex - 'A'][0]);
    cout << vertex;
    inorder(graph[vertex - 'A'][1]);
}

void postorder(char vertex) {
    if (vertex == '.')
        return;
    postorder(graph[vertex - 'A'][0]);
    postorder(graph[vertex - 'A'][1]);
    cout << vertex;
}

void treeTraversal(char vertex) {
    preorder('A');
    cout << '\n';
    inorder('A');
    cout << '\n';
    postorder('A');
    cout << '\n';
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int n;
    
    cin >> n;
    for (int i = 0; i < n; i++) {
        char parent, leftSub, rightSub;
        
        cin >> parent >> leftSub >> rightSub;
        graph[parent - 'A'][0] = leftSub;
        graph[parent - 'A'][1] = rightSub;
    }
    treeTraversal('A');
    return 0;
}
