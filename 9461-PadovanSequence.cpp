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

long long arr[101] = { 0,1,1,1 };

/*
-3 -2
*/

void foo(int n)
{
	for (int i = 3; i <= n; ++i)
	{
		if (arr[i] == 0)
		{
			arr[i] = arr[i - 3] + arr[i - 2];
		}
	}
}


int main()
{
	int T;
	cin >> T;

	for (int i = 0; i < T; ++i)
	{
		int N;
		cin >> N;
		foo(N);
		cout << arr[N] << "\n";
	}


}






