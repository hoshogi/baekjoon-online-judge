/*
Title   : BOJ_14503 [로봇 청소기]
Author  : Hoseok Lee
Date    : 2022/01/17
https://www.acmicpc.net/problem/14503
https://github.com/hoshogi
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int board[51][51] = {0, };
bool cleaned[51][51] = {false, };
vector<pair<int, int> > v;

bool check(int& r, int& c, int& d) {
    int count = 0;
    
    while (true) {
        if (d == 0) {
            d = 3;
        } else {
            d -= 1;
        }
        
        if (board[r + v[d].first][c + v[d].second] == 0 && cleaned[r + v[d].first][c + v[d].second] == false) {
            r += v[d].first;
            c += v[d].second;
            return true;
        }
        
        count++;
        
        if (count == 4) {
            int tmp = d;
            
            if (tmp >= 2)
                tmp -= 2;
            else
                tmp += 2;
            
            if (board[r + v[tmp].first][c + v[tmp].second] == 1)
                return false;
            else {
                r += v[tmp].first;
                c += v[tmp].second;
                return true;
            }
        }
    }
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, m, r, c, d;
    int result = 0;
    
    v.push_back({-1, 0});
    v.push_back({0, 1});
    v.push_back({1, 0});
    v.push_back({0, -1});
    
    cin >> n >> m;
    cin >> r >> c >> d;
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j ++) {
            int num;
            
            cin >> num;
            board[i][j] = num;
        }
    }
    
    while (true) {
        if (cleaned[r][c] == false) {
            cleaned[r][c] = true;
            result++;
        }
        
        if (!check(r, c, d))
            break;
    }
    
    cout << result << '\n';
    return 0;
}
