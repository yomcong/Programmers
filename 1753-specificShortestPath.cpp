//#include <stdio.h>
//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <queue>
//
//#define INF 987654321
//
//using namespace std;
//
//
//int V;
//int e;
//int k;
//
//vector<pair<int, int>> vec[20'001];
//int map[20'000][20'000];
//
//std::vector<int> GetShortestPath2(int start)
//{
//	vector<int> dist(V, INF);
//	dist[start] = 0;
//
//	priority_queue<pair<int, int>> pq;
//	pq.emplace(0, start);
//
//	while (false == pq.empty())
//	{
//		// dist 중에서 가장 최소값을 가지는 정점을 뽑아낸다.
//		int w = -pq.top().first; //내림차순을 하기때문에 큐에 넣기전 음수를 붙여준다
//		int v = pq.top().second;
//		pq.pop();
//
//		// 해당 정점을 이용했을 때, 최단 거리를 찾을 수 있는지 체크한다.
//
//		for (int node = 0; node < vec[v].size(); ++node)
//		{
//			int Next = vec[v][node].first;
//			int nextCost = vec[v][node].second;
//
//
//			if (dist[Next] > dist[v] + nextCost  /*map[v][node]*/)
//			{
//				dist[Next] = dist[v] + nextCost /*map[v][node]*/;
//
//				pq.emplace(-dist[Next], Next);
//			}
//
//		}
//
//	}
//
//	return dist;
//}
//
//int main()
//{
//	scanf("%d %d %d", &V, &e, &k);
//
//	for (int i = 0; i < e; ++i)
//	{
//		int u, v, w = 0;
//		scanf("%d %d %d", &u, &v, &w);
//		vec[u - 1].push_back(make_pair(v - 1, w));
//	}
//
//	auto vec3 = GetShortestPath2(k - 1);
//	for (int i : vec3)
//	{
//		if (i == 987654321)
//		{
//			printf("INF\n");
//		}
//		else
//		{
//			printf("%d\n", i);
//		}
//	}
//}
