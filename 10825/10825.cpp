/*
Title   : BOJ_10825 [국영수]
Author  : Hoseok Lee
Date    : 2021/09/25
https://github.com/hoshogi
https://www.acmicpc.net/problem/10825
*/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

bool compare(tuple<int, int, int, string> prev, tuple<int, int, int, string> next)
{
    if (get<0>(prev) == get<0>(next))
    {
        if (get<1>(prev) == get<1>(next))
        {
            if (get<2>(prev) == get<2>(next))
                return get<3>(prev) < get<3>(next);
            return get<2>(prev) > get<2>(next);
        }
        return get<1>(prev) < get<1>(next);
    }
    return get<0>(prev) > get<0>(next);
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    vector< tuple<int, int, int, string> > v;
    
    cin >> n;
    while (n--)
    {
        string name;
        int korean, english, math;
        
        cin >> name >> korean >> english >> math;
        v.push_back(make_tuple(korean, english, math, name));
    }
    
    sort(v.begin(), v.end(), compare);
    for (auto it : v)
        cout << get<3>(it) << '\n';
    return 0;
}
