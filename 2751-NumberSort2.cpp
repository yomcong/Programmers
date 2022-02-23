#include <iostream>

using namespace std;

int arr[1'001];
int temp[1'001];

void Merge(int arr[], int left, int right)
{
	int L, R, K, a;
	int mid = (left + right) / 2;
	L = left;
	R = mid + 1;
	K = left;

	while (L <= mid && R <= right)
	{
		if (arr[L] <= arr[R])
		{
			temp[K] = arr[L];
			K++;
			L++;
		}
		else
		{
			temp[K] = arr[R];
			K++;
			R++;
		}
	}

	if (L > mid)
	{
		for (a = R; a <= right; ++a)
		{
			temp[K] = arr[a];
			++K;
		}
	}
	else
	{
		for (a = L; a <= mid; ++a)
		{
			temp[K] = arr[a];
			++K;
		}
	}

	for (a = left; a <= right; a++)
	{
		arr[a] = temp[a];
	}

}

void MergeSort(int arr[], int left, int right)
{
	if (left == right)
	{
		return;
	}
	int mid;

	mid = (left + right) / 2;
	MergeSort(arr, left, mid);
	MergeSort(arr, mid + 1, right);
	Merge(arr, left, right);

}


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
	}

	MergeSort(arr, 0, N - 1);
	
	for (int i = 0; i < N; ++i)
	{
		cout << arr[i] << "\n";
	}



}