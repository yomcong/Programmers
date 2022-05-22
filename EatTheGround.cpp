#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <deque>
#include <math.h>
#include <string>
#include <list>

int answer = 1;

using namespace std;
//
//
//void foo(vector<vector<int>> land, int sum, int count, int row)
//{
//	if (count == land.size())
//	{
//		answer = max(answer, sum);
//		return;
//	}
//
//	for (int i = 0; i < land[0].size(); ++i)
//	{
//		if (row == i)
//		{
//			continue;
//		}
//
//		if (temp[count][i] > land[count][i] + sum)
//		{
//			continue;
//		}
//		else
//		{
//			temp[count][i] = max(temp[count][i], land[count][i] + sum);
//			foo(land, sum + land[count][i], count + 1, i);
//		}
//
//	}
//}

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	//vector<vector<int>> land = { {4, 3, 2, 1},{2, 2, 2, 1},{6, 6, 6, 4}, {8, 7, 6, 5} };
	vector<vector<int>> land = { {5,3,2,1},{5,6,7,10},{4,3,2,1} };

	for (int i = 1; i < land.size(); ++i)
	{
		land[i][0] += max(land[i - 1][1], max(land[i - 1][2], land[i - 1][3]));
		land[i][1] += max(land[i - 1][0], max(land[i - 1][2], land[i - 1][3]));
		land[i][2] += max(land[i - 1][0], max(land[i - 1][1], land[i - 1][3]));
		land[i][3] += max(land[i - 1][0], max(land[i - 1][1], land[i - 1][2]));
	}

	for (int i = 0; i < land[0].size(); ++i)
	{
		answer = max(answer, land[land.size() - 1][i]);
	}

}






