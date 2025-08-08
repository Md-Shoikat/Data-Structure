#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> list;
    int val;

    while (cin >> val && val != -1)
    {
        list.push_back(val);
    }

    list.sort();
    list.unique();

    for (int v : list)
    {
        cout << v << " ";
    }
    cout << endl;

    return 0;
}
