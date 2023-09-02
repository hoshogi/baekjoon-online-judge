/*
Title   : BOJ_2776 [암기왕]
Author  : Hoseok Lee
Date    : 2023/09/02
https://www.acmicpc.net/problem/2776
https://github.com/hoshogi
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;

    cin >> t;
    while (t--) {
        int n, m;
        vector<int> v;

        cin >> n;
        for (int i = 0; i < n; i++) {
            int num;

            cin >> num;
            v.push_back(num);
        }
        sort(v.begin(), v.end());
        cin >> m;
        for (int i = 0; i < m; i++) {
            int num; 

            cin >> num;
            if (binary_search(v.begin(), v.end(), num)) 
                cout << 1 << '\n';
            else 
                cout << 0 << '\n';
        }
        return 0;
    }
}