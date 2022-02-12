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
	int N = 0;
	cin >> N;

	for (int i = 0; i <= N; ++i)
	{
		string s = "";
		getline(cin, s);

		switch (s[0])
		{
		case 'p':
			if (s.size() == 3)
			{
				if (stk.empty())
				{
					cout << -1 << "\n";
				}
				else
				{
					cout << stk.top() << "\n";
					stk.pop();
				}
			}
			else
			{
				s.erase(0, 5);
				stk.push(stoi(s));
			}
			break;
		case 's':
			cout << stk.size() << "\n";
			break;
		case 'e':
			cout << stk.empty() << "\n";
			break;
		case 't':
			if (stk.empty())
			{
				cout << -1 << "\n";
			}
			else
			{
				cout << stk.top() << "\n";
			}
			break;
		}
	}
}