#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

int N;

vector<char> vec[27];

void preorder(int a)
{
	if (a >= N)
		return;
	cout << vec[a][0];
	if (vec[a][1] != '.')
		preorder(vec[a][1] - 65);
	if (vec[a][2] != '.')
		preorder(vec[a][2] - 65);
}

void inorder(int a)
{
	if (a > N)
		return;
	if (vec[a][1] != '.')
		inorder(vec[a][1] - 65);
	cout << vec[a][0];
	if (vec[a][2] != '.')
		inorder(vec[a][2] - 65);
}

void postorder(int a)
{
	if (a > N)
		return;
	if (vec[a][1] != '.')
		postorder(vec[a][1] - 65);
	if (vec[a][2] != '.')
		postorder(vec[a][2] - 65);
	cout << vec[a][0];
}

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	cin >> N;

	for (int i = 0; i < N; ++i)
	{
		char a, b, c = {};
		cin >> a >> b >> c;

		vec[a - 65].push_back(a);
		vec[a - 65].push_back(b);
		vec[a - 65].push_back(c);

	}

	preorder(0);
	cout << "\n";
	inorder(0);
	cout << "\n";
	postorder(0);


}