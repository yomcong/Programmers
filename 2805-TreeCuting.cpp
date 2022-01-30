#include <iostream>
#include <stdio.h>
#include <algorithm>

using namespace std;

int main()
{
	int N = 0;
	long long M = 0;

	scanf("%d", &N);
	scanf("%d", &M);

	long long* tree = new long long[N];
	long long result = 0;
	long long temp = 0;
	
	long long s = 1;
	long long e = 0;
	long long m = 0;
	for (int i = 0; i < N; ++i)
	{
		long long x = 0;
		scanf("%d", &x);
		tree[i] = x;
		e = max(e, tree[i]);
	}

	while (s <= e)
	{
		m = (s + e) / 2;
		result = 0;
		for (int i = 0; i < N; ++i)
		{
			if (tree[i] <= m)
				continue;

			result += tree[i] - m;

			if (result > M)
				break;
		}

		if (result >= M)
		{
			s = m + 1;
			temp = m;
		}
		else if (result < M)
			e = m - 1;
	}

	printf("%d", temp);



}
