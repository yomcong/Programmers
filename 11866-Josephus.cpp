#include <iostream>
#include <queue>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	int N = 0;
	int K = 0;

	queue<int > que = {};
	queue<int > que2 = {};
	cin >> N >> K;

	for (int i = 0; i < N; ++i)
	{
		que.push(i + 1);
	}

	while (!que.empty())
	{
		for (int i = 0; i < K - 1; ++i)
		{
			que.push(que.front());
			que.pop();
		}
		que2.push(que.front());
		que.pop();
	}
	cout << "<";
	while (!que2.empty())
	{
		cout << que2.front();
		que2.pop();
		if (que2.empty())
			cout << "> ";
		else
			cout << ", ";
	}

}
