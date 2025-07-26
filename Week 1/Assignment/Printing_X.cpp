#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int mid = n / 2;

    for (int i = 0; i < n; i++)
    {
        vector<char> line(n, ' ');  

        if (i < mid)
        {
            line[i] = '\\';
            line[n - 1 - i] = '/';
        }
        else if (i == mid)
        {
            line[i] = 'X';
        }
        else
        {
            line[n - 1 - i] = '/';
            line[i] = '\\';
        }
        for (int j = 0; j < n; j++)
        {
            cout << line[j];
        }
        cout << endl;
    }

    return 0;
}
