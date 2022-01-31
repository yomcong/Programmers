#include <iostream>
#include <list>
#include <stack>
#include <string>
#include <vector>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	while (true)
	{
		string s = "";
		getline(cin, s);

		bool temp = true;

		stack<char> stk = {};
		if (s == ".")
			break;
		for (int i = 0; i < s.length(); ++i)
		{
			if (s[i] == '(' || s[i] == '[')
			{
				stk.push(s[i]);
			}
			else if (s[i] == ')' || s[i] == ']')
			{
				if (false == stk.empty())
				{
					if (s[i] == ')')
					{
						if (stk.top() == '(')
						{
							stk.pop();
						}
						else
						{
							cout << "no" << "\n";
							temp = false;
							break;
						}
					}
					else if (s[i] == ']')
					{
						if (stk.top() == '[')
						{
							stk.pop();
						}
						else
						{
							cout << "no" << "\n";
							temp = false;
							break;
						}
					}
				}
				else
				{
					cout << "no" << "\n";
					temp = false;
					break;
				}
			}
		}
		if (temp)
		{
			if (stk.empty())
			{
				cout << "yes" << "\n";
			}
			else
			{
				cout << "no" << "\n";
			}
		}
	}
	
	/*vector<string> vec = { {"So when I die (the [first] I will see in (heaven) is a score list)."}
	,{"[ first in ] ( first out )."}
	,{"Half Moon tonight (At least it is better than no Moon at all]."}
	,{"A rope may form )( a trail in a maze."}
	,{"Help(I[m being held prisoner in a fortune cookie factory)]."}
	,{"([ (([( [ ] ) ( ) (( ))] )) ])."}
	,{" ."}
	,{"."} };
	

	for (int i = 0; i < vec.size(); ++i)
	{

		for (int j = 0; j < vec[i].size(); ++j)
		{
			if (vec[i][j] == '(')
			{
				stk.push(vec[i][j]);
			}
			else if (vec[i][j] == '[')
			{
				stk2.push(vec[i][j]);
			}
			else if (vec[i][j] == ')')
			{
				if (false == stk.empty())
				{
					stk.pop();
				}
				else
				{
					cout << "no" << "\n";
					break;
				}
			}
			else if (vec[i][j] == ']')
			{
				if (false == stk2.empty())
				{
					stk2.pop();
				}
				else
				{
					cout << "no" << "\n";
					break;
				}
			}
		}
		if (stk.empty() && stk2.empty())
		{
			cout << "yes" << "\n";
		}
		else
		{
			cout << "no" << "\n";
		}
	}*/


}