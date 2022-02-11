#include <iostream>
#include <stdio.h>
#include <algorithm>

using namespace std;

int lowIndex(const int* arr, int s, int e, int value)
{
	while (e > s)
	{
		int m = (s + e) / 2;
		if (arr[m] >= value)
			e = m;
		else
			s = m + 1;
	}
	return e;
}

int highIndex(const int* arr, int s, int e, int value)
{
	int max = e;
	while (e > s)
	{
		int m = (s + e) / 2;
		if (arr[m] > value)
			e = m;
		else
			s = m + 1;
	}

	return e;
}


int main()
{
	int N = 0;
	scanf("%d", &N);

	int arr[100'001] = {};

	for (int i = 0; i < N; ++i)
	{
		int x;
		scanf("%d", &x);
		arr[i] = x;
	}

	sort(arr, arr + N);

	int M = 0;

	scanf("%d", &M);
	for (int i = 0; i < M; ++i)
	{
		int s = 0;
		scanf("%d", &s);
		int low = lowIndex(arr, 0, N - 1, s);
		int high = highIndex(arr, 0, N - 1, s);
		if (high == N - 1 && arr[N - 1] == s)
			high++;
		printf("%d ", high - low);
	}
}