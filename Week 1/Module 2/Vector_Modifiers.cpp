#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 6}; 
    vector<int> v2 = {10, 20, 30, 40, 50};

    //v.pop_back(); // Removes the last element from the vector

    //v.insert(v.begin() + 2, v2.begin(), v2.end()); // Inserts elements of v2 at index 2 of v

    v.erase(v.begin() + 1,v.begin()+5); // Erases elements from index 2 to index 4 (exclusive)

    // vector<int> v2;
    // v2 = v;
    // for(int i = 0; i < v2.size(); i++)
    // {
    //     cout << v2[i] << " ";
    // }

    for(int x : v)
    {
        cout << x << " ";
    }


    return 0;
}