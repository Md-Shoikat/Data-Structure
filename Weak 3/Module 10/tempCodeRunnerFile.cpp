#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l(10, 3);

    for(auto it =l.begin(); it!= l.end(); it++)
    {
        cout << *it << " ";
    }
    cout << l.size();
    return 0;
}