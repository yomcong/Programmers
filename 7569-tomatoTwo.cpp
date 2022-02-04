#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

int N, M, O;
int map[100][100][100] = { 0 };
bool visited[100][100][100];
int cnt[100][100][100] = { 0 };

int dx[] = { 0, 1, 0, -1, 0, 0 };//12시부터 시계방향
int dy[] = { -1, 0, 1, 0, 0, 0 };
int dz[] = { 0, 0, 0, 0, 1, -1 };

int bfs()
{
    int dayCount = 0;
    queue<int> qx;
    queue<int> qy;
    queue<int> qz;
    for (int k = 0; k < O; ++k)
    {
        for (int i = 0; i < N; ++i)
        {
            for (int j = 0; j < M; ++j)
            {
                if (map[k][i][j] == 1)
                {
                    visited[k][i][j] = true;
                    qx.push(j);
                    qy.push(i);
                    qz.push(k);
                    //cnt[i][j]++;
                }
            }
        }
    }
    int xx = 0;
    int yy = 0;
    int zz = 0;
    while (!qx.empty())
    {
        xx = qx.front();
        yy = qy.front();
        zz = qz.front();
        qx.pop();
        qy.pop();
        qz.pop();

        for (int i = 0; i < 6; i++)
        {
            int nx = xx + dx[i];
            int ny = yy + dy[i];
            int nz = zz + dz[i];

            if (nx >= 0 && nx < M
                && ny >= 0 && ny < N
                && nz >= 0 && nz < O
                && !visited[nz][ny][nx] && map[nz][ny][nx] == 0)
            {
                visited[nz][ny][nx] = true;
                qx.push(nx);
                qy.push(ny);
                qz.push(nz);
                map[nz][ny][nx] = 1;
                cnt[nz][ny][nx] = cnt[zz][yy][xx] + 1;
            }
        }
    }
    return cnt[zz][yy][xx];
}
int main(void) {
    cin >> M >> N >> O;

    //입력
    for (int k = 0; k < O; ++k)
    {
        for (int i = 0; i < N; ++i)
        {
            for (int j = 0; j < M; ++j)
            {
                scanf("%d", &map[k][i][j]);
            }
        }
    }

    //수행
    int result = 0;
    result = bfs();
    for (int k = 0; k < O; ++k)
    {
        for (int i = 0; i < N; ++i)
        {
            for (int j = 0; j < M; ++j)
            {
                if (map[k][i][j] == 0)
                {
                    printf("-1");
                    return 0;
                }
            }
        }
    }

    //출력
    printf("%d", result);

    return 0;
}