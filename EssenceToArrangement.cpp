#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <ctime>
#include <stack>

using namespace std;
// 프로그래머스 1단계 자연수 뒤집어 배열로 만들기


int main()
{
	stack<int> stk;
	long long a = 54321;
	vector<long long> vec;
	do
	{
		long long i = a % 10;
		vec.push_back(i);
		a /= 10;
	} while (a != 0);

	for (int i = 0; i < vec.size(); i++)
	{
		cout << vec[i] << endl;
	}
	// 정수를 스트링에 담아서 하나하나 스택에 푸시 팝 하려 햇으나
	// 형변환과정에서 가독성이 떨어지고 코드가 길어져서
	// 배틀시티스코어씬때 활용했던 방법으로 해결
}
