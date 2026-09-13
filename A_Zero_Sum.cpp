#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n;i++)
        {
            cin >> a[i];
        }

        if(n==1)
        {
            cout << "NO" << endl;
        }

        else if(n==2)
        {
           if(a[0]+a[0]==0)
           {
               cout << "YES" << endl;
           }
           else
           {
               cout << "NO" << endl;
           }
        }
        else if(n%2!=0)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
        
    }

    return 0;
}