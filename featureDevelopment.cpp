#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <deque>

using namespace std;

int arr[10'000];

//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cout.tie(nullptr);
//	cin.tie(nullptr);
//
//	vector<int> progresses;
//	vector<int> speeds;
//	vector<int> result;
//
//	progresses.push_back(95);
//	progresses.push_back(90);
//	progresses.push_back(99);
//	progresses.push_back(99);
//	progresses.push_back(80);
//	progresses.push_back(99);
//
//	speeds.push_back(1);
//	speeds.push_back(1);
//	speeds.push_back(1);
//	speeds.push_back(1);
//	speeds.push_back(1);
//	speeds.push_back(1);
//
//	int index = 0;
//	int count = 0;
//	while (true)
//	{
//		for (int i = index; i < progresses.size(); ++i)
//		{
//			progresses[i] += speeds[i];
//
//		}
//
//		while (progresses[index] >= 100)
//		{
//			count++;
//			index++;
//			if (index >= progresses.size())
//				break;
//		}
//
//		if (count > 0)
//		{
//			result.push_back(count);
//			count = 0;
//		}
//
//		if (index >= progresses.size())
//			break;
//	}
//
//	for (int i = 0; i < result.size(); ++i)
//	{
//		cout << result[i] << "\n";
//	}
//
//}

vector<int> solution(vector<int> progresses, vector<int> speeds) {
	vector<int> answer;

	int index = 0;
	int count = 0;

	while (true)
	{
		for (int i = index; i < progresses.size(); ++i)
		{
			progresses[i] += speeds[i];

		}

		while (progresses[index] >= 100)
		{
			count++;
			index++;
			if (index >= progresses.size())
				break;
		}

		if (count > 0)
		{
			answer.push_back(count);
			count = 0;
		}

		if (index >= progresses.size())
			break;
	}

	return answer;
}