#include <iostream>
#include <stdio.h>

using namespace std;


int Fibonacci(int n)
{
	// 기저 조건
	if (n <= 0)
	{
		return 0;
	}
	if (n == 1)
	{
		return 1;
	}

	// 재귀 조건
	return Fibonacci(n - 1) + Fibonacci(n - 2);


}


int main()
{
	int n = 0;
	cin >> n;

	cout << Fibonacci(n);

}
