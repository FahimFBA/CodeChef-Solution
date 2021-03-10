#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,v,i;
    int array[1000000] ; // declaring an array
    cin >> t; // taking the value of the test case from the user
    for (i=0; i<t; i++) // will take input in the array
    {
        cin >> array[i];
    }

    sort (array, array+t); // sorting the array
//     Prototype of sort

//     sort(startaddress, endaddress)

// startaddress: the address of the first 
//               element of the array
// endaddress: the address of the next 
//             contiguous location of the 
//             last element of the array.
// So actually sort() sorts in the 
// range of [startaddress,endaddress)

    for (i=0; i<t; i++) // printing the array after done the sorting
    {
        cout << array[i] << endl;
    }
    return 0;

}