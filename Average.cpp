#include <string>
#include <vector>
#include <iostream>

using namespace std;

int main()
{
	double answer = 0;
	vector<int> arr;
	arr.push_back(5);
	arr.push_back(11);
	arr.push_back(165);
	arr.push_back(1);
	arr.push_back(51);
	arr.push_back(61);
	for (int i = 0; i < arr.size(); ++i)
	{
		answer += arr[i];
	}
	answer /= arr.size();

	cout << answer << endl;
}
