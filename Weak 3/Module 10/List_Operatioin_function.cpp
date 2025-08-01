#include <bits/stdc++.h>
using namespace std;

int main()

{
    // list<int> l = {1, 2, 3, 3, 5};
    // l.remove(3);

    // for(int val : l)
    // {
    //     cout << val << " ";
    // }

    // list<int> l = {1, 2, 3, 3, 5, 8 ,6 , 4, 9, 10};

    // l.sort(greater<int>());

    // for(int val : l)
    // {
    //     cout << val << " ";
    // }

    list<int> l = {1, 2, 3, 3, 5, 8 ,6 , 4, 9, 10};

    //.unique();
    l.reverse();
    for(int val : l)
    {
        cout << val << " ";
    }


    return 0;
}