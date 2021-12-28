#include <iostream>
#include <list>

using namespace std;

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cout.tie(nullptr);
    std::cin.tie(nullptr);

    int commendCount;
    string firstWord;
    cin >> firstWord;
    cin >> commendCount;

    list<char> input(firstWord.begin(), firstWord.end());
    list<char>::iterator iter = input.end();

    for (int i = 0; i < commendCount; ++i)
    {
        char inputCommend;
        cin >> inputCommend;

        switch (inputCommend)
        {
        case 'L':
            if (iter != input.begin())
            {
                --iter;
            }
            break;
        case 'D':
            if (iter != input.end())
            {
                ++iter;
            }
            break;
        case 'B':
            if (iter != input.begin())
            {
                iter = input.erase(--iter);
            }
            break;
        case 'P':
            char inputChar;
            cin >> inputChar;
            input.insert(iter, inputChar);
            break;
        default:
            break;
        }
    }
    for (auto it = input.begin(); it != input.end(); it++)
    {
        cout << *it;
    }
    return 0;
}