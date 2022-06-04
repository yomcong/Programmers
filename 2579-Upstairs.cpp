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

int arr[301][2];

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	int n = 0;
	cin >> n;

	arr[0][0] = 0;
	arr[0][1] = 0;
	
	for (int i = 1; i <= n; ++i)
	{
		cin >> arr[i][0];
		arr[i][1] = arr[i][0];
	}

	for (int i = 2; i <= n; ++i)
	{
		arr[i][0] += max(arr[i - 2][0], arr[i - 2][1]);
		arr[i][1] += arr[i - 1][0];
	}

	cout << max(arr[n][0], arr[n][1]);

}






