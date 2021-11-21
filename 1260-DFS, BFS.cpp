#include <stdio.h>
#include <vector>
#include <stack>
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

// 인접 리스트에서의 dfs
// node : 시작정점
void dfs2(int node)
{
    // 1. 방문할 정점을 표기할 자료구조가 필요
    static bool isVisited2[1001] = { false };

    // 2. 스택 구성
    stack<int> st;
    st.push(node);



    // 3. 모든 정점을 방문할 때까지 반복한다.
    while (false == st.empty())
    {
        // 스택에서 다음 방문할 정점을 가져온다
        int vertex = st.top();
        st.pop();

        sort(graph2[vertex].begin(), graph2[vertex].end(), compare);

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

// bfs 인접리스트
void bfs2(int node)
{
    // 1. 방문할 정점을 표기할 자료구조가 필요
    static bool isVisited2[1001] = { false };

    // 2. 스택 구성
    queue<int> que;
    que.push(node);

    //sort(graph2[node].begin(), graph2[node].end(), compare);

    // 3. 모든 정점을 방문할 때까지 반복한다.
    while (false == que.empty())
    {
        // 스택에서 다음 방문할 정점을 가져온다
        int vertex = que.front();
        que.pop();

        sort(graph2[vertex].begin(), graph2[vertex].end());
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



int main()
{
    scanf("%d %d %d", &N, &M, &V);
    for (int i = 0; i < M; ++i)
    {
        int s, e;
        scanf("%d %d", &s, &e);

        graph2[s].push_back(e);
        graph2[e].push_back(s);
    }


    dfs2(V);
    printf("\n");
    bfs2(V);

}


