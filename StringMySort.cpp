#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// 프로그래머스 1단계 문자열 내 마음대로 정렬하기
int N = 0;
bool mysort(string a, string b)
{
	if (a.at(N) != b.at(N)) 
	{
		return a.at(N) < b.at(N);   //N인덱스의 문자로 정렬
	}
	else 
	{
		return a < b;   //사전순으로 정렬
	}
	//return a.at(N)==b.at(N) ? a < b : a.at(N) < b.at(N);
}

int main()
{
	//vector<string> strings = { {"abce"}, {"abcd"}, {"cdx"} };
	//int n = 2;
	//vector<string> answer = {};
	//answer.push_back(strings[0]);
	//for (int i = 1; i < strings.size(); ++i)
	//{
	//	for (auto iter = answer.begin(); iter!=answer.end(); ++iter)
	//	{
	//		if (strings[i][n] <= iter[0][n])
	//		{
	//			answer.insert(iter, strings[i]);
	//			break;
	//		}
	//		else if (iter == answer.end() - 1)
	//		{
	//			answer.push_back(strings[i]);
	//			break;
	//		}
	//	}
	//}

	//for (auto temp : answer)
	//{
	//	cout << temp << endl;
	//}
	vector<string> strings = { {"abcd"}, {"abce"}, {"cdx"} };
	int n = 2; 
	N = n;
	vector<string> answer = strings;
	sort(answer.begin(), answer.end(), mysort);

	for (auto temp : answer)
	{
		cout << temp;
	}


}
// sort가 안될줄알고
// 코드를 풀었으나 예외조건처리가(사전순으로 정렬)이 이해가 안되서
// 찾아보니 정렬이 가능해서 사용.