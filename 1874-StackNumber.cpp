#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int arr[100'000];

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	int N = 0;
	cin >> N;

	int count= 0 ;

	vector<int> temp;
	vector<char> result;

	for (int i = 0; i < N; ++i)
	{
		cin >> arr[i];
	}


	for (int i = 1; i <= N; ++i)
	{
		temp.push_back(i);
		result.push_back('+');

		while (temp.empty() ==false && temp.back() == arr[count])
		{
			temp.pop_back();
			result.push_back('-');
			count++;
		}
	}

	if (temp.empty())
	{
		for (auto iter : result)
		{
			cout << iter << "\n";
		}
	}
	else
	{
		cout << "NO";
	}

}