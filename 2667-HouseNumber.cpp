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

// ���� ���
bool graph[1001][1001];

// ���� ����Ʈ
vector<int> graph2[1001];

// ���� ��Ŀ����� dfs
// node : ���� ����
void dfs(int node)
{
	// 1. ������ �湮�ߴ��� ��� ->Set �ڷᱸ�� �̿�
	// 
	// Set : �� ���ҵ��� �����ϰ� ����ִ� �ڷᱸ��
	//set<int> visitedSet;

	//�ش� ������ �湮 �ߴ����� ���� ����
	static bool isVisited[1001] = { false };

	// 2. ������ �����մϴ�. ���ÿ��� ���� ������ �־��ش�.
	//      ������ ���� �湮�� ��尡 �����

	// ���� �ʱ� ����
	stack<int> st;
	// ���� ������ �־��ش�.
	st.push(node);

	// 3. ������ �� ������ �ݺ��Ѵ�. => ��� ������ �湮�� ������ �ݺ��Ѵ�.
	// ������ �� ������ �ݺ��Ѵ�.
	while (false == st.empty())
	{
		//4. ���ÿ��� ������ �湮�� ������ �����´�.
		int vertex = st.top();
		st.pop();

		// Set
		/*if (visitedSet.end() != visitedSet.find(vertex))
		{
			continue;
		}*/
		// 5. �̹� �湮�� ����� �ǳʶڴ�.
		if (isVisited[vertex])
			continue;

		// 6. �湮�� ������ ǥ���Ѵ�.
		//visitedSet.insert(vertex);

		isVisited[vertex] = true;
		printf("%d ", vertex);

		// ����� ��带 ��� �湮�Ѵ�.
		// 7. ��� ��带 ��ȸ �ϸ鼭
		for (int i = N; i >= 1; --i)
			//   for (int i = 1; i <= N; ++i)
		{
			// �湮���� �ʾҰ�, ����� ��常�� �湮�Ѵ�. 
			// Set
			//if(visitedSet.end() == visitedSet.find(i) && graph[vertex][i] == true)

			if (isVisited[i] == false && graph[vertex][i] == true)
			{
				// 8. �湮�� ��带 ���ÿ� �߰��Ѵ�.
				//dfs(i);
				st.push(i);
			}
		}
	}
}

void dfsR(int node)
{
	// 1. �湮�� ������ ǥ���� Set ����
	static bool isVisited[1001] = { false };

	// 2. �̹� �湮�� ����� �н��Ѵ�.
	if (isVisited[node] == true)
	{
		return;
	}

	// 2. ���� ��带 �湮�Ѵ�.
	isVisited[node] = true;
	printf("%d ", node);

	// 3. ���� ��带 �湮�Ѵ�.
	for (int i = 1; i <= N; ++i)
	{
		if (isVisited[i] == false && graph[node][i] == true)
		{
			dfsR(i);
		}
	}



}


