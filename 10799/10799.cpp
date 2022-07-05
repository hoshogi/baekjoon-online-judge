/*
Title   : BOJ_10799 [쇠막대기]
Author  : Hoseok Lee
Date    : 2022/07/05
https://www.acmicpc.net/problem/18406
https://github.com/hoshogi
*/

#include <iostream>
#include <string>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    string str;
    int size = 0;
    int result = 0;
    
    cin >> str;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == '(') {
            if (str[i + 1] == ')') {
                result += size;
                i++;
            }
            else
                size++;
        }
        else {
            result += 1;
            size--;
        }
    }
    
    cout << result << '\n';
    return 0;
}
