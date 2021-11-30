#include <iostream>
#include <stdio.h>

using namespace std;

void hanoi(int count, int s, int m, int t)
{
	if (count == 1)
	{
		cout << s << " " << t << "\n";

		return;
	}
	hanoi(count - 1, s, t, m);
	hanoi(1, s, m, t);
	hanoi(count - 1, m, s, t);
}

int K;
void CountHanoi(int count, int s, int m, int t)
{
	if (count == 1)
	{
		//cout << s << " " << t << endl;
		K++;
		return;
	}
	CountHanoi(count - 1, s, t, m);
	CountHanoi(1, s, m, t);
	CountHanoi(count - 1, m, s, t);
}

//int CountHanoi2(int count, int s, int m, int t)
//{
//	int k = 0;
//	if (count == 1)
//	{
//		return 1;
//	}
//	k += CountHanoi2(count - 1, s, t, m);
//	k += CountHanoi2(1, s, m, t);
//	k += CountHanoi2(count - 1, m, s, t);
//	
//	return k;
//}


int main()
{
	int a = 0;
	cin >> a;

	cout << (1 << a) - 1 << "\n";

	CountHanoi(a, 1, 2, 3);
	cout << K << endl;
	hanoi(a, 1, 2, 3);
	//cout << CountHanoi2(a, 1, 2, 3);
	


}