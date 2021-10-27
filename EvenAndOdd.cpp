#include <string>
#include <vector>
#include <iostream>

using namespace std;

int main()
{
    
    string solution(int num)
    {
        string answer = "";
        if (num % 2 == 0)
            answer = "Even";
        else
            answer = "Odd";

        return answer;
    }



}
