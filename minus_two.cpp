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

        int odd =0;
        int even2 = 0;
        int even4 = 0;

        for (int i = 0; i < n;i++)
        {
            cin >> a[i];
            
        }

        for (int i = 0; i < n;i++)
        {
            if(a[i]%2==1)
            {
                odd++;
            }
            else if(a[i]%4==0)
            {
                even4++;
            }
            else 
            {
                even2++;
            }
        }

        int mx = max({odd, even2, even4});

        cout << mx << endl;
    }

    return 0;
}