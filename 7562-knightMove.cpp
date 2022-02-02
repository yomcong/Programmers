#include <stdio.h>
#include <vector>
#include <stack>
#include <set>
#include <queue>
#include <algorithm>
#include <string.h>

using namespace std;

int n;
int k;
int t;
int y;
int x;

int sx;
int sy;

int map[300][300];
//vector<pair<int, int>> vec[300];

queue<pair<pair<int, int>, int>> que;
pair<pair<int, int>, int> cur;


void a()
{


	while (que.empty() == false)
	{
		cur = make_pair(que.front().first, que.front().second), 0;
		que.pop();


		if (cur.first.first == y && cur.first.second == x)
			break;

		if (cur.first.first - 1 >= 0 && cur.first.second - 2 >= 0 && map[cur.first.first - 1][cur.first.second - 2] == 0)
		{
			map[cur.first.first - 1][cur.first.second - 2] = cur.second + 1;
			que.push(make_pair(make_pair(cur.first.first - 1, cur.first.second - 2), cur.second + 1));
		}
		if (cur.first.first - 2 >= 0 && cur.first.second - 1 >= 0 && map[cur.first.first - 2][cur.first.second - 1] == 0)
		{
			map[cur.first.first - 2][cur.first.second - 1] = cur.second + 1;
			que.push(make_pair(make_pair(cur.first.first - 2, cur.first.second - 1), cur.second + 1));
		}
		if (cur.first.first - 2 >= 0 && cur.first.second + 1 < n && map[cur.first.first - 2][cur.first.second + 1] == 0)
		{
			map[cur.first.first - 2][cur.first.second + 1] = cur.second + 1;
			que.push(make_pair(make_pair(cur.first.first - 2, cur.first.second + 1), cur.second + 1));
		}
		if (cur.first.first - 1 >= 0 && cur.first.second + 2 < n && map[cur.first.first - 1][cur.first.second + 1] == 0)
		{
			map[cur.first.first - 1][cur.first.second + 2] = cur.second + 1;
			que.push(make_pair(make_pair(cur.first.first - 1, cur.first.second + 2), cur.second + 1));
		}
		if (cur.first.first + 1 < n && cur.first.second - 2 >= 0 && map[cur.first.first + 1][cur.first.second - 2] == 0)
		{
			map[cur.first.first + 1][cur.first.second - 2] = cur.second + 1;
			que.push(make_pair(make_pair(cur.first.first + 1, cur.first.second - 2), cur.second + 1));
		}
		if (cur.first.first + 2 < n && cur.first.second - 1 >= 0 && map[cur.first.first + 2][cur.first.second - 1] == 0)
		{
			map[cur.first.first + 2][cur.first.second - 1] = cur.second + 1;
			que.push(make_pair(make_pair(cur.first.first + 2, cur.first.second - 1), cur.second + 1));
		}
		if (cur.first.first + 2 < n && cur.first.second + 1 < n && map[cur.first.first + 2][cur.first.second + 1] == 0)
		{
			map[cur.first.first + 2][cur.first.second + 1] = cur.second + 1;
			que.push(make_pair(make_pair(cur.first.first + 2, cur.first.second + 1), cur.second + 1));
		}
		if (cur.first.first + 1 < n && cur.first.second + 2 < n && map[cur.first.first + 1][cur.first.second + 2] == 0)
		{
			map[cur.first.first + 1][cur.first.second + 2] = cur.second + 1;
			que.push(make_pair(make_pair(cur.first.first + 1, cur.first.second + 2), cur.second + 1));
		}
	}

}



int main()
{
	scanf("%d", &t);
	while (t)
	{
		scanf("%d", &n);
		scanf("%d %d", &sy, &sx);

		que.push(make_pair(make_pair(sy, sx), 0));
		scanf("%d %d", &y, &x);
		a();


		printf("%d\n", map[y][x]);

		memset(map, 0, sizeof map);
		while (!que.empty())
		{
			que.pop();
		}
		--t;
	}




}