/*
Title   : BOJ_11005 [진법 변환 2]
Author  : Hoseok Lee
Date    : 2022/07/18
https://www.acmicpc.net/problem/11005
https://github.com/hoshogi
*/

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

char convert(int n, int b) {
    if (n % b >= 10)
        return 'A' + n % b - 10;
    return '0' + n % b;
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int n, b;
    string result;
    
    cin >> n >> b;
    
    while (n != 0) {
        result += convert(n, b);
        n /= b;
    }
    reverse(result.begin(), result.end());
    cout << result << '\n';
    return 0;
}
