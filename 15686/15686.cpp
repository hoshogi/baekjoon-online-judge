/*
Title   : BOJ_15686 [치킨 배달]
Author  : Hoseok Lee
Date    : 2022/04/26
https://www.acmicpc.net/problem/15686
https://github.com/hoshogi
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#define INF 1e9
using namespace std;

int GetDistance(int row1, int col1, int row2, int col2) {
    return abs(row1 - row2) + abs(col1 - col2);
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int n, m, homeNum = 0, chickenNum = 0, result = INF;
    vector<pair<int, int> > home, chicken;
    
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int city;
            
            cin >> city;
            if (city == 1) {
                home.push_back({i, j});
                homeNum++;
            }
            if (city == 2) {
                chicken.push_back({i, j});
                chickenNum++;
            }
        }
    }
    
    vector<bool> open(chickenNum);
    fill(open.end() - m, open.end(), true);
    do {
        int cityDistance = 0;
        for (int i = 0; i < homeNum; i++) {
            int minChickenDistance = INF;
            
            for (int j = 0; j < chickenNum; j++) {
                if (open[j]) {
                    int chickenDistance = GetDistance(home[i].first, home[i].second, chicken[j].first, chicken[j].second);
                    minChickenDistance = min(minChickenDistance, chickenDistance);
                }
            }
            cityDistance += minChickenDistance;
        }
        result = min(result, cityDistance);
    } while(next_permutation(open.begin(), open.end()));
    
    cout << result << '\n';
    return 0;
}
