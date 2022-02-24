#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <deque>


using namespace std;

//int arr[50];
//int arr2[51];
int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);


	int T = 0;
	cin >> T;


	while (T > 0)
	{
		string s;
		cin >> s;

		int index = 0;
		int n;
		cin >> n;

		char cArr[100] = {};
		deque<int> arr;
		/*for (int i = 0; i < n; ++i)
		{
			cin >> cArr[i];
		}*/
		cin >> cArr;

		bool reverse = false;
		bool result = false;

		int temp=0;
		while (true)
		{
			if (cArr[temp] == '[' || cArr[temp] ==  ',')
			{
				temp++;
			}
			else if (cArr[temp] == ']')
			{
				break;
			}
			else
			{
				if (cArr[temp + 1] == ',' || cArr[temp+1] == ']')
				{
					arr.push_back(cArr[temp] - '0');
					temp++;
				}
				else if(cArr[temp+2] == ','|| cArr[temp+2] == ']')
				{
					int c, b;
					c = (cArr[temp] - '0') * 10;
					b = (cArr[temp + 1] - '0');
					arr.push_back(c + b);
					temp += 2;
				}
				else
				{
					int c, b, d;
					c = (cArr[temp] - '0') * 100;
					b = (cArr[temp + 1] - '0') * 10;
					d = cArr[temp + 2] - '0';
					arr.push_back(c + b+d);
					temp += 3;

				}
			}

		}
		while (index < s.length())
		{
			if (s[index] == 'R')
			{
				reverse = !reverse;
			}
			else if (s[index] == 'D')
			{
				if (arr.empty())
				{
					cout << "error" << "\n";
					result = true;
					break;
				}
				else if (reverse)
				{
					arr.pop_back();
				}
				else
				{
					arr.pop_front();
				}
			}

			index++;
		}


		if (arr.empty()==false)
		{
			cout << "[";
			while (arr.empty() == false)
			{
				if (reverse)
				{
					cout << arr.back();
					arr.pop_back();
				}
				else
				{
					cout << arr.front();
					arr.pop_front();
				}

				if (arr.empty() == false)
				{
					cout << ",";
				}
			}
			cout << "]" << "\n";
		}
		else if (result == false)
		{
			cout << "[]";
		}

		--T;
	}

}