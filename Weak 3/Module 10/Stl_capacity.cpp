#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> v = {1, 2, 3, 4, 5};

    list<int> l2(v.begin(), v.end());

    //l2.clear();
    cout<< l2.size() << endl;

    l2.resize(7,20);

    if (l2.empty())
    {
        cout << "List is empty" << endl;
    }
    else
    {
        cout << "List is not empty" << endl;
    }
    for (int val : l2)
    {
        cout << val << " ";
    }


    return 0;
}