#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, i, a, b;
    cin >> t;
    for (i = 1; i <= t; i++)
    {
        cin >> a >> b;
        if ((abs(a + b)) % 2 != 0)
        {
            cout << "no" << endl;
        }
        else
        {
            cout << "yes" << endl;
        }
    }
}