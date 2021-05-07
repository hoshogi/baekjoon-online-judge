/*
Title   : BOJ_10867 [중복 빼고 정렬하기]
Author  : Hoseok Lee
Date    : 2021/05/08

https://www.acmicpc.net/problem/10867
https://github.com/hoshogi
*/

#include <iostream>
#include <algorithm>
using namespace std;

/*
풀이: 배열을 오름차순으로 정렬한 뒤에 순차대로 확인하면서 이전 index 값과 다르면 값 출력
 
다른 풀이: 입력 받을 때 숫자의 빈도 수를 계산한 뒤 빈도 수가 0 이 아닌 숫자들을 출력
*/

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, num[100000];
    
    cin >> n;
    for (int i = 0;i < n;i++)
        cin >> num[i];
    
    sort(num, num + n);
    
    cout << num[0] << ' ';
    for (int i = 1;i < n;i++)
        if (num[i] != num[i - 1])
            cout << num[i] << ' ';
    
    return 0;
}
