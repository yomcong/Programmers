#include <string>
#include <vector>
#include <iostream>

using namespace std;
int main()
{
    int n = 2;
    int m = 5;
    vector<int> answer;
    int tamp_1, tamp_2;
    int tamp;
    if (n > m)
        tamp = n;
    else
        tamp = m;
    
    for (int i = tamp; i > 0; i--)
    {
        if (n % i == 0 && m % i == 0)
        {
            tamp_1 = i;
            break;
        }
    }
    // 유클리드 호제법? 최소공배수 = n*m / 최대공약수
    tamp_2 = n * m / tamp_1;

    answer.push_back(tamp_1);
    answer.push_back(tamp_2);

    for (auto vec : answer)
    {
        cout << vec << endl;
    }


}
