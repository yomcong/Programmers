#include <stdio.h>
#include <vector>
#include <stack>
#include <set>
#include <queue>
#include <algorithm>

using namespace std;


int n;
int m;

int map[101][101];
queue <pair<int, int> > que;

void bfs()
{
	que.push(make_pair(0, 0));

	pair <int, int > cur;

	int dr[] = { 1, 0, -1, 0 };
	int dc[] = { 0, 1, 0, -1 };

	while (que.empty() == false)
	{
		cur = que.front();
		que.pop();

		for (int i = 0; i < 4; ++i)
		{
			int nr = dr[i] + cur.first;
			int nc = dc[i] + cur.second;

			if (0 <= nr && nr < n && 0 <= nc && nc < m && map[nr][nc] == 1)
			{
				que.push(make_pair(nr, nc));
				map[nr][nc] = map[cur.first][cur.second] + 1;
			}
		}
	}
}

int main()
{
	scanf("%d %d", &n, &m);

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			int s;
			scanf("%1d", &s);
			map[i][j] = s;
		}
	}

	bfs();

	printf("%d", map[n - 1][m - 1]);



}