/*
Title   : BOJ_4641 [Doubles]
Author  : Hoseok Lee
Date    : 2021/09/09
https://github.com/hoshogi
https://www.acmicpc.net/problem/4641
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*
find(): 인자로 탐색할 범위와 탐색할 원소를 받는다
<algorithm> 에 정의됨
  
해당 원소를 찾으면 해당 원소의 반복자를 반환해주며 존재하지 않으면 해당 범위의 마지막 end() 반복자를 반환한다
auto it = find(v.begin(), v.end(), 탐색할 원소);
*/

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    vector<int> v;
    int count = 0;
    
    while (true)
    {
        int num;
        
        cin >> num;
        if (num == -1)
            break;
        
        if (num == 0)
        {
            for (int i : v)
            {
                auto it = find(v.begin(), v.end(), 2 * i);
                
                if (it != v.end())
                    count++;
            }
            
            cout << count << '\n';
            v.clear();
            count = 0;
            continue;
        }
        
        v.push_back(num);
    }
    
    return 0;
}
