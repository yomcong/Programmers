#include <iostream>
#include <stdio.h>
#include <algorithm>

using namespace std;

int main()
{
	long long K = 0;
	long long N = 0;
	long long result = 0;
	long long result2 = 0;
	long long longLan = 0;
	scanf("%d", &K);
	scanf("%d", &N);

	long long* lan = new long long[K];

	for (int i = 0; i < K; ++i)
	{
		long long x = 0;
		scanf("%d", &x);
		lan[i] = x;
		longLan = max(longLan, lan[i]);
	}

	long long s = 1;
	long long e = longLan;
	while (s <= e)
	{
		long long m = (s + e) / 2;
		result = 0;
		for (int i = 0; i < K; ++i)
		{
			result += (lan[i] / m);
		}

		if (N > result)
		{
			e = m-1;
		}
		else
		{
			result2 = max(result2, m);
			s = m + 1;
		}
	}
	printf("%d", result2);

}
