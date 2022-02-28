#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>

#define INF 987654321

using namespace std;

int graph[7][7] = {
	{   0,   7, INF, INF,   3,  10, INF },
	{   7,   0,   4,  10,   2,   6, INF },
	{ INF,   4,   0,   2, INF, INF, INF },
	{ INF,  10,   2,   0,  11,   9,   4 },
	{   3,   2, INF,  11,   0, INF,   5 },
	{  10,   6, INF,   9, INF,   0, INF },
	{ INF, INF, INF,   4,   5, INF,   0 }
};

int map[101][101];

//vector<pair<int, int>> vec[100];

int n;
int m;
int a, b, c;

vector<vector<int>> GetShortestPath()
{
	// distance ���� ��� �����
	// distance[i][j]�� i �������� j ���������� �ִ� ��δ�.
	vector<vector<int>> dist;
	for (int i = 0; i < n; ++i)
		dist.emplace_back(map[i], map[i] + n);

	// ��� ������ �ִ� ��θ� ���� ������ �ݺ��Ѵ�.
	for (int via = 0; via < n; ++via) // ���� ����
	{
		for (int from = 0; from < n; ++from) // ���� ����
		{

			for (int to = 0; to < n; ++to) // ���� ����
			{
				dist[from][to] = min(dist[from][to], dist[from][via] + dist[via][to]);
			}
		}
	}

	return dist;
}

int main()
{
	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			map[i][j] = i == j ? 0 : INF;
		}
	}
	for (int i = 0; i < m; ++i)
	{
		scanf("%d %d %d", &a, &b, &c);
		//vec[a - 1].push_back(make_pair(b - 1, c));
		map[a - 1][b - 1] = min(map[a - 1][b - 1], c);
	}


	//auto dist = GetShortestPath();

	for (int via = 0; via < n; ++via) // ���� ����
	{
		for (int from = 0; from < n; ++from) // ���� ����
		{
			for (int to = 0; to < n; ++to) // ���� ����
			{
				map[from][to] = min(map[from][to], map[from][via] + map[via][to]);
			}
		}
	}

	for (int i = 0; i < n; ++i) 
	{
		for (int j = 0; j < n; ++j)
		{
			if (map[i][j] == 987654321)
				printf("0 ");
			else
				printf("%d ", map[i][j]);

		}
		printf("\n");
	}
}

