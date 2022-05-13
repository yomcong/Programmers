#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <deque>
#include <math.h>
#include <string>
#include <set>
using namespace std;


int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	vector<int> answer;

	/*vector<string> id_list = { "muzi", "frodo", "apeach", "neo" };
	vector<string> report = { "muzi frodo","apeach frodo","frodo neo","muzi neo","apeach muzi" };
	int k = 2;*/

	vector<string> id_list = { "con", "ryan" };
	vector<string> report = { "ryan con", "ryan con", "ryan con", "ryan con" };
	int k = 2;

	vector<set<int>> vec;
	
	answer.resize(id_list.size());
	vec.resize(id_list.size());


	for (auto iter : report)
	{
		int index = iter.find(' ');
		
		string from = iter.substr(0, index);
		string to = iter.substr(++index);

		int fromId = 0;

		for (int i = 0; i < id_list.size(); ++i)
		{
			if (from == id_list[i])
			{
				fromId = i;
				break;
			}
		}

		for (int i = 0; i < id_list.size(); ++i)
		{
			if (to == id_list[i])
			{
				vec[i].insert(fromId);
				break;
			}
		}
	}

	for (int i = 0; i < vec.size(); ++i)
	{
		if (vec[i].size() >= k)
		{
			for (auto iter : vec[i])
			{
				answer[iter]++;
			}
		}
	}

	for (auto iter : answer)
	{
		cout << iter << "\n";
	}

}






