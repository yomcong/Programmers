#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <deque>
#include <math.h>
#include <string>
#include <list>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	vector<int> arr = { 1,2,3 };
	int answer = 0;
	sort(arr.begin(), arr.end());

	int num = 1;
	while (true)
	{
		for (int i = 0; i < arr.size() -1; ++i)
		{
			if ((arr[arr.size() - 1] * num) % arr[i] != 0)
			{
				break;
			}

			if (i == arr.size() - 2)
			{
				answer = arr[arr.size() - 1] * num;
				break;
			}
		}
		if (answer == 0)
		{
			++num;
		}
		else
		{
			break;
		}
	}
	cout << answer;
	
}






