/*
Title   : BOJ_11723 [집합]
Author  : Hoseok Lee
Date    : 2021/10/08
https://github.com/hoshogi
https://www.acmicpc.net/problem/11723
*/

#include <iostream>
#include <set>
#include <string>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    set<int> s;
    int m;

    cin >> m;
    while (m--) {
        string menu;
        int num;

        cin >> menu;
        if (menu == "add") {
            cin >> num;
            s.insert(num);
        }
        else if (menu == "remove") {
            cin >> num;
            s.erase(num);
        }
        else if (menu == "check") {
            cin >> num;
            if (s.find(num) == s.end())
                cout << "0" << '\n';
            else
                cout << "1" << '\n';
        }
        else if (menu == "toggle") {
            cin >> num;
            if (s.find(num) != s.end())
                s.erase(num);
            else
                s.insert(num);
        }
        else if (menu == "all") {
            for (int i = 1; i <= 20; i++)
                s.insert(i);
        }
        else if (menu == "empty")
            s.clear();
    }
    return 0;
}