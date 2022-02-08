#include <stdio.h>
#include <vector>
#include <stack>
#include <set>
#include <queue>
#include <algorithm>

using namespace std;


int n;
int m;

int map[1000][1000];
//bool bMap[1000][1000];
queue <pair<int, int> > que;
pair <int, int > cur;

int result;


void bfs(int y, int x)
{

	int dr[] = { 1, 0, -1, 0 };
	int dc[] = { 0, 1, 0, -1 };

	while (que.empty() == false)
	{
		cur = que.front();
		que.pop();

		//bMap[cur.first][cur.second] = true;

		for (int i = 0; i < 4; ++i)
		{
			int nr = dr[i] + cur.first;
			int nc = dc[i] + cur.second;

			if (0 <= nr && nr < n && 0 <= nc && nc < m && map[nr][nc] == 0/* && bMap[nr][nc]==false*/)
			{
				que.push(make_pair(nr, nc));
				if (map[nr][nc] != -1 && map[nr][nc] != 1 && map[nr][nc] > map[cur.first][cur.second] || map[nr][nc] == 0)
				{
					map[nr][nc] = map[cur.first][cur.second] + 1;
					result = max(result, map[nr][nc]);
				}

			}
		}

		//printf("\n");
		//for (int i = 0; i < n; ++i)
		//{
		//	for (int j = 0; j < m; ++j)
		//	{
		//		printf("%d ", map[i][j]);
		//	}
		//	printf("\n");
		//}

	}
}

int main()
{
	scanf("%d %d", &m, &n);

	bool temp = false;

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			int s;
			scanf("%d", &s);
			map[i][j] = s;
			if (s == 1)
			{
				que.push(make_pair(i, j));
			}
		}
	}
	if (que.empty())
	{
		printf("-1");
	}
	else
	{
		cur = que.front();
		bfs(cur.first, cur.second);

		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < m; ++j)
			{
				//result = max(result, map[i][j]);
				if (map[i][j] == 0)
				{
					temp = true;
				}
			}
		}

		if (temp)
		{
			printf("-1");
		}
		else if (result == 0)
		{
			printf("0");
		}
		else
		{
			printf("%d", result - 1);
		}
	}

	//bfs(n-1, m-1);

	//printf("%d", map[n - 1][m - 1]);



}