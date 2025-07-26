#include <bits/stdc++.h>
using namespace std;

int main()
{
    // vector<int> v;
    // cout<< v.capacity() << endl;
    // v.push_back(1);
    // cout<< v.capacity() << endl;
    // v.push_back(2);
    // cout<< v.capacity() << endl;
    // v.push_back(3);
    // cout<< v.capacity() << endl;
    // v.push_back(4);
    // cout<< v.capacity() << endl;
    // v.push_back(5);
    // cout<< v.capacity() << endl;

    vector<int> v;
    v.push_back(1);
    v.push_back(2); 
    v.push_back(3);
    v.push_back(4);

    v.resize(10,202);
    for(int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }





    // cout << "Size: " << v.size() << endl;
    // v.clear();
    // cout << "Size after clear: " << v.size() << endl;
    // cout << v[1] << endl;


    return 0;
}