#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <deque>

using namespace std;

int arr[10'000];

string temp;


//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cout.tie(nullptr);
//	cin.tie(nullptr);
//
//
//	int a = 0;
//	string s = {};
//
//	foo(10);
//
//	cout << temp;
//}

int foo(int n)
{
	if (n == 0 || n == 3)
	{
		temp += "4";
		return 0;
	}
	else if (n == 1)
	{
		temp += "1";
		return 0;
	}
	else if (n == 2)
	{
		temp += "2";
		return 0;
	}

	if (n % 3 == 0)
	{
		return foo((n - 1) / 3) + foo(n % 3);
	}

	return foo(n / 3) + foo(n % 3);
}

string solution(int n) {
	string answer = "";

	foo(n);

	answer = temp;
	return answer;
}