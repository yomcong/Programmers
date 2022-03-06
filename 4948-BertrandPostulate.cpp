#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <deque>

using namespace std;


int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	while (true)
	{
		int n = 0;
		cin >> n;

		if (n == 0)
		{
			break;
		}

		int count = 0;

		for (int i = n + 1; i <= (n * 2); ++i)
		{
			int root = sqrt(i);

			if (root == 1 && i != 1)
			{
				count++;
				continue;
			}

			if (i % 2)
			{
				for (int j = 2; j <= root; ++j)
				{
					if ((i % j) == 0)
					{
						break;
					}

					if (j == root)
					{
						count++;
					}
				}
			}

		}
		cout << count << "\n";
	}
}
