#include <iostream>
#include <list>
#include <stack>
#include <string>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	stack<int> stk = {};
	int temp = 0;
	int K = 0;
	cin >> K;
	for (int i = 0; i < K; ++i)
	{
		int j = 0;
		cin >> j;

		if (j == 0)
		{
			stk.pop();
		}
		else
		{
			stk.push(j);
		}
	}
	while (!stk.empty())
	{
		temp += stk.top();
		stk.pop();
	}
	cout << temp;
	
}