/*
Title	: BOJ_10866 [덱]
Author	: Hoseok Lee
Date	: 2021/03/02

https://www.acmicpc.net/problem/10866
https://github.com/hoshogi
*/

#include <iostream>
#include <string>
using namespace std;

/*
Deque : 양 끝에서만 자료를 넣고 양 끝에서 뺄 수 있는 자료구조
Double-Ended Queue의 약자

Dequeue에 포함되어 있는 내용 : [front, back)
*/

struct Deque
{
	// 양 끝에서 자료를 넣고 빼므로 배열의 중간에 front, back을 설정한다
	int data[20000];
	int front = 10000, back = 10000;

	void Push_Front(int num)
	{
		data[--front] = num;
	}

	void Push_Back(int num)
	{
		data[back++] = num;
	}

	int Pop_Front()
	{
		if (Empty())
			return -1;
		else
			return data[front++];
	}

	int Pop_Back()
	{
		if (Empty())
			return -1;
		else
			return data[--back];
	}

	int Size()
	{
		return back - front;
	}

	int Empty()
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
			return data[front];
	}

	int Back()
	{
		if (Empty())
			return -1;
		else
			return data[back - 1];
	}
};

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	Deque d;

	cin >> n;

	while (n--)
	{
		string cmd;

		cin >> cmd;
		if (cmd == "push_front")
		{
			int num;

			cin >> num;
			d.Push_Front(num);
		}
		else if (cmd == "push_back")
		{
			int num;

			cin >> num;
			d.Push_Back(num);
		}
		else if (cmd == "pop_front")
			cout << d.Pop_Front() << '\n';
		else if (cmd == "pop_back")
			cout << d.Pop_Back() << '\n';
		else if (cmd == "size")
			cout << d.Size() << '\n';
		else if (cmd == "empty")
			cout << d.Empty() << '\n';
		else if (cmd == "front")
			cout << d.Front() << '\n';
		else if (cmd == "back")
			cout << d.Back() << '\n';
	}
	return 0;
}