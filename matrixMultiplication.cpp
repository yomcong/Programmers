#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <deque>
#include <math.h>
#include <string>
#include <list>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	vector<vector<int>> arr1 = { {2,3,2}, {4,2,4} ,{3,1,4} };
	vector<vector<int>> arr2 = { {5,4,3},{2,4,1} ,{3,1,1} };
	vector<vector<int>> answer;
	answer.resize(arr1.size());
	vector<int> sum = {};


	for (int i = 0; i < arr1.size(); ++i)
	{
		
		for (int j = 0; j < arr2[0].size(); ++j)
		{
			int tempSum = 0;
			for (int k = 0; k < arr2.size(); ++k)
			{
				tempSum += arr1[i][k] * arr2[k][j];
			}
			sum.push_back(tempSum);
		}
	}

	for (int i = 0; i < arr1.size(); ++i)
	{
		for (int j = 0; j < arr2[0].size(); ++j)
		{
			answer[i].push_back(sum[(i * arr2[0].size()) + j]);
		}
	}

	for (int i = 0; i < answer.size(); ++i)
	{
		for (int j=0; j<answer[i].size(); ++j)
		{
			cout << answer[i][j] << "\n";
		}
	}
	
}






