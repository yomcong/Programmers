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

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	int n = 0;
	cin >> n;

	int foo[100001] = {};
	foo[0] = 0;
	foo[1] = 1;

	for (int i = 2; i <= n; ++i)
	{
		foo[i] = (foo[i - 2] + foo[i - 1]) % 1234567;
	}

	int answer = 0;
	
	answer = foo[n];





}






