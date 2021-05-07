/*
Title   : BOJ_2083 [럭비 클럽]
Author  : Hoseok Lee
Date    : 2021/05/07

https://www.acmicpc.net/problem/2083
https://github.com/hoshogi
*/

#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    while (true)
    {
        string name;
        int age, weight;
        
        cin >> name >> age >> weight;
        if (name == "#" && age == 0 && weight == 0)
            break;
        
        if (age > 17 || weight >= 80)
            cout << name << ' ' << "Senior" << '\n';
        else
            cout << name << ' ' << "Junior" << '\n';
    }
    
    return 0;
}
