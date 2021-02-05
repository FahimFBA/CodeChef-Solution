#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, value, max = 1;
    cin >> n;
    for (i = 1 ; i < 11; i++)
    {
        if (n % i == 0)
        value = i;
    }

    if (value > max)

    max = value;
    cout << max << endl;

    return 0;
}