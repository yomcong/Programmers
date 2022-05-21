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

	vector<int> A = {1,2};
	vector<int> B = {3,4};
	int answer = 0;

	sort(A.begin(), A.end());
	sort(B.begin(), B.end());

	for (int i = 0; i < A.size(); ++i)
	{
		answer += A[i] * B[A.size() - 1 - i];
	}

	cout << answer;

}






