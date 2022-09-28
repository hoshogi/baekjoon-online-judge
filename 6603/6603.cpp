/*
Title   : BOJ_6603 [로또]
Author  : Hoseok Lee
Date    : 2022/09/28
https://www.acmicpc.net/problem/6603
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
    
    while (true) {
        int k;
        vector<int> v;
        
        cin >> k;
        if (k == 0)
            break;
        for (int i = 0; i < k; i++) {
            int num;
            
            cin >> num;
            v.push_back(num);
        }
        sort(v.begin(), v.end());
        
        vector<bool> check(k);
        fill_n(check.begin(), 6, true);
        fill_n(check.begin() + 6, k - 6, false);
        
        do {
            for (int i = 0; i < check.size(); i++) {
                if (check[i])
                    cout << v[i] << ' ';
            }
            cout << '\n';
        } while (prev_permutation(check.begin(), check.end()));
        cout << '\n';
    }
    return 0;
}
