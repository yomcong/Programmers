#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <deque>


using namespace std;

int arr[50];
//int arr2[51];
int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	
	int T = 0;
	cin >> T;
	while (T > 0)
	{
		int N, M;
		cin >> N >> M;
		int count=0;

		priority_queue<int> pq;
		queue<int> q;
		for (int i = 0; i < N; ++i)
		{
			cin >> arr[i];
			q.push(arr[i]);
			pq.push(arr[i]);
		}

		while (true)
		{
			if (q.front() == pq.top())
			{
				q.pop();
				pq.pop();
				count++;
				--M;
			}
			else
			{
				q.push(q.front());
				q.pop();
				if (M == 0)
				{
					M = q.size() - 1;
				}
				else
				{
					--M;
				}
			}

			if (M == -1)
			{
				cout << count << "\n";
				break;
			}
		}
		

		--T;
	}

}