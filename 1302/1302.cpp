/*
Title   : BOJ_1302 [베스트셀러]
Author  : Hoseok Lee
Date    : 2021/09/26
https://github.com/hoshogi
https://www.acmicpc.net/problem/1302
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(pair<int, string> prev, pair<int, string> next)
{
    if (prev.first == next.first)
    {
        return prev.second < next.second;
    }
    return prev.first > next.first;
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, count = 1;
    string temp = "";
    vector<string> v;
    vector< pair<int, string> > max_book;
    
    cin >> n;
    for (int i = 0;i < n;i++)
    {
        string name;
        
        cin >> name;
        v.push_back(name);
    }
    
    sort(v.begin(), v.end());
    for (auto it : v)
    {
        if (it == temp)
        {
            count++;
            max_book.back().first = count;
        }
        else
        {
            count = 1;
            max_book.push_back({count, it});
            temp = it;
        }
    }
    
    sort(max_book.begin(), max_book.end(), compare);
    cout << max_book.front().second << '\n';
    return 0;
}
