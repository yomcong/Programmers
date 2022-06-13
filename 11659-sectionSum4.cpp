#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int n,m;
int arr[1'001];
int dp[1'001];

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	cin >> n >> m;

	int sum = 0;
	for (int i = 1; i <= n; ++i)
	{
		cin >> arr[i];
		sum += arr[i];
		dp[i] = sum;
	}

	int i, j;
	while ( m >0)
	{
		cin >> i >> j;

		int answer = 0;
		answer = dp[j] - dp[i - 1];

		cout << answer << "\n";

		--m;
	}

}






