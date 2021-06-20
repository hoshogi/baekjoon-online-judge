/*
Title   : BOJ_10816 [숫자 카드 2]
Author  : Hoseok Lee
Date    : 2021/06/20

https://www.acmicpc.net/problem/10816
https://github.com/hoshogi
*/

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

/*
이진 탐색으로 원소를 탐색하는 lower_bound, upper_bound 함수를 제공

lower_bound: 찾으려는 key 값보다 같거나 큰 숫자가 배열 몇 번째에서 처음 등장하는지 찾는다
upper_bound: 찾으려는 key 값을 초과하는 숫자가 배열 몇 번째에서 처음 등장하는지 찾는다
사용조건: 탐색을 진행할 배열 혹은 vector는 오름차순 정렬 되어야 한다
*/

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    vector<int> v;
    int n, m;
    
    cin >> n;
    for (int i = 0;i < n;i++)
    {
        int num;
        
        cin >> num;
        v.push_back(num);
    }
    
    sort(v.begin(), v.end());
    
    cin >> m;
    for (int i = 0;i < m;i++)
    {
        int num;
        
        cin >> num;
        
        auto lower = lower_bound(v.begin(), v.end(), num);
        auto upper = upper_bound(v.begin(), v.end(), num);
        
        cout << upper - lower << ' ';
    }
    
    return 0;
}
