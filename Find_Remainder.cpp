#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, i, a, b, rem;
    cin >> t;
    for (i = 1 ; i <= t ; i++)
    {
        cin >> a >> b;
        rem = a % b;
        cout << rem << endl;
    }
    return 0;
}