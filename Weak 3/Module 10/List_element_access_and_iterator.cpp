#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l = {1, 2, 3, 3, 5};
    

    cout << l.back() << endl;

    cout << l.front() << endl;
    cout<<*l.begin() << endl;

    cout << *next(l.begin(), 2) << endl;

    return 0;
}