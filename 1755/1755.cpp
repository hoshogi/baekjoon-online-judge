/*
Title   : BOJ_1755 [숫자놀이]
Author  : Hoseok Lee
Date    : 2021/09/25
https://github.com/hoshogi
https://www.acmicpc.net/problem/1755
*/

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int m, n;
    string word[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    vector< pair<string, int> > v;
    
    cin >> m >> n;
    for (int i = m;i <= n;i++)
    {
        string num = "";
        
        if (i >= 10)
            num += word[i / 10] + " " + word[i % 10];
        else
            num += word[i % 10];
        v.push_back({num, i});
    }
    
    sort(v.begin(), v.end());
    
    int count = 0;
    
    for (auto it : v)
    {
        cout << it.second << ' ';
        count++;
        if (count == 10)
        {
            cout << '\n';
            count = 0;
        }
    }
    return 0;
}
