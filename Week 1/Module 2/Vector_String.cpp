#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore(); // To ignore the newline character after reading n
    vector<string> v(n); // Declare an empty vector of strings
    for (int i = 0; i < n; i++)
    {
        getline(cin,v[i]); // Input each string into the vector
    }
    for (string s : v)
    {
        cout << s << " "<< endl; // Output each string from the vector
    }

    return 0;
}