#include <iostream>
#include <stdio.h>
#include <algorithm>

using namespace std;

int main()
{
	int N = 0;
	int C = 0;
	long long result = 0;

	scanf("%d", &N);
	scanf("%d", &C);

	long long* Zip = new long long[N];
	for (int i = 0; i < N; ++i)
	{
		long long x = 0;
		scanf("%d", &x);
		Zip[i] = x;
	}
	
	sort(Zip, Zip + N);
	

	long long s = 1;
	long long e = Zip[N-1];
	long long m = 0;

	while (s<=e)
	{
		long long count = 1;
		long long prev = Zip[0];
		m = (s + e) / 2;
		for (int i = 1; i < N; ++i)
		{
			if (Zip[i] - prev >= m)
			{
				++count;
				prev = Zip[i];
			}
		}

		if (count >= C)
		{
			result = max(result,m);
			s = m + 1;
		}
		else
			e = m - 1;
	}

	printf("%d", result);

}
