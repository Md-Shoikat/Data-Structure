#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l = {1, 2, 3, 3, 5};

    //l.erase(next(l.begin(),1), next(l.begin(), 3));

    // replace(l.begin(), l.end(), 3, 10);

    auto it = find(l.begin(),l.end(),3);
    if (it != l.end())
    {
        cout << "Found: " << *it << endl;
    }
    else
    {
        cout << "Not Found" << endl;
    }
    for(int val : l)
    {
        cout << val << " ";
    }


    return 0;
}