#include <stdio.h>
#include <vector>
#include <stack>
#include <set>
#include <queue>
#include <algorithm>

using namespace std;

bool compare(int i, int j)
{
	return j < i;
}

int N;
int M;
int V;

// 인접 행렬
bool graph[1001][1001];

// 인접 리스트
vector<int> graph2[1001];

// 인접 행렬에서의 dfs
// node : 시작 정점
void dfs(int node)
{
	// 1. 정점을 방문했는지 기록 ->Set 자료구조 이용
	// 
	// Set : 각 원소들이 유일하게 들어있는 자료구조
	//set<int> visitedSet;

	//해당 정점을 방문 했는지에 대한 여부
	static bool isVisited[1001] = { false };

	// 2. 스택을 구성합니다. 스택에는 시작 정점을 넣어준다.
	//      스택은 다음 방문할 노드가 저장됨

	// 스택 초기 구성
	stack<int> st;
	// 시작 정점을 넣어준다.
	st.push(node);

	// 3. 스택이 빌 때까지 반복한다. => 모든 정점을 방문할 때까지 반복한다.
	// 스택이 빌 때까지 반복한다.
	while (false == st.empty())
	{
		//4. 스택에서 다음에 방문할 정점을 가져온다.
		int vertex = st.top();
		st.pop();

		// Set
		/*if (visitedSet.end() != visitedSet.find(vertex))
		{
			continue;
		}*/
		// 5. 이미 방문한 노드라면 건너뛴다.
		if (isVisited[vertex])
			continue;

		// 6. 방문한 정점을 표기한다.
		//visitedSet.insert(vertex);

		isVisited[vertex] = true;
		printf("%d ", vertex);

		// 연결된 노드를 모두 방문한다.
		// 7. 모든 노드를 순회 하면서
		for (int i = N; i >= 1; --i)
			//   for (int i = 1; i <= N; ++i)
		{
			// 방문하지 않았고, 연결된 노드만을 방문한다. 
			// Set
			//if(visitedSet.end() == visitedSet.find(i) && graph[vertex][i] == true)

			if (isVisited[i] == false && graph[vertex][i] == true)
			{
				// 8. 방문할 노드를 스택에 추가한다.
				//dfs(i);
				st.push(i);
			}
		}
	}
}

void dfsR(int node)
{
	// 1. 방문한 정점을 표기할 Set 정의
	static bool isVisited[1001] = { false };

	// 2. 이미 방문한 노드라면 패스한다.
	if (isVisited[node] == true)
	{
		return;
	}

	// 2. 현재 노드를 방문한다.
	isVisited[node] = true;
	printf("%d ", node);

	// 3. 다음 노드를 방문한다.
	for (int i = 1; i <= N; ++i)
	{
		if (isVisited[i] == false && graph[node][i] == true)
		{
			dfsR(i);
		}
	}



}


// 인접 리스트에서의 dfs
// node : 시작정점
void dfs2(int node)
{
	// 1. 방문할 정점을 표기할 자료구조가 필요
	static bool isVisited2[1001] = { false };

	// 2. 스택 구성
	stack<int> st;
	st.push(node);

	sort(graph2[node].begin(), graph2[node].end(), compare);

	// 3. 모든 정점을 방문할 때까지 반복한다.
	while (false == st.empty())
	{
		// 스택에서 다음 방문할 정점을 가져온다
		int vertex = st.top();
		st.pop();

		// 5. 이미 방문한 노드라면 건너뛴다.
		if (isVisited2[vertex] == true)
		{
			continue;
		}

		// 6. 정점을 방문한다.
		isVisited2[vertex] = true;

		printf("%d ", vertex);

		// 7. 연결된 정점 중 방문하지 않은 정점을 스택에 추가한다.
		for (int e : graph2[vertex])
		{
			if (isVisited2[e] == false)
			{
				st.push(e);
			}
		}
	}
}

void dfs2R(int node)
{
	static bool isVisited2[1001] = { false };

	isVisited2[node] = true;
	printf("%d ", node);

	sort(graph2[node].begin(), graph2[node].end());

	for (int e : graph2[node])
	{
		if (isVisited2[e] == false)
		{
			dfs2R(e);
		}
	}

}

