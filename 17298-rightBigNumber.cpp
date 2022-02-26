#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>

using namespace std;

int arr[100'000];

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	int N = 0;
	cin >> N;

	int count= 0 ;
	
	for (int i = 0; i < N; ++i)
	{
		cin >> arr[i];
	}

	stack<int> temp;
	stack<int> resultt;
	
	for (int i = N-1; i >= 0; --i)
	{
		while (temp.empty() == false && temp.top() <= arr[i])
		{
			temp.pop();
		}


		if (temp.empty())
		{
			resultt.push(-1);
		}
		else
		{
			resultt.push(temp.top());
		}

		temp.push(arr[i]);
	}


	while (resultt.empty() == false)
	{
		cout << resultt.top() << " ";
		resultt.pop();
	}
}