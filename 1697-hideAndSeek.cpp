#include <stdio.h>
#include <vector>
#include <stack>
#include <set>
#include <queue>
#include <algorithm>

using namespace std;

int n;
int k;

int map[100'001];
queue<pair<int, int>> que;
pair<int, int> cur;

void a()
{
	while (que.empty() == false)
	{
		cur = que.front();
		que.pop();
		map[cur.second] = cur.first;

		if (cur.second == k)
			break;

		if (cur.second - 1 >= 0)
		{
			if (map[cur.second - 1] == 0)
				que.push(make_pair(cur.first + 1, cur.second - 1));
		}
		if (cur.second + 1 <= 100'000)
		{
			if (map[cur.second + 1] == 0)
				que.push(make_pair(cur.first + 1, cur.second + 1));
		}
		if (cur.second * 2 <= 100'000 && cur.second != 0)
		{
			if (map[cur.second * 2] == 0)
				que.push(make_pair(cur.first + 1, cur.second * 2));

		}
	}

}



int main()
{
	scanf("%d %d", &n, &k);

	que.push(make_pair(0, n));
	a();

	printf("%d", map[k]);


}