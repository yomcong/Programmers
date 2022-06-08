#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int n, k;
int dp[101][100'001];
int w[101];
int v[101];


int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	cin >> n >> k;

	for (int i = 1; i <= n; ++i)
	{
		cin >> w[i] >> v[i];
	}


	for (int i = 1; i <= n; ++i)
	{
		for (int j = 1; j <= k; ++j)
		{
			if (j - w[i] >= 0)
			{
				dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - w[i]] + v[i]);
			}
			else
			{
				dp[i][j] = dp[i - 1][j];
			}
		}
	}


	cout << dp[n][k];


}





