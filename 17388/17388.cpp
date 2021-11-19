/*
Title   : BOJ_17388 [와글와글 숭고한]
Author  : Hoseok Lee
Date    : 2021/11/19
https://github.com/hoshogi
https://www.acmicpc.net/problem/17388
*/

#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int min_num = 101, min_index = 0, result = 0;
    
    for (int i = 0; i < 3; i++) {
        int num;
        
        cin >> num;
        result += num;
        if (num < min_num) {
            min_num = num;
            min_index = i;
        }
    }
    
    if (result >= 100)
        cout << "OK" << '\n';
    else {
        switch (min_index) {
            case 0:
                cout << "Soongsil" << '\n';
                break;
            case 1:
                cout << "Korea" << '\n';
                break;
            case 2:
                cout << "Hanyang" << '\n';
                break;
        }
    }
    return 0;
}
