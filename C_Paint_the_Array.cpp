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

        vector<long long> v(n);
        for (int i = 0; i < n;i++)
        {
            cin >> v[i];
        }

        long long g1 = 0, g2 = 0;

        for (int i = 0; i < n;i++)
        {
            if(i%2==0)
            {
                g1 = __gcd(g1, v[i]);
            }
            else
            {
                g2 = __gcd(g2, v[i]);
            }
        }

        bool test1 = true;
        bool test2 = true;

        for (int i = 1; i < n;i+=2)
        {
            if(v[i]%g1==0)
            {
                test1 = false;
            }
        }

        for (int i = 0; i < n;i+=2)
        {
            if(v[i]%g2==0)
            {
                test2 = false;
            }
        }

        if(test1)
        {
            cout << g1 << endl;
        }
        else if(test2)
        {
            cout << g2 << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }
       
    return 0;
}