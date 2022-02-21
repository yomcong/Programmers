#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <deque>

using namespace std;

int arr[4096];

void foo(int arr[], int N, const int C, int X, int Y)
{
	int temp = arr[(Y * C) + X];

	for (int i = Y; i < Y + N; ++i)
	{
		for (int j = X; j < X + N; ++j)
		{
			if (arr[(i * C) + j] != temp)
			{
				cout << "(";
				foo(arr, N / 2, C, X, Y);
				foo(arr, N / 2, C, X + (N / 2), Y);
				foo(arr, N / 2, C, X, Y + (N / 2));
				foo(arr, N / 2, C, X + (N / 2), Y + (N / 2));
				cout << ")";
				return;

			}
		}
	}

	cout << temp;
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
		char s;
		cin >> s;

		arr[i] = s - '0';
	}

	foo(arr, N, N, 0, 0);



}