#include<bits/stdc++.h>
using namespace std;
int main()
{
    int count = 0, n, k, i;
    int v;
    cin >> n >> k;
    for (i = 0; i < n; i++)
    {
        cin >> v;

        if (v%k == 0)
        count++;
        else
        continue;

    }

    cout << count << endl;
    return 0;
}