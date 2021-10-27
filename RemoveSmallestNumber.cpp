#include <string>
#include <vector>
#include <iostream>

using namespace std;

int main()
{
	int n = 121;
	int i = 1;

	while (true)
	{
		if (i * i == n)
			break;
		else
		{
			i *= i;
		}
	}
	i++;
	i *= i;

	cout << i << endl;
	

}