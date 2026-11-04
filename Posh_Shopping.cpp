#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n,mx=0;
        cin >> n;
        int a[n];
        for (int i = 0; i < n;i++)
        {
            cin >> a[i];
            mx = max(a[i], mx);
        }
        for (int i = 0; i < n;i++)
        {
            for (int j = i+1; j < n;j++)
            {
                if(a[i]<=a[j])
                {
                    mx = max(mx, a[i] + a[j]);
                }
            }
        }

            cout << mx << endl;
    }

    return 0;
}