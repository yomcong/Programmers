#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	int N = 0;
	cin >> N;
	int arr[1001];
	for (int i = 0; i < N; ++i)
	{
		cin >> arr[i];
	}

	int index = 0;
	while (true)
	{
		if (arr[index] > arr[index + 1])
		{
			int temp = arr[index];
			arr[index] = arr[index + 1];
			arr[index + 1] = temp;

			if (index != 0)
			{
				--index;
			}
			else
			{
				++index;
			}
		}
		else
		{
			++index;
		}

		if (index == N - 1)
		{
			break;
		}
	}

	for (int i = 0; i < N; ++i)
	{
		cout << arr[i] << "\n";
	}



}