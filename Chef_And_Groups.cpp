#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, i, count = 0;
    cin >> t;
    string array;
    while (t--)
    {
        cin >> array;
        count = 0;
        for (i = 0; i < array.length(); i++)
        {
            if (array[i] == '0' && array[i + 1] == '1')
            {
                count++;
            }
        }
        if (array[0] == '1')
        {
            count++;
        }
        cout << count << endl;
    }
}