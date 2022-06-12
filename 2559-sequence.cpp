#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int n, k;
int arr[100'001];
int dp[100'001];

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	cin >> n >> k;

	int sum = 0;
	int answer = -987654321;
	for (int i = 1; i <= n; ++i)
	{
		cin >> arr[i];
		sum += arr[i];
		if (i >= k)
		{
			sum -= arr[i - k];
		}

		dp[i] = sum;
		if (i >= k)
		{
			answer = max(answer, dp[i]);
		}
	}

	cout << answer;

}






