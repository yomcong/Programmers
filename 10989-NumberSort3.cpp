#include <iostream>
#include <algorithm>

using namespace std;

int arr[10'001];
int tempArr[10'001];
int countArr[10'001];

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	int N = 0;
	cin >> N;
	for (int i = 0; i < N; ++i)
	{
		cin >> arr[i];
		++countArr[arr[i]];
	}
	
	for (int i = 1; i <= N; ++i)
	{
		countArr[i] = countArr[i] + countArr[i - 1];
	}

	for (int i = 0; i < N; ++i)
	{
		countArr[arr[i]]--;
		tempArr[countArr[arr[i]]] = arr[i];
	}


	
	for (int i = 0; i < N; ++i)
	{
		cout << tempArr[i] << "\n";
	}

}