/*
Title   : BOJ_20055 [컨베이어 벨트 위의 로봇]
Author  : Hoseok Lee
Date    : 2022/07/27
https://www.acmicpc.net/problem/20055
https://github.com/hoshogi
*/

#include <iostream>
#include <queue>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int n, k, count = 0, zero = 0;
    int durability[201] = {0 ,};
    bool robot[201] = {false, };
    deque<int> up, down;
    
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
        up.push_back(i);
    for (int i = 2 * n; i >= n + 1; i--)
        down.push_back(i);
    
    for (int i = 1; i <= 2 * n; i++)
        cin >> durability[i];
    
    while (zero < k) {
        count++;
        
        up.push_front(down.front());
        down.pop_front();
        down.push_back(up.back());
        up.pop_back();
        
        if (robot[up.back()])
            robot[up.back()] = false;
        
        int belt = up.back() - 1;
        if (belt < 1)
            belt = 2 * n;
        for (int i = 1; i <= n - 1; i++) {
            int next = belt + 1;
            if (next > 2 * n)
                next = 1;
            
            if (robot[belt] && !robot[next] && durability[next] > 0) {
                robot[belt] = false;
                durability[next]--;
                if (durability[next] == 0)
                    zero++;
                if (next != up.back())
                    robot[next] = true;
            }
            belt--;
            if (belt < 1)
                belt = 2 * n;
        }
        
        if (durability[up.front()] > 0) {
            robot[up.front()] = true;
            durability[up.front()]--;
            if (durability[up.front()] == 0)
                zero++;
        }
    }
    
    cout << count << '\n';
    return 0;
}
