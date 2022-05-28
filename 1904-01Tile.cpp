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

long long arr[1'000] = { 0,1,2, };

void tile(int n)
{
	long long number;
	for (int i = 3; i <= n; ++i)
	{
		number = 0;
		number = arr[i - 1] + arr[i - 2];
		arr[i] = number % 15746;
	}


}

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	int N = 0;
	cin >> N;
	tile(N);
	cout << arr[N] % 15746;




}






