/*
Title   : BOJ_1181 [단어 정렬]
Author  : Hoseok Lee
Date    : 2021/09/16
https://github.com/hoshogi
https://www.acmicpc.net/problem/1181
*/

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

bool compare(string str1, string str2)
{
    if (str1.length() == str2.length())
        return str1 < str2;
    return str1.length() < str2.length();
}

/*
시간을 개선한 방법
-> sort 한 후 출력하기 전에 중복성 검사
*/
int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    vector<string> v;
    string temp;
    
    cin >> n;
    while (n--)
    {
        string word;
        
        cin >> word;
        v.push_back(word);
    }
    
    sort(v.begin(), v.end(), compare);
    for (auto str : v)
    {
        if (str == temp)
            continue;
        cout << str << '\n';
        temp = str;
    }
    
    return 0;
}

/*
맨 처음으로 푼 방법
vector에 넣기 전에 같은 것이 있는지 find
단점 -> 시간이 너무 오래 걸린다
*/
/*
 #include <iostream>
 #include <string>
 #include <algorithm>
 #include <vector>
 using namespace std;

 bool compare(string str1, string str2)
 {
     if (str1.length() == str2.length())
         return str1 < str2;
     return str1.length() < str2.length();
 }

 int main(void)
 {
     ios_base::sync_with_stdio(false);
     cin.tie(nullptr);
     
     int n;
     vector<string> v;
     
     cin >> n;
     while (n--)
     {
         string word;
         
         cin >> word;
         auto check = find(v.begin(), v.end(), word);
         
         if (check == v.end())
             v.push_back(word);
     }
     
     sort(v.begin(), v.end(), compare);
     for (auto i : v)
         cout << i << '\n';
     
     return 0;
 }

*/
