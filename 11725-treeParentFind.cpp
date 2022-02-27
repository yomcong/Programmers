#include <iostream>
#include <vector>
#include <queue>

using namespace std;

vector<int> vec[100'000];
int arr[100'000];

int n;

void bfs(int a)
{
	
	for (int i = 0; i < vec[a].size(); ++i)
	{
		int parent = vec[a][i];
		if (arr[parent] == 0)
		{
			arr[parent] = a;
			bfs(parent);
		}
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	cin >> n;

	for (int i = 0; i < n-1; ++i)
	{
		int a, b = 0;

		cin >> a >> b;
		vec[a].push_back(b);
		vec[b].push_back(a);
	}
	arr[1] = 1;
	bfs(1);

	for (int i = 0; i < n-1; ++i)
	{
		cout << arr[i + 2] << "\n";
	}

}