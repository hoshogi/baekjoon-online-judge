/*
Title   : BOJ_10845 [큐]
Author  : Hoseok Lee
Date    : 2021/03/02

https://www.acmicpc.net/problem/10845
https://github.com/hoshogi
*/

#include <iostream>
#include <string>
using namespace std;

/*
Queue는 한쪽 끝에서만 자료를 넣고 다른 한쪽 끝에서만 뺄 수 있는 자료구조
First In First Out
일차원 배열 하나로 구현
Queue에 포함되어 있는 내용은 [first, last)
*/

struct Queue
{
    int data[10000];
    int first = 0, last = 0;
    
    void Push(int num)
    {
        data[last] = num;
        last++;
    }
       
    int Pop()
    {
        if (Empty())
            return -1;
        else
        {
            int num;
            
            num = data[first];
            first++;
            
            return num;
        }
    }
    
    int Size()
    {
        return last - first;
    }
    
    bool Empty()
    {
        if (Size() == 0)
            return 1;
        else
            return 0;
    }
    
    int Front()
    {
        if (Empty())
            return -1;
        else
            return data[first];
    }
    
    int Back()
    {
        if (Empty())
            return -1;
        else
            return data[last - 1];
    }
};

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    Queue q;
    
    cin >> n;
    while (n--)
    {
        string cmd;
        
        cin >> cmd;
        if (cmd == "push")
        {
            int num;
            
            cin >> num;
            q.Push(num);
        }
        else if (cmd == "pop")
        {
            cout << q.Pop() << '\n';
        }
        else if (cmd == "size")
        {
            cout << q.Size() << '\n';
        }
        else if (cmd == "empty")
        {
            cout << q.Empty() << '\n';
        }
        else if (cmd == "front")
        {
            cout << q.Front() << '\n';
        }
        else if (cmd == "back")
        {
            cout << q.Back() << '\n';
        }
    }
    return 0;
}
