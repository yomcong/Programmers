#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <deque>
#include <math.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	int t;
	cin >> t;

	for (int i = 0; i < t; ++i)
	{
		int n = 0;
		cin >> n;

		int min, max;
		min = max = (n / 2);

		while (true)
		{
			if (min != 2)
			{
				if ( min %2 == 0 || max %2 ==0)
				{
					min--;
					max++;
					continue;
				}
			}

			bool bMin = false;
			for (int j = 3; j < min; j += 2)
			{
				if (min % j == 0)
				{
					min--;
					max++;
					bMin = true;
					break;
				}
			}

			if (bMin)
			{
				continue;
			}
			
			bool bMax = false;
			for (int j = 3; j < max; j += 2)
			{
				if (max % j == 0)
				{
					min--;
					max++;
					bMax = true;
					break;
				}
			}
			if (bMax)
			{
				continue;
			}

			cout << min << " " << max << "\n";
			break;
		}

	}
}
