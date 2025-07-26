#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    // vector<int> v(n); // Initialize vector with size n
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> v[i]; // Input elements into the vector
    // }

    vector<int> v; // Declare an empty vector
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x; // Input each element
        v.push_back(x); // Add the element to the vector
    }
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " "; // Output elements of the vector
    }


    return 0;
}