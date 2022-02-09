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

	
	int T = 0;
	cin >> T;

	for (int i = 0; i < T; ++i)
	{
		stack<char> stk = {};
		string s = "";
		cin >> s;

		for (int i = 0; i < s.size(); i++)
		{
			if (s[i] == '(')
			{
				stk.push('(');
			}
			else
			{
				if (false == stk.empty() && stk.top() == '(')
					stk.pop();
				else
					stk.push(')');
			}
		}
		if (stk.empty())
			cout << "YES" << "\n";
		else
			cout << "NO" << "\n";

	}
	
}