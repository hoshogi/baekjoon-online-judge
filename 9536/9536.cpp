/*
Title   : BOJ_9536 [여우는 어떻게 울지?]
Author  : Hoseok Lee
Date    : 2021/09/28
https://github.com/hoshogi
https://www.acmicpc.net/problem/9536
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    
    cin >> t;
    cin.ignore();
    while (t--)
    {
        vector<string> v;
        string sound, word = "";
        
        getline(cin, sound);
        for (int i = 0;i < sound.length();i++) {
            if (sound[i] == ' ') {
                v.push_back(word);
                word = "";
            } else {
                word += sound[i];
            }
            if (i == sound.length() - 1 && word.length() > 0)
                v.push_back(word);
        }
        
        while (true) {
            string sentence;
            
            getline(cin, sentence);
            if(sentence == "what does the fox say?")
                break;
            
            int start = sentence.find("goes") + 5;
            string cry = sentence.substr(start);
            
            while (find(v.begin(), v.end(), cry) != v.end())
                v.erase(find(v.begin(), v.end(), cry));
        }
        
        for (string str : v)
            cout << str << ' ';
        cout << '\n';
    }
    return 0;
}
