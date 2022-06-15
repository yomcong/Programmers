#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;

bool arr[101][101]; 

int width[4] = { 0,0,1,-1 };
int hight[4] = { 1,-1,0,0 };

int area_number;
int area_maxSize;

void foo(vector<vector<int>> picture, int m, int n, int x, int y, int area)
{
	queue<pair<int, int>> que;
	que.push(make_pair(x, y));
	arr[x][y] = true;
	int count = 0;

	while (que.empty() == false)
	{
		int currM = que.front().first;
		int currN = que.front().second;
		que.pop();
		count++;

		for (int i = 0; i < 4; ++i)
		{
			int nextM = currM + width[i];
			int nextN = currN + hight[i];

			if (nextM < 0 || nextM >= m ||
				nextN < 0 || nextN >= n)
			{
				continue;
			}

			if (picture[nextM][nextN] == area && arr[nextM][nextN] == false)
			{
				arr[nextM][nextN] = true;
				que.push(make_pair(nextM, nextN));
			}
		}
	}

	area_maxSize = max(area_maxSize, count);
}


int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	/*int m = 8;
	int n = 6;
	vector<vector<int>> picture = {
		{1,1,1,3,0,0},
		{1,1,2,1,3,0},
		{1,2,2,3,0,0},
		{2,2,2,2,0,0},
		{2,2,2,2,0,0},
		{1,2,2,3,0,0},
		{1,1,2,1,3,0} ,
		{1,1,1,3,0,0} };*/

	int m = 8;
	int n = 4;
	vector<vector<int>> picture = {
		{4,3,2,4},
		{4,3,2,4},
		{4,3,2,4},
		{4,2,3,2},
		{4,3,2,3},
		{4,2,3,4},
		{4,2,3,4} ,
		{4,2,3,4} };

	/*int m = 6;
	int n = 4;
	vector<vector<int>> picture = {
		{1,1,1,0},
		{1,2,2,0},
		{1,0,0,1},
		{0,0,0,1},
		{0,0,0,3},
		{0,0,0,3} };*/


	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			if (arr[i][j] == false && picture[i][j] != 0)
			{
				area_number++;
				foo(picture, m, n, i, j, picture[i][j]);
			}
		}
	}

	
	cout << area_number << " " << area_maxSize;

}






