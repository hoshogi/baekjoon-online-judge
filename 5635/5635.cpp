/*
Title   : BOJ_5635 [생일]
Author  : Hoseok Lee
Date    : 2021/09/24
https://github.com/hoshogi
https://www.acmicpc.net/problem/5635
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    vector< pair<int, string> > v;
    int n;
    
    cin >> n;
    while (n--)
    {
        string name, day, month, year, birth = "";
        int num;
        
        cin >> name >> day >> month >> year;
        birth += year;
        if (month.length() == 1)
            birth += "0" + month;
        else
            birth += month;
        
        if (day.length() == 1)
            birth += "0" + day;
        else
            birth += day;
        num = stoi(birth);
        v.push_back({num, name});
    }
    
    sort(v.begin(), v.end());
    cout << v.back().second << '\n' << v.front().second << '\n';
    return 0;
}
