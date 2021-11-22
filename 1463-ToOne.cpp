#include <iostream>
#include <stdio.h>

using namespace std;


int sol(int a)
{
	if (a <= 1)
	{
		return 0;
	}

	/*if (a % 3 == 0)
	{
		return sol(a/3) + 1;
	}
	
	if( a %3 == 1)
	{
		return sol(a/3) + 2;
	}

	if (a % 3 == 2)
	{
		return sol(a/3) +3;
	}*/
	int s1 = sol(a / 3) + a % 3 + 1;
	int s2 = sol(a / 2) + a % 2 + 1;


	return s1 < s2 ? s1 : s2;
}


int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);


	int a = 0;
	cin >> a;
	cout << sol(a);


}