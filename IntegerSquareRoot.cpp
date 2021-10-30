#include <string>
#include <vector>
#include <iostream>

using namespace std;

int main()
{
	int n = 3;
	int i = 1;

	while (true)
	{
		if (i * i == n)
			break;
		else if (i > n)
		{
			i = -1;
			break;
		}
		else
		{
			i++;
		}
	}
	if (i <= 0)
	{
		cout << i << endl;
	}
	else
	{
		i++;
		i *= i;
		cout << i << endl;
	}



}
