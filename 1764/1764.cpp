/*
Title   : BOJ_1764 [듣보잡]
Author  : Hoseok Lee
Date    : 2021/09/26
https://github.com/hoshogi
https://www.acmicpc.net/problem/1764
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

// binary_search()를 이용한 풀이
int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, m;
    vector<string> v, both;
    
    cin >> n >> m;
    while (n--) {
        string name;
        
        cin >> name;
        v.push_back(name);
    }
    
    sort(v.begin(), v.end());
    
    while (m--) {
        string name;
        
        cin >> name;
        if (binary_search(v.begin(), v.end(), name))
            both.push_back(name);
    }
    
    sort(both.begin(), both.end());
    cout << both.size() << '\n';
    for (string str : both)
        cout << str << '\n';
    return 0;
}

// 맨 처음으로 푼 풀이
/*
int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, m;
    vector<string> v1, v2, both;
    
    cin >> n >> m;
    while (n--) {
        string name;
        
        cin >> name;
        v1.push_back(name);
    }
    
    while (m--) {
        string name;
        
        cin >> name;
        v2.push_back(name);
    }
    
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());
    auto it1 = v1.begin();
    auto it2 = v2.begin();
    
    while (true) {
        if (*it1 == *it2) {
            both.push_back(*it1);
            it1++;
            it2++;
        } else if (*it1 < *it2) {
            it1++;
        } else {
            it2++;
        }
        if (it1 == v1.end() || it2 == v2.end())
            break;
    }
    
    sort(both.begin(), both.end());
    cout << both.size() << '\n';
    for (string str : both)
        cout << str << '\n';
    return 0;
}
*/
