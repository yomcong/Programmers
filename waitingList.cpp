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

    a = 4;
    b = 7;

    //a++;
    //b++;
    int count = 0;

    while (a != b)
    {
        if (a % 2 != 0 && a != 1)
        {
            a++;
        }
        if (b % 2 != 0 && b != 1)
        {
            b++;
        }

        if (a != 1)
        {
            a /= 2;
        }
        if (b != 1)
        {
            b /= 2;
        }

        count++;
    }

    cout << count;

}

