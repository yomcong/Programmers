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

	vector<int> vec = {};
	vector<int>arr = {};
	int answer = 0;
	for (int i = 0; i < N; ++i)
	{
		int P;
		cin >> P;
		vec.push_back(P);
	}

	sort(vec.begin(), vec.end());

	int time = 0;
	for (int i = 0; i < N; ++i)
	{
		time += vec[i];
		arr.push_back(time);
	}

	for (auto iter : arr)
	{
		answer += iter;
	}

	cout << answer;
	
}






