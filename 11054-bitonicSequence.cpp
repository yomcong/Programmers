#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int n;

int arr[1'001];
int dp[1'001][2];

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	cin >> n;

	int answer = 0;

	for (int i = 1; i <= n; ++i)
	{
		cin >> arr[i];
	}

	for (int i = 1; i <= n; ++i)
	{
		for (int j = 1; j < i; ++j)
		{
			if (arr[i] > arr[j])
			{
				dp[i][0] = max(dp[i][0], dp[j][0]);
			}
			else if (arr[i] < arr[j])
			{
				dp[i][1] = max(dp[i][1], max(dp[j][0], dp[j][1]));
			}
		}
		dp[i][0] += 1;
		dp[i][1] += 1;
		answer = max(answer, max(dp[i][0], dp[i][1]));
	}
	cout << answer;

}






