#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N, H, x, i, v;

    cin >> N >> H >> x ;
    for (i=0 ; i<N ; i++)
    {
        cin >> v ;
        
        if (v>=(H-x))
       
        {
        cout << "YES" << endl;
        return 0;
        }
        
        else
        continue ;
        

    }

    cout << "NO" << endl;
    



}