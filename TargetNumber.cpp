#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <deque>
#include <math.h>
#include <string>

using namespace std;

int result;

void dfs(vector<int> arr, int target,int sum, int count)
{
	if (arr.size() == count)
	{
		if (sum == target)
		{
			result++;
		}
		return;
	}

	dfs(arr, target, sum + arr[count], count + 1);
	dfs(arr, target, sum - arr[count], count + 1);

}

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	vector<int> vec = { 4,1,2,1 };

	dfs(vec, 4, 0, 0);
	cout << result;
}
