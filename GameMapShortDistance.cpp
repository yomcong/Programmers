#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <deque>
#include <math.h>
#include <string>

using namespace std;

struct Pos
{
	int x;
	int y;
	Pos(int _y, int _x)
	{
		x = _x;
		y = _y;
	}
};

int n, m;

bool barr[5][5];
queue<Pos> que;
int arr[5][5];

int tempY[4] = { -1, 1, 0, 0 };
int tempX[4] = { 0, 0 ,- 1, 1 };

void bfs(vector<vector<int>> vec, int count)
{
	que.push(Pos(0, 0));
	barr[0][0] = true;
	arr[0][0] = count;

	while (que.empty() == false)
	{
		Pos pos = que.front();
		que.pop();

		int currY = pos.y;
		int currX = pos.x;

		for (int i = 0; i < 4; ++i)
		{
			int nextY = currY + tempY[i];
			int nextX = currX + tempX[i];

			if (nextY < 0 || nextX < 0 || nextY >n-1 || nextX>m-1)
			{
				continue;
			}
			if (barr[nextY][nextX] || vec[nextY][nextX] == 0)
			{
				continue;
			}

			que.push(Pos(nextY, nextX));
			barr[nextY][nextX] = true;
			arr[nextY][nextX] = arr[currY][currX] +1;
		}
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	n = 5, m = 5;
	vector<vector<int>> vec = { {1,0,1,1,1},{1,0,1,0,1},{1,0,1,1,1} ,{1,1,1,0,0},{0,0,0,0,1} };

	bfs(vec, 1);

	if (arr[n-1][m-1] == 0)
	{
		cout << -1;
	}
	else
	{
		cout << arr[n-1][m-1];
	}


}
