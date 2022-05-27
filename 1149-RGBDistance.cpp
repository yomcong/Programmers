#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <deque>
#include <math.h>
#include <string>
#include <list>

using namespace std;

long long house[1'000][3];

int R[1'000];
int G[1'000];
int B[1'000];

void foo(int n)
{
	
}


int main()
{
	int N;
	cin >> N;

	for (int i = 0; i < N; ++i)
	{
		cin >> R[i] >> G[i] >> B[i];
	}

	house[0][0] = R[0];
	house[0][1] = G[0];
	house[0][2] = B[0];


	for (int i = 1; i < N; ++i)
	{
		house[i][0] = min(house[i - 1][1], house[i - 1][2]) + R[i];
		house[i][1] = min(house[i - 1][0], house[i - 1][2]) + G[i];
		house[i][2] = min(house[i - 1][0], house[i - 1][1]) + B[i];
	}

	cout << min(house[N - 1][0], min(house[N - 1][1], house[N - 1][2]));

	


}






