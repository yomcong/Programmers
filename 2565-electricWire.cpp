#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int n;

int dp[101];

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	cin >> n;
	vector<pair<int, int>> vec;
	vec.push_back(make_pair(0, 0));
	for (int i = 1; i <= n; ++i)
	{
		int a, b;
		cin >> a >>  b;
		vec.push_back(make_pair(a, b));
	}

	sort(vec.begin(), vec.end());

	int answer = 0;

	for (int i = 1; i <= n; ++i)
	{
		for (int j = 0; j < i; ++j)
		{
			if (vec[i].second > vec[j].second)
			{
				if (dp[i] <= dp[j])
				{
					dp[i] = dp[j] + 1;
					answer = max(answer, dp[i]);
				}
			}
		}
	}

	cout << n - answer;
}






