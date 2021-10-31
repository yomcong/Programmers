#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <ctime>
#include <stack>

using namespace std;
// 프로그래머스 1단계 자릿수 더하기

int main()
{
	int answer = 0;
	int a = 987;

	do
	{
		answer += (a % 10);
		a /= 10;
	} while (a != 0);

	cout << answer << endl;
	
}
