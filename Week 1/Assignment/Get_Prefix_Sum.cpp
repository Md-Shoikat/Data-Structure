#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<long long> v(n + 1);
    vector<long long> Pre(n + 1);

    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];

    }
    for(int i = 1; i <= n; i++)
    {
        Pre[i] = Pre[i - 1] + v[i];
    }

    for (int i = n; i >= 1; i--)
    {
        cout << Pre[i] << " ";
    }

    return 0;
}
