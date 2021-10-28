#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <ctime>

using namespace std;

bool desc(int a, int b)
{
	return a > b;
}


int main()
{
    long long solution(long long n) {
        long long answer = 0;
        string a = " ";
        a += to_string(n);
        sort(a.begin(), a.end(), desc);
        answer = stoll(a);

        return answer;
}
