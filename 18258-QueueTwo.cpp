#include <queue>
#include <iostream>

using namespace std;

int main()
{
	// 큐 라이브러리 사용 ver
	ios_base::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	int N = 0;
	queue<int> que = {};
	cin >> N;

	for (int i = 0; i < N; ++i)
	{
		char s[10];
		cin >> s;
		switch (s[0])
		{
		case 'p':
			if (s[1] == 'u')
			{
				int x = 0;
				cin >> x;
				que.push(x);
			}
			else
			{
				if (que.empty())
				{
					cout << -1 << "\n";
				}
				else
				{
					cout << que.front() << "\n";
					que.pop();
				}
			}
			break;
		case 's':
			cout << que.size() << "\n";
			break;
		case 'e':
			if (que.empty())
				cout << 1 << "\n";
			else
				cout << 0 << "\n";
			break;
		case 'f':
			if (que.empty())
				cout << "-1\n";
			else
				cout << que.front() << "\n";
			break;
		case 'b':
			if (que.empty())
				cout << "-1\n";
			else
				cout << que.back() << "\n";
			break;
		}

	}

	// stl 사용 안한 ver
	int N = 0;
	int index = -1;
	int pop = 0;
	int queue[2000001] = {};
	cin >> N;

	for (int i = 0; i < N; ++i)
	{
		char s[15];
		cin >> s;
		switch (s[0])
		{
		case 'p':
			if (s[1] == 'u')
			{
				int x = 0;
				cin >> x;
				queue[(++index)] = x;
			}
			else
			{
				if (pop > index)
				{
					cout << -1 << "\n";
				}
				else
				{
					cout << queue[pop] << "\n";
					++pop;
				}
			}
			break;
		case 's':
			cout << (index + 1) - pop << "\n";
			break;
		case 'e':
			if (index - pop < 0)
				cout << 1 << "\n";
			else
				cout << 0 << "\n";
			break;
		case 'f':
			if (pop > index)
				cout << "-1\n";
			else
				cout << queue[pop] << "\n";
			break;
		case 'b':
			if (index < 0 || index < pop)
				cout << -1 << "\n";
			else
				cout << queue[index] << "\n";
			break;
		}

	}
}



