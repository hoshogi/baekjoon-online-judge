/*
Title   : BOJ_17298 [오큰수]
Author  : Hoseok Lee
Date    : 2022/07/05
https://www.acmicpc.net/problem/17298
https://github.com/hoshogi
*/

#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int n;
    vector<int> v;
    vector<pair<int, int> > result;
    stack<pair<int, int> > s;
    
    cin >> n;
    for (int i = 0; i < n; i++) {
        int num;
        
        cin >> num;
        v.push_back(num);
    }
    
    for (int i = 0; i < v.size(); i++) {
        if (s.empty())
            s.push({i, v[i]});
        else {
            while (s.top().second < v[i]) {
                result.push_back({s.top().first, v[i]});
                s.pop();
                if (s.empty())
                    break;
            }
            s.push({i, v[i]});
        }
        
        if (i == v.size() - 1) {
            while (!s.empty()) {
                result.push_back({s.top().first, -1});
                s.pop();
            }
        }
    }
    
    sort(result.begin(), result.end());
    for (auto it : result)
        cout << it.second << ' ';
    return 0;
}
