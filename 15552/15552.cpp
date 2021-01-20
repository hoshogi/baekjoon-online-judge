/*
Title   : BOJ_15552 [빠른 A+B]
Author  : Hoseok Lee
Date    : 2021/01/20

https://www.acmicpc.net/problem/15552
https://github.com/hoshogi
*/

#include <iostream>
using namespace std;

int main() {
    int t, a, b;

    /*
    ios::sync_with_stdio는 cpp의 iostream을 c의 stdio와 동기화 시켜주는 역할을 한다
    이는 iostream, stdio의 buffer를 모두 사용하기 때문에 딜레이가 발생한다
    ios::sync_with_stdio(false)는 이 동기화 부분을 끊는 함수이다
    이를 사용하면 c++만의 독립적인 buffer를 생성하게 되고 c의 buffer들과 병행하여 사용 할 수 없게 된다
    대신 사용하는 buffer의 수가 줄어들었기 때문에 속도는 높아지게 된다
    */
    ios::sync_with_stdio(false);

    /*
    cin과 cout의 묶음을 풀어준다
    cout << "hi"; cin >> name; 일 때
    untie의 경우 cout로부터 cin을 untie해주기 때문에 먼저 입력부터 하게된다
    cout은 default에선 출격 명령을 내리거나 buffer가 가득찼을 경우에만 flushed되고 출력 되기 때문이다
    cin을 cout에서 untie 하고 싶다면 cin으로 입력하기 전에 cout을 출력을 할 때마다 지속적으로 flush를 해줘야 합니다
    */
    cin.tie(NULL);

    cin >> t;
    for (int i = 0;i < t;i++)
    {
        cin >> a >> b;
        cout << a + b << "\n";
    }

    return 0;
}