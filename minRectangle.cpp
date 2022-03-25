#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <deque>

using namespace std;

int arr[10'000];

//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cout.tie(nullptr);
//	cin.tie(nullptr);
//
//
//}

int solution(vector<vector<int>> sizes) {
    int answer = 0;

    int width = 0;
    int height = 0;

    for (int i = 0; i < sizes.size(); ++i)
    {
        if (sizes[i][0] > sizes[i][1])
        {
            if (width < sizes[i][0])
            {
                width = sizes[i][0];
            }

            if (height < sizes[i][1])
            {
                height = sizes[i][1];
            }
        }
        else
        {
            if (width < sizes[i][1])
            {
                width = sizes[i][1];
            }

            if (height < sizes[i][0])
            {
                height = sizes[i][0];
            }
        }
    }
    return width * height;
}
