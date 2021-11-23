#include <iostream>
#include <stdio.h>

using namespace std;

// F(n) = n * F(n-1)
// F(0) = 1

int factorial(int n)
{
	cout << "factorial : " << n << endl;
	// 기저 조건 (Base Case)
	if (n == 0)
	{
		return 1;
	}

	// 재귀 조건 (Recursive Case)
	return factorial(n - 1) * (n);


}


int main()
{
	int n = 0;
	cin >> n;

	cout << factorial(n);


}
