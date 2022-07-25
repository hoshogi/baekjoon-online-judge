/*
Title   : BOJ_5430 [AC]
Author  : Hoseok Lee
Date    : 2022/07/25
https://www.acmicpc.net/problem/5430
https://github.com/hoshogi
*/

#include <iostream>
#include <queue>
#include <string>
using namespace std;

deque<int> dq;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int t;
    
    cin >> t;
    while (t--) {
        int n;
        string order, numbers, num = "";;
        bool front = true;
        bool error = false;
 
        cin >> order >> n >> numbers;
        
        for (int i = 0; i < numbers.length(); i++) {
            if (numbers[i] >= '0' && numbers[i] <= '9')
                num += numbers[i];
            else {
                if (num != "") {
                    dq.push_back(stoi(num));
                    num = "";
                }
            }
        }
        
        for (int i = 0; i < order.length(); i++) {
            if (order[i] == 'R') {
                front = !front;
            }
            else if (order[i] == 'D') {
                if (dq.empty()) {
                    error = true;
                    break;
                }
                
                if (front)
                    dq.pop_front();
                else
                    dq.pop_back();
            }
        }
        
        if (error)
            cout << "error" << '\n';
        else {
            cout << "[";
            if (front) {
                while (!dq.empty()) {
                    cout << dq.front();
                    dq.pop_front();
                    
                    if (!dq.empty())
                        cout << ',';
                }
            }
            else {
                while (!dq.empty()) {
                    cout << dq.back();
                    dq.pop_back();
                    
                    if (!dq.empty())
                        cout << ',';
                }
            }
            cout << "]\n";
        }
    }
    return 0;
}
