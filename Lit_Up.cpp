#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n, k;
        cin >> n >> k;

        int c[n];

        for (int i = 0; i < n;i++)
        {
            cin >> c[i];
        }

        int ans = INT_MAX;

        for (int i = 0; i < n;i++)
        {
            for (int j = i + 1; j < n;j++)
            {
                bool possible = true;

                for (int x = 0; x < n;x++)
                {
                    if(abs(i-x) > k && abs(j-x)>k)
                    {
                        possible = false;
                        break;
                    }
                }
                if(possible)
                {
                    ans = min(ans, c[i] + c[j]);
                }
            }
        }

        if(ans ==INT_MAX)
        {
            cout << -1 << endl;
        }

        else
        {
            cout << ans << endl;
        }
    }

    return 0;
}