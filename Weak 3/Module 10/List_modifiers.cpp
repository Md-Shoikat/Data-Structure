#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l = {1, 2, 3, 4, 5};
    list<int> l2;
    l2.assign(l.begin(), l.end());
    for(int val : l2)
    {
        cout<< val << " ";
    }

    return 0;
}