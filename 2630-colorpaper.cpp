#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <deque>


using namespace std;


int White(int arr[], const int c, int t, int y, int x)
{
	for (int i = y; i < (t + y); ++i)
	{
		for (int j = x; j < (t + x); ++j)
		{
			if (arr[(i * c) + j] != 0)
			{
				if (t == 1)
				{
					return 0;
				}
				else
				{
					return White(arr, c, t / 2, y, x) + White(arr, c, t / 2, y, x+(t/2)) + White(arr, c, t / 2, y+(t / 2), x) + White(arr, c, t / 2, y+(t / 2), x+(t / 2));
				}
			}
		}
	}

	return 1;
}

int Black(int arr[], const int c, int t, int y, int x)
{
	for (int i = y; i < (t + y); ++i)
	{
		for (int j = x; j < (t + x); ++j)
		{
			if (arr[(i * c) + j] != 1)
			{
				if (t == 1)
				{
					return 0;
				}
				else
				{
					return Black(arr, c, t / 2, y, x) + Black(arr, c, t / 2, y, x + (t / 2)) + Black(arr, c, t / 2, y + (t / 2), x) + Black(arr, c, t / 2, y + (t / 2), x + (t / 2));
				}
			}
		}
	}

	return 1;
}


//int arr[50];
//int arr2[51];
//int arr[128][128];

int arr[16384];

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);


	int T = 0;
	cin >> T;

	for (int i = 0; i < (T * T); ++i)
	{
		cin >> arr[i];
	}



	cout << White(arr, T, T, 0, 0) << "\n";
	cout << Black(arr, T, T, 0, 0);

}