#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <deque>
#include <math.h>
#include <string>

using namespace std;

int arr[9];
bool barr[9];

int n, m;
void foo(int num)
{
	if (num == m)
	{
		for (int i = 0; i < m; ++i)
		{
			cout << arr[i] << " ";
		}
		cout << "\n";
		return;
	}

	for (int i = 1; i <= n; ++i)
	{
		if (barr[i] == false)
		{
			if (num == 0)
			{
				arr[num] = i;
				barr[i] = true;
				foo(num + 1);
				barr[i] = false;
			}
			else
			{
				if (arr[num -1] < i)
				{
					arr[num] = i;
					barr[i] = true;
					foo(num + 1);
					barr[i] = false;
				}
			}
		}
	}
	arr[num] = 0;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	cin >> n >> m;

	foo(0);

}
