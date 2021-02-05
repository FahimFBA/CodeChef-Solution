
// The program isn't ready yet

#include<bits/stdc++.h>
#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    int t, i , k, n, value[50], p;
    cin >> t;
    for (i = 0; i < t; i++)
    {
        cin >> n;
        for (k = 0; k < n; k++)
        {
            cin >> value[k];
            p = (abs(value[0]-value[1]) + abs(value[1]-value[2]) + abs(value[2]-value[0]));
            
        }
        cout << p << endl;
    }

    return 0;
}