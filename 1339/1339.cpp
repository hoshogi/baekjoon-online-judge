/*
Title   : BOJ_1339 [단어 수학]
Author  : Hoseok Lee
Date    : 2022/03/10
https://www.acmicpc.net/problem/1339
https://github.com/hoshogi
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(pair<int, long long> prev, pair<int, long long> next) {
	return prev.second > next.second;
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	long long alphabet[26] = { 0, };
	vector<string> v;
	vector<pair<int, long long> > weight;
	
	cin >> n;
	for (int i = 0; i < n; i++) {
		string str;

		cin >> str;
		v.push_back(str);
		reverse(str.begin(), str.end());
		for (int j = 0; j < str.length(); j++) {
			int mul = 1;
			for (int k = 0; k < j; k++)
				mul *= 10;

			alphabet[str[j] - 'A'] += mul;
		}
	}

	for (int i = 0; i < 26; i++) {
		if (alphabet[i] != 0) {
			weight.push_back(make_pair(i, alphabet[i]));
		}
	}
	sort(weight.begin(), weight.end(), compare);

	int count = 9;
	for (auto it : weight) {
		alphabet[it.first] = count;
		count--;
	}

	long long result = 0;
	for (int i = 0; i < v.size(); i++) {
		string temp = "";
		
		for (int j = 0; j < v[i].length(); j++)
			temp += to_string(alphabet[v[i][j] - 'A']);
		result += stoll(temp);
	}
	cout << result << '\n';
	return 0;
}