// bfs 인접행렬
void bfs(int node)
{
	// 1. 방문한 정점을 담아준다.
	static bool isVisited[1001] = { false };

	// 2. 큐를 구성
	queue<int> que;
	que.push(node);

	// 3. 모든 정점을 방문할 때까지 반복
	while (false == que.empty())
	{
		//4. 다음에 방문할 정점을 가져온다.
		int vertex = que.front();
		que.pop();

		// 5. 이미 방문한 노드라면 건너뛴다.
		if (isVisited[vertex])
			continue;

		// 6. 현재 정점에 방문.
		isVisited[vertex] = true;
		printf("%d ", vertex);

		// 7. 다음 방문할 정점을 큐에 삽입
		for (int i = 1; i <= N; ++i)
		{
			if (isVisited[i] == false && graph[vertex][i] == true)
			{
				// 8. 방문할 노드를 스택에 추가한다.
				que.push(i);
			}
		}
	}

}

// bfs 인접리스트
void bfs2(int node)
{
	// 1. 방문할 정점을 표기할 자료구조가 필요
	static bool isVisited2[1001] = { false };

	// 2. 스택 구성
	queue<int> que;
	que.push(node);

	//sort(graph2[node].begin(), graph2[node].end(), compare);
	sort(graph2[node].begin(), graph2[node].end());

	// 3. 모든 정점을 방문할 때까지 반복한다.
	while (false == que.empty())
	{
		// 스택에서 다음 방문할 정점을 가져온다
		int vertex = que.front();
		que.pop();

		// 5. 이미 방문한 노드라면 건너뛴다.
		if (isVisited2[vertex] == true)
		{
			continue;
		}

		// 6. 정점을 방문한다.
		isVisited2[vertex] = true;

		printf("%d ", vertex);

		// 7. 연결된 정점 중 방문하지 않은 정점을 스택에 추가한다.
		for (int e : graph2[vertex])
		{
			if (isVisited2[e] == false)
			{
				que.push(e);
			}
		}
	}
}

char map[25][25];
bool isVisited[25][25];

// 반환값 : 단지내 집의 개수
// 매개변수 : 위치
// 단지를 찾기.
int dfs(int y, int x)
{
	// 1. 현재 위치에 방문
	isVisited[y][x] = true;

	// 2. 다음 위치를 방문
	int result = 1;	//현재 방문한 집의 개수


	// 위
	//if ((y - 1) >= 0 && isVisited[y - 1][x] == false && map[y - 1][x] == '1')
	//	result += dfs(y - 1, x);

	//// 아래
	//if ((y + 1) < N && isVisited[y + 1][x] == false && map[y + 1][x] == '1')
	//	result += dfs(y + 1, x);

	//// 왼쪽
	//if ((x - 1) >= 0 && isVisited[y][x - 1] == false && map[y][x - 1] == '1')
	//	result += dfs(y, x - 1);

	//if ((x + 1) < N && isVisited[y][x + 1] == false && map[y][x + 1] == '1')
	//	result += dfs(y, x + 1);

	int dr[] = { -1, 1, 0 ,0 };
	int dc[] = { 0, 0, -1, 1 };

	for (int i = 0; i < 4; ++i)
	{
		//델타값을 이용해서 새로운 위치 구함
		int nr = dr[i] + y;
		int nc = dc[i] + x;

		//해당 위치가 유효하지 않다면 스킵
		if (nr < 0 || nr >= N || nc < 0 || nc >= N)
			continue;

		if (isVisited[nr][nc])
			continue;

		if (map[nr][nc] != '1')
			continue;

		result += dfs(nr, nc);
	}

	return result;

}

int main()
{
	//scanf_s("%d %d %d", &N, &M, &V);

	scanf("%d", &N);

	for (int i = 0; i < N; ++i)
		scanf("%s", map[i]);

	/*for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < N; ++j)
		{
			scanf("%1d", &map[i][j]);
		}
	}*/

	// 단지의 개수
	int count = 0;

	// 각 단지별 집의 개수
	vector<int> houseCounts;

	// 지도를 전부 순회
	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < N; ++j)
		{
			// 방문하지 않은 단지가 있을때
			if (isVisited[i][j] == false && map[i][j] == '1')
			{
				// 단지 방문
				houseCounts.push_back(dfs(i, j));

				// 개수를 센다.
				++count;
			}
		}
	}
	// 단지별 집의 개수 정렬
	sort(houseCounts.begin(), houseCounts.end());

	printf("%d\n", count);
	for (int hc : houseCounts)
	{
		printf("%d\n", hc);
	}
}


