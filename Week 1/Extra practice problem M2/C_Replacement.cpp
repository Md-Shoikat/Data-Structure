#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore();

    string line;
    getline(cin, line);
    stringstream ss(line);

    vector<int> v;
    int x;

    while (ss >> x)
    {
        v.push_back(x);
    }

    for (int num : v)
    {
        if (num == 0)
            cout << "0 ";
        else if (num < 0)
            cout << "2 ";
        else
            cout << "1 ";
    }

    return 0;
}
