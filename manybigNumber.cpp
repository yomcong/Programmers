#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <deque>
#include <math.h>
#include <string>

using namespace std;

bool foo(string a, string b)
{
	return a + b > b + a;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	vector<int> vec = { 6,10,2};
	vector<string> vecs;

	
	for (int i = 0; i < vec.size(); ++i)
	{
		vecs.push_back(to_string(vec[i]));
	}
	
	sort(vecs.begin(), vecs.end(), foo);
	
	cout << vecs[0];
}
