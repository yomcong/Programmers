#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int arr[500'000];
int countArr[8'001];

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	int N = 0;
	cin >> N;

	vector<int> vec(N);

	int temp = 0;

	int sum = 0;
	int max = 0;
	int index = 0;

	for (int i = 0; i < N; ++i)
	{
		cin >> arr[i];

		countArr[arr[i] + 4'000]++;
		sum += arr[i];

	}

	sort(arr, arr + N);

	for (int i = 0; i < 8001; ++i)
	{
		if (countArr[i] > max)
		{
			max = countArr[i];
			index = i;
		}
	}
	for (int i = index + 1; i < 8001; ++i)
	{
		if (countArr[i] == max)
		{
			index = i;
			break;
		}
	}

	if (sum < 0)
	{
		cout << int(double(sum) / N - 0.5f) << "\n";
	}
	else
	{
		cout << int(double(sum) / N + 0.5f) << "\n";
	}
	cout << arr[(N - 1) / 2] << "\n";
	
	cout << index-4000 << "\n";

	cout << arr[N - 1] - arr[0];


}