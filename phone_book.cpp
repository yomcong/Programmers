#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <deque>
#include <math.h>
#include <string>

using namespace std;

bool temparr[20][20];

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	vector<string> phone_book = { {"119"}, {"97674223"}, {"1195524421"} };

	sort(phone_book.begin(), phone_book.end());

	for (int i = 0; i < phone_book.size() - 1; i++)
	{
		if (phone_book[i] == phone_book[i + 1].substr(0, phone_book[i].size()))
		{
			return false;
		}
	}
	/*int curr = 0;
	int next = 1;
	int max = phone_book.size();
	bool result = true;
	int index = 0;

	while (true)
	{
		if (phone_book[curr][index] == phone_book[next][index])
		{
			if (index == phone_book[curr].size() - 1 || index == phone_book[next].size() - 1)
			{
				result = false;
				break;
			}
			else
			{
				index++;
			}
		}
		else
		{
			index = 0;

			if (next == max - 1)
			{
				curr++;
				if (curr == max - 1)
				{
					break;
				}
				next = curr + 1;
			}
			else
			{
				next++;
			}
		}

		cout << curr << " " << next << "\n";
	}

	if (result)
	{
		cout << "true";
	}
	else
	{
		cout << "false";
	}*/

	/*for (int i = 1; i < phone_book.size(); ++i)
	{
		for (int j = 0; j < i ; ++j)
		{
			for (int k = 0; k < phone_book[i].size();)
			{
				if (phone_book[i][k] == phone_book[j][k])
				{
					if (k == phone_book[j].size() - 1)
					{
						temp = true;
						break;
					}
					else if (k == phone_book[i].size() - 1)
					{
						temp = true;
						break;
					}
					else
					{
						k++;
					}
				}
				else
				{
					break;
				}
			}

			if (temp)
			{
				temp2 = true;
				break;
			}
		}

		if (temp2)
		{
			break;
		}
	}*/

}
