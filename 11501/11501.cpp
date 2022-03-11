/*
Title   : BOJ_11501 [주식]
Author  : Hoseok Lee
Date    : 2022/03/12
https://www.acmicpc.net/problem/11501
https://github.com/hoshogi
*/

#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    
    cin >> t;
    while (t--) {
        int n;
        int price[10001] = {0, };
        priority_queue<int> pq;
        vector<int> v;
        
        cin >> n;
        for (int i = 0; i < n; i++) {
            int num;
            
            cin >> num;
            price[num]++;
            pq.push(num);
            v.push_back(num);
        }
        
        int count = 0;
        long long sum = 0;
        long long result = 0;
        
        for (int i = 0; i < n; i++) {
            if (v[i] < pq.top()) {
                count++;
                sum += v[i];
                price[v[i]]--;
            }
            
            if (v[i] == pq.top()) {
                result += pq.top() * count - sum;
                count = 0;
                sum = 0;
                price[v[i]]--;
                pq.pop();
                
                while (!pq.empty()) {
                    if (price[pq.top()] == 0)
                        pq.pop();
                    else
                        break;
                }
            }
        }
        cout << result << '\n';
    }
    return 0;
}
