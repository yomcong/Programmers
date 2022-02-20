#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <deque>

using namespace std;

int arr[4782970];

int temp1;
int temp2;
int temp3;


void foo(int arr[], int x, int y, int n, const int c)
{
	int temp = arr[(y * c) + x];

	for (int i = y; i < y + n; ++i)
	{
		for (int j = x; j < x + n; ++j)
		{
			if (arr[(i * c) + j] != temp)
			{
				foo(arr, x, y, n / 3, c);
				foo(arr, x + (n / 3), y, (n / 3), c);
				foo(arr, x + (n * 2 / 3), y, (n / 3), c);

				foo(arr, x, y + (n / 3), n / 3, c);
				foo(arr, x + (n / 3), y + (n / 3), (n / 3), c);
				foo(arr, x + (n * 2 / 3), y + (n / 3), (n / 3), c);

				foo(arr, x, y + (n * 2 / 3), n / 3, c);
				foo(arr, x + (n / 3), y + (n * 2 / 3), (n / 3), c);
				foo(arr, x + (n * 2 / 3), y + (n * 2 / 3), (n / 3), c);
				return;
			}
		}
	}

	if (temp == -1)
	{
		++temp1;
	}
	else if (temp == 0)
	{
		++temp2;
	}
	else if (temp == 1)
	{
		++temp3;
	}
}


int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);


	int N = 0;
	cin >> N;

	for (int i = 0; i < (N * N); ++i)
	{
		cin >> arr[i];
	}

	foo(arr, 0, 0, N, N);

	cout << temp1 << "\n";
	cout << temp2 << "\n";
	cout << temp3;



}