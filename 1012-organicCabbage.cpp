#include <stdio.h>
#include <vector>
#include <stack>
#include <queue>
#include <algorithm>
#include <string.h>

using namespace std;

int T;
int Y;
int X;
int K;

int map[51][51];

bool isVisited[51][51];

void dfs(int y, int x)
{
	// 1. 현재 위치에 방문
	isVisited[y][x] = true;

	// 2. 다음 위치를 방문

	int dr[] = { -1, 1, 0 ,0 };
	int dc[] = { 0, 0, -1, 1 };

	for (int i = 0; i < 4; ++i)
	{
		//델타값을 이용해서 새로운 위치 구함
		int nr = dr[i] + y;
		int nc = dc[i] + x;

		//해당 위치가 유효하지 않다면 스킵
		if (nr < 0 || nr >= Y || nc < 0 || nc >= X)
			continue;

		if (isVisited[nr][nc])
			continue;

		if (map[nr][nc] != 1)
			continue;

		dfs(nr, nc);
	}

	//return result;

}

int main()
{
	scanf("%d", &T);



	for (int i = 0; i < T; ++i)
	{
		scanf("%d %d %d", &X, &Y, &K);
		for (int i = 0; i < K; ++i)
		{
			int s, e;
			scanf("%d %d", &s, &e);

			map[e][s] = 1;
		}

		int count = 0;
		for (int i = 0; i < Y; ++i)
		{

			for (int j = 0; j < X; ++j)
			{
				// 방문하지 않은 단지가 있을때

				if (isVisited[i][j] == false && map[i][j] == 1)
				{
					dfs(i, j);
					++count;
				}
			}
		}

		printf("%d\n", count);

		memset(map, 0, sizeof map);
		memset(isVisited, 0, sizeof isVisited);



		/*for (int i = 0; i < Y; ++i)
		{
			for (int j = 0; j < X; ++j)
			{
				map[i][j] = 0;
				isVisited[i][j] = false;
			}
		}*/



	}


}