// ���� ����Ʈ������ dfs
// node : ��������
void dfs2(int node)
{
	// 1. �湮�� ������ ǥ���� �ڷᱸ���� �ʿ�
	static bool isVisited2[1001] = { false };

	// 2. ���� ����
	stack<int> st;
	st.push(node);

	sort(graph2[node].begin(), graph2[node].end(), compare);

	// 3. ��� ������ �湮�� ������ �ݺ��Ѵ�.
	while (false == st.empty())
	{
		// ���ÿ��� ���� �湮�� ������ �����´�
		int vertex = st.top();
		st.pop();

		// 5. �̹� �湮�� ����� �ǳʶڴ�.
		if (isVisited2[vertex] == true)
		{
			continue;
		}

		// 6. ������ �湮�Ѵ�.
		isVisited2[vertex] = true;

		printf("%d ", vertex);

		// 7. ����� ���� �� �湮���� ���� ������ ���ÿ� �߰��Ѵ�.
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

// bfs �������
void bfs(int node)
{
	// 1. �湮�� ������ ����ش�.
	static bool isVisited[1001] = { false };

	// 2. ť�� ����
	queue<int> que;
	que.push(node);

	// 3. ��� ������ �湮�� ������ �ݺ�
	while (false == que.empty())
	{
		//4. ������ �湮�� ������ �����´�.
		int vertex = que.front();
		que.pop();

		// 5. �̹� �湮�� ����� �ǳʶڴ�.
		if (isVisited[vertex])
			continue;

		// 6. ���� ������ �湮.
		isVisited[vertex] = true;
		printf("%d ", vertex);

		// 7. ���� �湮�� ������ ť�� ����
		for (int i = 1; i <= N; ++i)
		{
			if (isVisited[i] == false && graph[vertex][i] == true)
			{
				// 8. �湮�� ��带 ���ÿ� �߰��Ѵ�.
				que.push(i);
			}
		}
	}

}

// bfs ��������Ʈ
void bfs2(int node)
{
	// 1. �湮�� ������ ǥ���� �ڷᱸ���� �ʿ�
	static bool isVisited2[1001] = { false };

	// 2. ���� ����
	queue<int> que;
	que.push(node);

	//sort(graph2[node].begin(), graph2[node].end(), compare);
	sort(graph2[node].begin(), graph2[node].end());

	// 3. ��� ������ �湮�� ������ �ݺ��Ѵ�.
	while (false == que.empty())
	{
		// ���ÿ��� ���� �湮�� ������ �����´�
		int vertex = que.front();
		que.pop();

		// 5. �̹� �湮�� ����� �ǳʶڴ�.
		if (isVisited2[vertex] == true)
		{
			continue;
		}

		// 6. ������ �湮�Ѵ�.
		isVisited2[vertex] = true;

		printf("%d ", vertex);

		// 7. ����� ���� �� �湮���� ���� ������ ���ÿ� �߰��Ѵ�.
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

// ��ȯ�� : ������ ���� ����
// �Ű����� : ��ġ
// ������ ã��.
int dfs(int y, int x)
{
	// 1. ���� ��ġ�� �湮
	isVisited[y][x] = true;

	// 2. ���� ��ġ�� �湮
	int result = 1;	//���� �湮�� ���� ����


	// ��
	//if ((y - 1) >= 0 && isVisited[y - 1][x] == false && map[y - 1][x] == '1')
	//	result += dfs(y - 1, x);

	//// �Ʒ�
	//if ((y + 1) < N && isVisited[y + 1][x] == false && map[y + 1][x] == '1')
	//	result += dfs(y + 1, x);

	//// ����
	//if ((x - 1) >= 0 && isVisited[y][x - 1] == false && map[y][x - 1] == '1')
	//	result += dfs(y, x - 1);

	//if ((x + 1) < N && isVisited[y][x + 1] == false && map[y][x + 1] == '1')
	//	result += dfs(y, x + 1);

	int dr[] = { -1, 1, 0 ,0 };
	int dc[] = { 0, 0, -1, 1 };

	for (int i = 0; i < 4; ++i)
	{
		//��Ÿ���� �̿��ؼ� ���ο� ��ġ ����
		int nr = dr[i] + y;
		int nc = dc[i] + x;

		//�ش� ��ġ�� ��ȿ���� �ʴٸ� ��ŵ
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

	// ������ ����
	int count = 0;

	// �� ������ ���� ����
	vector<int> houseCounts;

	// ������ ���� ��ȸ
	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < N; ++j)
		{
			// �湮���� ���� ������ ������
			if (isVisited[i][j] == false && map[i][j] == '1')
			{
				// ���� �湮
				houseCounts.push_back(dfs(i, j));

				// ������ ����.
				++count;
			}
		}
	}
	// ������ ���� ���� ����
	sort(houseCounts.begin(), houseCounts.end());

	printf("%d\n", count);
	for (int hc : houseCounts)
	{
		printf("%d\n", hc);
	}
}


