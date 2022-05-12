#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <deque>
#include <math.h>
#include <string>

using namespace std;

bool arr[200];

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	vector<int> numbers = { 5,0,2,7 };

	vector<int> answer = {};

	for (int i = 0; i < numbers.size() - 1; ++i)
	{
		for (int j = i + 1; j < numbers.size(); ++j)
		{
			if (arr[numbers[i] + numbers[j]] == false)
			{
				arr[numbers[i] + numbers[j]] = true;
				answer.push_back(numbers[i] + numbers[j]);
			}
		}
	}

	sort(answer.begin(), answer.end());

	for (auto iter : answer)
	{
		cout << iter << "\n";
	}

	
	
    

}


