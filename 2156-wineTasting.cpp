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

int arr[10'01][5];

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	int n = 0;
	cin >> n;

	for (int i = 1; i <= n; ++i)
	{
		cin >> arr[i][0];
	}

	for (int i = 1; i <= n; ++i)
	{
		arr[i][1] = max(arr[i - 1][2], arr[i-1][3]) + arr[i][0];
		arr[i][2] = max(arr[i - 1][3], arr[i-1][4]) + arr[i][0];
		arr[i][3] = arr[i - 1][1];
		arr[i][4] = arr[i - 1][3];
	}

	cout << max(arr[n][1], max(arr[n][2], max(arr[n][3], arr[n][4])));
}






