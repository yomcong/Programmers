#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <ctime>
#include <stack>

using namespace std;
// 프로그래머스 1단계 약수의 합

int main()
{
	int a = 12;
	int temp = 0;

	for (int i = 1; i <= a; i++)
	{
		if (a % i == 0)
		{
			temp += i;
		}
	}

	cout << temp << endl;

	// 
	// 
}
