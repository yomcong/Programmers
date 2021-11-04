#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <ctime>
#include <stack>

using namespace std;
// 프로그래머스 1단계 문자열을 정수로 바꾸기

int main()
{
	string s = "+1234";
	int answer = 0;

	s[0] == '-' ? answer = stoi(s) : answer = stoi(s);
	
	cout << answer << endl;
	// 
	// 
}
