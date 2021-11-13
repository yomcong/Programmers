#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    int count[3] = { 0 };
    int maxconut;

    vector<int> arr1 = {};
    vector<int> arr2 = {};
    vector<int> arr3 = {};

    arr1 = { 1, 2, 3, 4, 5 };
    arr2 = { 2, 1, 2, 3, 2, 4, 2, 5 };
    arr3 = { 3, 3, 1, 1, 2, 2, 4, 4, 5, 5 };

    for (int i = 0; i < answers.size(); ++i)
    {
        if (arr1[i % 5] == answers[i])
        {
            count[0]++;
        }
        if (arr2[i % 8] == answers[i])
        {
            count[1]++;
        }
        if (arr3[i % 10] == answers[i])
        {
            count[2]++;
        }
    }

    maxconut = max(max(count[0], count[1]), count[2]);


    for (int i = 0; i < 3; i++) {
        if (count[i] == maxconut)
            answer.push_back(i + 1);
    }

    return answer;
}