#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <deque>
#include <math.h>
#include <string>
#include <list>

int N;
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	cin >> N;

	vector<pair<int, int>> time;

	for (int i = 0; i < N; ++i)
	{
		int s, e;
		cin >> s >> e;
		time.push_back(make_pair(e, s));
	}

	sort(time.begin(), time.end());

	int e = time[0].first;
	int answer = 1;
	for (int i = 1; i < N; ++i)
	{
		if (e <= time[i].second)
		{
			answer++;
			e = time[i].first;
		}
	}

	cout << answer;
	
}






