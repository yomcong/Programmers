#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <deque>
#include <math.h>
#include <string>

using namespace std;

int solution(vector<int> absolutes, vector<bool> signs)
{
    int answer = 0;

    for (int i = 0; i < absolutes.size(); ++i)
    {
        if (signs[i])
        {
            answer += absolutes[i];
        }
        else
        {
            answer -= absolutes[i];
        }
    }

    return answer;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

    

}


