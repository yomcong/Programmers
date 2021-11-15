#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// 프로그래머스 1단계 내림차순으로 배치하기

bool desc(int a, int b)
{
	return a > b;
}


int main()
{
	string s = "Zbcdefg";

	sort(s.begin(), s.end(), desc);

	cout << s;
}