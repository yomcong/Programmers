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

// ���� ���
bool graph[1001][1001];

// ���� ����Ʈ
vector<int> graph2[1001];

// ���� ����Ʈ������ dfs
// node : ��������
void dfs2(int node)
{
    // 1. �湮�� ������ ǥ���� �ڷᱸ���� �ʿ�
    static bool isVisited2[1001] = { false };

    // 2. ���� ����
    stack<int> st;
    st.push(node);



    // 3. ��� ������ �湮�� ������ �ݺ��Ѵ�.
    while (false == st.empty())
    {
        // ���ÿ��� ���� �湮�� ������ �����´�
        int vertex = st.top();
        st.pop();

        sort(graph2[vertex].begin(), graph2[vertex].end(), compare);

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

// bfs ��������Ʈ
void bfs2(int node)
{
    // 1. �湮�� ������ ǥ���� �ڷᱸ���� �ʿ�
    static bool isVisited2[1001] = { false };

    // 2. ���� ����
    queue<int> que;
    que.push(node);

    //sort(graph2[node].begin(), graph2[node].end(), compare);

    // 3. ��� ������ �湮�� ������ �ݺ��Ѵ�.
    while (false == que.empty())
    {
        // ���ÿ��� ���� �湮�� ������ �����´�
        int vertex = que.front();
        que.pop();

        sort(graph2[vertex].begin(), graph2[vertex].end());
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


