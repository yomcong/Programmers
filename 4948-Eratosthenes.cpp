#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <deque>
#include <math.h>

using namespace std;

int arr[101];

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	int m, n;
	cin >> m >> n;

	
	if (m < 3)
	{
		cout << 2 << "\n";
		m = 3;
	}
	else if (m % 2 == 0)
	{
		m++;
	}

	for (int i = m; i <= n; i+=2)
	{
		if (i == 3)
		{
			cout << i << "\n";
			continue;
		}

		int temp = sqrt(i);

		//cout << i << ", " <<temp << " sqrt" << "\n";
		for (int j = 2; j <= temp; ++j)
		{
			if ((i % j) == 0)
			{
				break;
			}

			if (j == temp)
			{
				cout << i << "\n";
			}
		}



	}


}
