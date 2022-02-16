#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
#include <deque>

using namespace std;

//int arr[51];
int arr2[51];
int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	int N = 0;
	int M = 0;
	cin >> N >> M;
	int result = 0;
	int count = 0;
	deque<int> arr;
	for (int i = 1; i <= N; ++i)
	{
		arr.push_back(i);
	}

	for (int i = 0; i < M; ++i)
	{
		cin >> arr2[i];
	}


	while (arr.size() != N - M)
	{
		for (int i = 0; i < arr.size(); ++i)
		{
			if (arr[i] == arr2[count])
			{
				if (i == 0)
				{
					arr.pop_front();
					count++;
					break;
				}
				else if (i <= (arr.size() / 2) )
				{
					for (int j = 0; j < i; ++j)
					{
						arr.push_back(arr.front());
						arr.pop_front();
						result++;
					}
					arr.pop_front();
					count++;
					break;
				}
				else
				{
					for (int j = i; j < arr.size(); ++j)
					{
						arr.push_front(arr.back());
						arr.pop_back();
						result++;
					}
					arr.pop_front();
					count++;
					break;
				}
			}
		}
	}

	cout << result;

}