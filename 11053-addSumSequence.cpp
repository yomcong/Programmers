#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int arr[1'001][2];

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	int a = 0;
	cin >> a;

	for (int i = 0; i < a; ++i)
	{
		cin >> arr[i][0];
	}

	int answer = 0;
	for (int i = 0; i < a; ++i)
	{
		for (int j = 0; j < i; ++j)
		{
			if (arr[i][0] > arr[j][0])
			{
				arr[i][1] = max(arr[i][1], (arr[j][1] + 1));
				answer = max(answer, arr[i][1]);
			}
		}
	}

	cout << answer + 1;



}






