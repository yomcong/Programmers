#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <queue>

using namespace std;

int visitN = 1;
int n;
int m;
int r;


vector<int> map[1'001];
vector<int> answer(1'001, 0);

void BFS()
{
	queue<int> que;
	que.push(r);
	answer[r] = visitN++;

	while (que.empty() == false)
	{
		int currN = que.front();
		que.pop();

		for (int i = 0; i < map[currN].size(); ++i)
		{
			int nextN = map[currN][i];
			if (answer[nextN] == 0)
			{
				answer[nextN] = visitN++;
				que.push(nextN);
			}
		}
	}

}

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);


	cin >> n >> m >> r;

	for (int i = 0; i < m; ++i)
	{
		int u, v;
		cin >> u >> v;
		map[u].push_back(v);
		map[v].push_back(u);
	}

	for (int i = 1; i <= n; ++i)
	{
		sort(map[i].begin(), map[i].end());
	}

	BFS();


	for (int i=1; i<=n; ++i)
	{
		cout << answer[i] << "\n";
	}



}






