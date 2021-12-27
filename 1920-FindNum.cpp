//#include <iostream>
//#include <vector>
//#include <numeric>
//
//using namespace std;
//
//size_t s;
//vector<int> e;
//
//int Search(const vector<int> &vec, int s, int e,  int value)
//{
//	int m = (s + e) / 2;
//	if (vec[m] == value)
//	{
//		return m;
//	}
//	else if (vec[m] < value)
//	{
//		s = m + 1;
//	}
//	else
//	{
//		e = m;
//	}
//	return Search(vec, s, e, value);
//}
//int main()
//{
//	vector<int> vec(1'000'000);
//	iota(vec.begin(), vec.end(), 1);
//
//	cout << Search(vec, 0, vec.size(), 57123);
//}
