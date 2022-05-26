#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <deque>
#include <math.h>
#include <string>
#include <list>

using namespace std;

long long fibo[50] = { 0,1, };

long long fibonacci(int n)
{
	if (n == 0 || n== 1)
	{
		return fibo[n];
	}
	else if (fibo[n] == 0)
	{
		fibo[n] = fibonacci(n - 1) + fibonacci(n - 2);
	}

	return fibo[n];
}

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	int N;
	cin >> N;

	for (int i = 0; i < N; ++i)
	{
		int T;
		cin >> T;

		if (T == 0)
		{
			cout << 1 << " " << 0 << "\n";
			continue;
		}
		cout << fibonacci(T - 1) << " " << fibonacci(T) << "\n";
		

	}

}






