/*
Title   : BOJ_26006 [K-Queen]
Author  : Hoseok Lee
Date    : 2022/11/29
https://www.acmicpc.net/problem/26006
https://github.com/hoshogi
*/

#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int dr[9] = {-1, -1, -1, 0, 0, 0, 1, 1, 1};
int dc[9] = {-1, 0, 1, -1, 0, 1, -1, 0, 1};
bool attack[3][3];

bool isAttack(int r, int c, int queenR, int queenC) {
    if (r == queenR || c == queenC || abs((r - queenR)) == abs((c - queenC)))
        return true;
    return false;
}

string checkState() {
    if (attack[1][1]) {
        for (int i = 0; i < 9; i++) {
            if (!attack[i / 3][i % 3])
                return "CHECK";
            if (i == 8)
                return "CHECKMATE";
        }
    }
    
    for (int i = 0; i < 9; i++) {
        if (i == 4)
            continue;
        if (!attack[i / 3][i % 3])
            return "NONE";
    }
    return "STALEMATE";
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int n, k, kingR, kingC;
    
    cin >> n >> k >> kingR >> kingC;
    for (int i = 0; i < 9; i++) {
        int tempR = kingR + dr[i];
        int tempC = kingC + dc[i];
        
        if (tempR < 1 || tempR > n || tempC < 1 || tempC > n)
            attack[i / 3][i % 3] = true;
    }
    
    for (int i = 0; i < k; i++) {
        int queenR, queenC;
        
        cin >> queenR >> queenC;
        for (int i = 0; i < 9; i++) {
            int tempR = kingR + dr[i];
            int tempC = kingC + dc[i];
            
            if (tempR < 1 || tempR > n || tempC < 1 || tempC > n)
                continue;
            if (isAttack(tempR, tempC, queenR, queenC))
                attack[i / 3][i % 3] = true;
        }
    }
    
    cout << checkState() << '\n';
    return 0;
}
