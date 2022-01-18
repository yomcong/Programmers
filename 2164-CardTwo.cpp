#include <iostream>
#include <queue>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	int N = 0;
	cin >> N;

	int temp = 0;
	queue<int > que = {};

	for (int i = 0; i < N; ++i)
	{
		que.push(i + 1);
	}

	while (que.size() != 1)
	{
		que.pop();
		temp = que.front();
		que.pop();
		que.push(temp);

	}

	cout << que.front();

    // stl 안쓴 ver
    /*int N = 0;
    bool hol = false;
    int count = 0;
    int queue[1000] = {};

    scanf("%d", &N);
    for (int i = 0; i < N; ++i)
    {
        queue[i] = i + 1;
    }
    while (N != 1)
    {
        count = 0;
        for (int i = 0; i < N; ++i)
        {
            false == hol ? hol = true : hol = false;
            if (hol)
                continue;
            else
            {
                queue[count++] = queue[i];
            }
        }
        N = count;
    }

    printf("%d\n", queue[0]);*/
}
