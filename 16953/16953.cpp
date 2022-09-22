/*
Title   : BOJ_16953 [A → B]
Author  : Hoseok Lee
Date    : 2022/09/23
https://www.acmicpc.net/problem/16953
https://github.com/hoshogi
*/

#include <iostream>
#include <queue>
#include <string>
#include <algorithm>
using namespace std;

int bfs(long long a, int b) {
    queue<pair<int, int>> q;
    q.push({a, 1});
    
    while (!q.empty()) {
        long long num = q.front().first;
        int count = q.front().second + 1;
        q.pop();
        
        long long temp1 = num * 2;
        long long temp2 = stoll(to_string(num) + "1");
        
        if (temp1 == b || temp2 == b)
            return count;
        
        if (temp1 < b)
            q.push({temp1, count});
        if (temp2 < b)
            q.push({temp2, count});
    }
    
    return -1;
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int a, b;
    
    cin >> a >> b;
    cout << bfs(a, b) << '\n';
    return 0;
}
