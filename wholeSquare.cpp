#include <iostream>


using namespace std;

long long foo(int a, int b)
{
	long long c;
	while (b !=0)
	{
		
		c = a % b;
		a = b;
		b = c;
	}

	return a;
}


int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	int w = 8;
	int h = 12;

	long long answer = 1;
	long long widht = w;
	long long hight = h;
	answer = (widht * hight) - ((w + h) - foo(w, h));

	cout << answer;

}






