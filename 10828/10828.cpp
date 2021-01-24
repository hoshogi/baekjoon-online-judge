/*
Title	: BOJ_10828 [스택]
Author	: Hoseok Lee
Date	: 2021/01/23

https://www.acmicpc.net/problem/10828
https://github.com/hoshogi
*/

/*
Stack: 한 쪽 끝에서만 자료를 넣고 뺄 수 있는 자료구조
Stack은 일차원 배열 하나로 구현 할 수 있다
*/

#include <iostream>
#include <string>

using namespace std;

// 신형 컴파일러 경우 struct 앞에 typedef 선언 생략 가능
struct Stack 
{

	int data[10000], size;

	Stack()
	{
		size = 0;
	}

	// Push(): Stack에 자료를 넣는 메서드
	void Push(int num)
	{
		data[size] = num;
		size++;
	}

	// Size(): Stack에 저장되어 있는 자료의 개수를 알려주는 메서드
	int Size()
	{
		return size;
	}

	// Empty(): Stack이 비어있는지 아닌지를 알려주는 메서드
	int Empty()
	{
		if (size == 0)
			return 1;
		else
			return 0;
	}

	/*
	Empty() 메서드를 2가지 형태로 정의 가능

	bool Empty()
	{
		if (size == 0)
			return true;
		else
			return false;
	}
	*/

	// Pop(): Stack에서 자료르 빼는 메서드
	int Pop()
	{
		if (Empty())
			return -1;
		else
		{	
			size--;
			return data[size];
		}
	}

	// Top(): Stack의 가장 위에 있는 자료를 알려주는 메서드
	int Top()
	{
		if (Empty())
		{
			return -1;
		}
		else
		{
			return data[size - 1];
		}
	}
 };

int main(void)
{
	int n;
	Stack s;

	cin >> n;

	while (n--)
	{
		string cmd;

		cin >> cmd;

		if (cmd == "push")
		{
			int num;
			cin >> num;
			s.Push(num);
		}
		else if (cmd == "pop")
		{
			cout << s.Pop() << '\n';
		}
		else if (cmd == "size")
		{
			cout << s.Size() << '\n';
		}
		else if (cmd == "empty")
		{
			cout << s.Empty() << '\n';
		}
		else if (cmd == "top")
		{
			cout << s.Top() << '\n';
		}
	}

	return 0;
}