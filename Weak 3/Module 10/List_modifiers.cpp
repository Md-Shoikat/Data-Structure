#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l = {1, 2, 3, 4, 5};
    list<int> l2 = {10, 20, 30, 40, 50};
    // vector<int> v = {23,30};

    // list<int> l2;
    // l2.assign(l.begin(), l.end());

    // l.push_back(60);
    // l.push_front(10);

    // l.pop_back();
    // l.pop_front();

    // cout<< *next(l.begin(), 1);

    l.insert(next(l.begin(), 2), l2.begin(), l2.end());

    for (int val : l)
    {
        cout << val << " ";
    }

    return 0;
}