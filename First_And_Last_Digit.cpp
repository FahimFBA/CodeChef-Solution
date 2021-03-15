#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, i, value;
    cin >> t;
    for (i=1 ; i<=t ; i++)
    {
        cin >> value;
        int lastDigit = value%10; // Getting the last digit
        int firstDigit;
        while (value > 0) // this while loop will iterate each time the value remains greater than 0
        {
            firstDigit = value%10; 
            value = value/10;  
            // at the end of this loop we will get the first digit
        }
        int result = firstDigit + lastDigit; // getting the result
        cout << result << endl; // output
    }
}