#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <deque>
#include <math.h>
#include <string>

using namespace std;


int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);
	
	int a, b;

	a = 5;
	b = 24;

	string month[] = { "THU", "FRI", "SAT", "SUN", "MON", "TUE", "WED", };

	int mon[] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	int day = b;

	if (a != 1)
	{
		for (int i = 0; i < a - 1; ++i)
		{
			day += mon[i];
		}
	}

	cout << month[day % 7];


}


