#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <deque>
#include <math.h>
#include <string>

using namespace std;


int foo(int num)
{
	switch (num)
	{
	case 6:
		return 1;
	case 5:
		return 2;
	case 4:
		return 3;
	case 3:
		return 4;
	case 2:
		return 5;
	default:
		return 6;
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	vector<int> lottos = { 45, 4, 35, 20, 3, 9 };
	vector<int> win_nums = { 20, 9, 3, 45, 4, 35 };
	vector<int> answer;

	int joker = 0;
	int win = 0;


	for (int i = 0; i < lottos.size(); ++i)
	{
		if (lottos[i] == 0)
		{
			joker++;
			continue;
		}

		for (auto iter : win_nums)
		{
			if (iter == lottos[i])
			{
				win++;
			}
		}
	}

	answer.push_back(foo(joker + win));
	answer.push_back(foo(win));

	for (auto iter : answer)
	{
		cout << iter << "\n";
	}


}






