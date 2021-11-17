#include <iostream>
#include <string>
#include <list>

using namespace std;

int main()
{
    string N = "dmih";
    int M = 0;

    //cin >> N;
    cin >> M;

    list<char> lst(N.begin(), N.end());
    auto iter = lst.end();
    for (int i = 0; i < M; ++i)
    {
        char a;
        cin >> a;
        switch (a)
        {
        case 'L':
            if (iter == lst.begin()) break;
            --iter;
            break;
        case 'D':
            if (iter == lst.end()) break;
            ++iter;
            break;
        case 'B':
            if (iter == lst.begin()) break;
            iter = lst.erase(--iter);
            break;
        case 'P':
            char b;
            cin >> b;
            lst.insert(iter, b);
            break;

        }
    }
    for (auto elem : lst)
    {
        cout << elem;
    }

}
