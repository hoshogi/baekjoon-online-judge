/*
Title   : BOJ_1620 [나는야 포켓몬 마스터 이다솜]
Author  : Hoseok Lee
Date    : 2021/09/30
https://github.com/hoshogi
https://www.acmicpc.net/problem/1620
*/

#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

/*
시간을 개선한 풀이
{문자열, 정수} pair를 가진 map 1개
문자열을 담는 vector 1개를 만들었다.
*/
int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, m;
    vector<string> pikachu_num;
    map <string, int> pikachu_name;
    
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        string name;
        
        cin >> name;
        pikachu_num.push_back(name);
        pikachu_name.insert({name, i});
    }
    
    while (m--) {
        string quest;
        
        cin >> quest;
        if (quest[0] >= '0' && quest[0] <= '9') {
            int num = stoi(quest);
            cout << pikachu_num[num - 1] << '\n';
        } else {
            auto it = pikachu_name.lower_bound(quest);
            cout << it->second << '\n';
        }
    }
    return 0;
}

// 처음 풀이
// {정수, 문자열}, {문자열, 정수} pair를 가진 map을 각각 1개 만들었다.
/*
#include <iostream>
#include <string>
#include <map>
#include <algorithm>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, m;
    map <int, string> pikachu_num;
    map <string, int> pikachu_name;
    
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        string name;
        
        cin >> name;
        pikachu_num.insert({i, name});
        pikachu_name.insert({name, i});
    }
    
    while (m--) {
        string quest;
        
        cin >> quest;
        if (quest[0] >= '0' && quest[0] <= '9') {
            int num = stoi(quest);
            auto it = pikachu_num.lower_bound(num);
            cout << it->second << '\n';
        } else {
            auto it = pikachu_name.lower_bound(quest);
            cout << it->second << '\n';
        }
    }
    return 0;
}
*/
