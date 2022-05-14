#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <deque>
#include <math.h>
#include <string>

using namespace std;

void foo(string &id)
{
	if (id.empty() == false)
	{
		if (id[0] == '.')
		{
			id.erase(id.begin());
		}
	}

	if (id.empty() == false)
	{
		if (id[id.size() - 1] == '.')
		{
			id.erase(id.end() - 1);
		}
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	string answer;

	string new_id = "abcdefghijklmn.p";

	for (int i = 0; i < new_id.size(); ++i)
	{
		new_id[i] = tolower(new_id[i]);
	}

	for (int i = 0; i < new_id.size();)
	{
		if ((new_id[i] >= 'A' && new_id[i] <= 'Z') ||
			(new_id[i] >= 'a' && new_id[i] <= 'z') ||
			(new_id[i] >= '0' && new_id[i] <= '9') ||
			new_id[i] == '-' || new_id[i] == '_' || new_id[i] == '.')
		{
			++i;
		}
		else
		{
			new_id.erase(new_id.begin() + i);
		}
	}

	for (int i = 0; i < new_id.size();)
	{
		if ( i!=new_id.size()-1 &&  new_id[i] == '.' && new_id[i + 1] == '.' )
		{
			new_id.erase(new_id.begin() + i);
		}
		else
		{
			++i;
		}
	}

	foo(new_id);
	
	if (new_id.empty())
	{
		new_id = "a";
	}

	if (new_id.size() > 15)
	{
		new_id.erase(15);

		foo(new_id);
	}
	else
	{
		if (new_id.size() < 3)
		{
			while (true)
			{
				new_id += new_id[new_id.size() - 1];

				if (new_id.size() >= 3)
				{
					break;
				}
			}
		}
	}

	cout << new_id;


}






