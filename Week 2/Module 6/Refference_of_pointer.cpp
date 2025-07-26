#include <bits/stdc++.h>
using namespace std;
void fun(int* &p)
//void fun(int* p)
{
    int y = 200;
    p = &y;
    cout << "In Fun : " << &p << endl;
}

int main()
{
    int x = 10;
    int *p = &x;
    fun(p);
    cout << "IN Main : " << &p << endl;

    return 0;
}