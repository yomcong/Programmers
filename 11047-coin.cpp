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

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	int N, K;
	cin >> N >> K;

	int arr[10] = {};
	int answer = 0;

	for (int i = 0; i < N; ++i)
	{
		cin >> arr[i];
	}

	int index = N-1;

	for (int i = index; i >= 0; --i)
	{
		if (arr[i] > K)
		{
			continue;
		}
		else
		{
			index = i;
			break;
		}
	}

	int sum = 0;
	while (true)
	{
		answer++;
		sum += arr[index];

		if (sum > K)
		{
			answer--;
			sum -= arr[index--];
		}
		else if (sum == K)
		{
			break;
		}
	}

	cout << answer;
}






