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
#define mod 1'000'000'000;

long long arr[101][10];

int foo(int num)
{
	for (int i = 2; i <= num; ++i)
	{
		for (int j = 0; j <= 9; ++j)
		{
			if (j == 0)
			{
				arr[i][j] = arr[i - 1][j + 1] % mod;
			}
			else if (j == 9)
			{
				arr[i][j] = arr[i - 1][j - 1] % mod;
			}
			else
			{
				arr[i][j] = (arr[i - 1][j - 1] + arr[i - 1][j + 1]) % mod;
			}
		}
	}


	return 1;
}


int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	int n = 0;
	cin >> n;

	for (int i = 1; i <= 9; ++i)
	{
		arr[1][i] = 1;
	}
	arr[1][0] = 0;

	foo(n);

	long long answer = 0;
	for (int i = 0; i <= 9; ++i)
	{
		answer += arr[n][i];
	}

	cout << answer % mod;

}






