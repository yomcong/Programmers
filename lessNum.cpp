#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <deque>
#include <math.h>
#include <string>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);


	vector<int> numbers = { 5,8,4,0,6,7,9 };
	vector<int> answer;

	int sum = 45;

	for (auto iter : numbers)
	{
		sum -= iter;
	}

	answer.push_back(sum);
	cout << answer[0];

}






