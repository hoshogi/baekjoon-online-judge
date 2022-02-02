/*
Title   : BOJ_5525 [IOIOI]
Author  : Hoseok Lee
Date    : 2022/02/02
https://www.acmicpc.net/problem/5525
https://github.com/hoshogi
*/

#include <iostream>
#include <string>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, m;
    int count = 0, result = 0;
    string str;
    
    cin >> n >> m >> str;

    for (int i = 1; i < m; i++) {
        if (str[i - 1] == 'I' && str[i] == 'O' && str[i + 1] == 'I') {
            count++;
            if (count == n) {
                result++;
                count--;
            }
            i++;
        }
        else {
            count = 0;
        }
    }
    cout << result << '\n';
    return 0;
}
