/*
Title   : BOJ_14891 [톱니바퀴]
Author  : Hoseok Lee
Date    : 2022/01/17
https://www.acmicpc.net/problem/14891
https://github.com/hoshogi
*/

#include <iostream>
#include <vector>
#include <string>
using namespace std;

void rotate(vector<int> &v, int dir) {
    int polar;
    
    if (dir == 1) {
        polar = v.back();
        v.pop_back();
        v.insert(v.begin(), polar);
    } else if (dir == -1) {
        polar = v.front();
        v.erase(v.begin());
        v.push_back(polar);
    }
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int k;
    vector<int> v[4];
    
    for (int i = 0; i < 4; i++) {
        string str;
        
        cin >> str;
        for (char c : str) {
            v[i].push_back((int)(c - '0'));
        }
    }
    
    cin >> k;
    while (k--) {
        bool check[3] = {false, };
        int rotation[4] = {0, };
        int num, dir;
        
        cin >> num >> dir;
        for (int i = 0; i < 3; i++) {
            if (v[i][2] != v[i + 1][6])
                check[i] = true;
        }
        
        rotation[num - 1] = dir;
     
        for (int i = 0; i < 3; i++) {
            if (rotation[i] != 0 && rotation[i + 1] == 0 && check[i] == true) {
                rotation[i + 1] = rotation[i] * -1;
            }
        }
        
        for (int i = 3; i > 0; i--) {
            if (rotation[i] != 0 && rotation[i - 1] == 0 && check[i - 1] == true) {
                rotation[i - 1] = rotation[i] * -1;
            }
        }
        
        for (int i = 0; i < 4; i++) {
            if (rotation[i] != 0)
                rotate(v[i], rotation[i]);
        }
    }
    
    int result = 0, mul = 1;
    for (int i = 0; i < 4; i++) {
        result += v[i].front() * mul;
        mul *= 2;
    }
    
    cout << result << '\n';
    return 0;
}
