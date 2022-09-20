/*
Title   : BOJ_10026 [적록색약]
Author  : Hoseok Lee
Date    : 2022/09/20
https://www.acmicpc.net/problem/10026
https://github.com/hoshogi
*/

#include <iostream>
#include <string>
#include <vector>
#include <queue>
using namespace std;

vector<vector<char>> graph;

int n;
int dx[4] = {0, 1, 0, -1};
int dy[4] = {-1, 0, 1, 0};

void bfs(int y, int x, bool visited[102][102]) {
    char color = graph[y][x];
    queue<pair<int, int> > q;
    q.push({y, x});
    visited[y][x] = true;
    
    while (!q.empty()) {
        for (int i = 0; i < 4; i++) {
            int tempY = q.front().first + dy[i];
            int tempX = q.front().second + dx[i];
            
            if (!(tempY >= 0 && tempY < n && tempX >= 0 && tempX < n))
                continue;
            
            if (!visited[tempY][tempX] && graph[tempY][tempX] == color) {
                visited[tempY][tempX] = true;
                q.push({tempY, tempX});
            }
        }
        q.pop();
    }
}

void bfs2(int y, int x, bool visited[102][102]) {
    char color = graph[y][x];
    bool check = false;
    queue<pair<int, int> > q;
    q.push({y, x});
    visited[y][x] = true;
    
    if (color == 'R' || color == 'G')
        check = true;
    
    while (!q.empty()) {
        for (int i = 0; i < 4; i++) {
            int tempY = q.front().first + dy[i];
            int tempX = q.front().second + dx[i];
            
            if (!(tempY >= 0 && tempY < n && tempX >= 0 && tempX < n))
                continue;
            
            if (check) {
                if (!(graph[tempY][tempX] == 'R' || graph[tempY][tempX] == 'G'))
                    continue;
            }
            else
                if (graph[tempY][tempX] != 'B')
                    continue;
            
            if (!visited[tempY][tempX]) {
                visited[tempY][tempX] = true;
                q.push({tempY, tempX});
            }
        }
        q.pop();
    }
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int count = 0;
    vector<int> result;
    
    cin >> n;
    for (int i = 0; i < n; i++) {
        string str;
        vector<char> v;
        
        cin >> str;
        for (int j = 0; j < str.length(); j++)
            v.push_back(str[j]);
        graph.push_back(v);
    }
    
    bool visited[102][102] = {false, };
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (!visited[i][j]) {
                bfs(i, j, visited);
                count++;
            }
        }
    }
    
    result.push_back(count);
    count = 0;
    bool visited2[102][102] = {false, };
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (!visited2[i][j]) {
                bfs2(i, j, visited2);
                count++;
            }
        }
    }
    
    result.push_back(count);
    for (auto it : result)
        cout << it << ' ';
    return 0;
}
