/*
Title   : BOJ_3085 [사탕 게임]
Author  : Hoseok Lee
Date    : 2022/01/24
https://www.acmicpc.net/problem/3085
https://github.com/hoshogi
*/

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int Check(vector<string>& v) {
    int result = 1;
    
    for (int i = 0; i < v.size(); i++) {
        int count = 1;
        
        for (int j = 0; j < v.size() - 1; j++) {
            if (v[i][j] == v[i][j + 1]) {
                count++;
                result = max(result, count);
            } else {
                count = 1;
            }
        }
        
        count = 1;
        
        for (int j = 0; j < v.size() - 1; j++) {
            if (v[j][i] == v[j + 1][i]) {
                count++;
                result = max(result, count);
            } else {
                count = 1;
            }
        }
    }
    return result;
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    
    cin >> n;
    vector<string> v(n);
    
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    int result = 0;
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i != n - 1) {
                swap(v[i][j], v[i + 1][j]);
                result = max(result, Check(v));
                swap(v[i][j], v[i + 1][j]);
            }
            
            if (j != n - 1) {
                swap(v[i][j], v[i][j + 1]);
                result = max(result, Check(v));
                swap(v[i][j], v[i][j + 1]);
            }
        }
    }
    
    cout << result << '\n';
    return 0;
}
