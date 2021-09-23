/*
Title   : BOJ_10814 [나이순 정렬]
Author  : Hoseok Lee
Date    : 2021/09/20
https://github.com/hoshogi
https://www.acmicpc.net/problem/10814
*/

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <tuple>
using namespace std;

bool compare(tuple<int, int, string> t1, tuple<int, int, string> t2)
{
    if (get<0>(t1) == get<0>(t2))
    {
        return get<1>(t1) < get<1>(t2);
    }
    return get<0>(t1) < get<0>(t2);
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    vector< tuple<int, int, string> > v;
    int n;

    cin >> n;
    for (int i = 0;i < n;i++)
    {
        int age;
        string name;

        cin >> age >> name;
        v.push_back(make_tuple(age, i, name));
    }

    sort(v.begin(), v.end(), compare);
    for (auto it : v)
        cout << get<0>(it) << ' ' << get<2>(it) << '\n';

    return 0;
}

// 다른 풀이 -> stable_sort() 사용
/*
bool compare(pair<int, string> u, pair<int, string> v)
{
    return u.first < v.first;
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    vector< pair<int, string> > v;
    int n;

    cin >> n;
    for (int i = 0;i < n;i++)
    {
        int age;
        string name;

        cin >> age >> name;
        v.push_back(make_pair(age, name));
    }

    stable_sort(v.begin(), v.end(), compare);
    for (auto it : v)
        cout << it.first << ' ' << it.second << '\n';

    return 0;
}
*/

