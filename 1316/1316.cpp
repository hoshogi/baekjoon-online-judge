/*
Title	: BOJ_1316 [그룹 단어 체커]
Author	: Hoseok Lee
Date	: 2021/02/23

https://www.acmicpc.net/problem/1316
https://github.com/hoshogi
*/

#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, count = 0;
	int alphabet[26];

	fill_n(alphabet, 26, -1); // 배열 초기화
	
	cin >> n;
	string* word = new string[n]; // string 동적 할당

	for (int i = 0;i < n;i++)
	{
		cin >> word[i];

		for (int j = 0;j < word[i].length();j++)
		{
			if (alphabet[word[i][j] - 97] == -1 || alphabet[word[i][j] - 97] == j - 1) // 'a'의 아스키 코드 값: 97
				alphabet[word[i][j] - 97] = j;
			else
			{
				fill_n(alphabet, 26, -1);
				break;
			}
			
			if (j == word[i].length() - 1)
			{
				fill_n(alphabet, 26, -1);
				count++;
			}
		}
	}

	cout << count << '\n';
	return 0;
}