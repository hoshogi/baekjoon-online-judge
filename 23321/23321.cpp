/*
Title   : BOJ_23321 [홍익 댄스파티]
Author  : Hoseok Lee
Date    : 2021/11/1
https://github.com/hoshogi
https://www.acmicpc.net/problem/23321
*/

#include <iostream>
#include <string>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string str[5];
    string ready = ".omln", jumping = "owln.";
    
    for (int i = 0; i < 5; i++)
        cin >> str[i];

    for (int i = 0; i < str[0].length(); i++) {
        if (str[1][i] == 'o')
            for (int j = 0; j < 5; j++)
                str[j][i] = jumping[j];
        else if (str[1][i] == 'w')
            for (int j = 0; j < 5; j++)
                str[j][i] = ready[j];
    }
    
    for (int i = 0; i < 5; i++)
        cout << str[i] << '\n';
    return 0;
}
