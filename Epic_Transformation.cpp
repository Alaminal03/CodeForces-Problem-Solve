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
        map<int, int> mp;

        for (int i = 0; i < n;i++)
        {
            int v;
            cin >> v;
            mp[v]++;
        }
        int mx = 0;
        for(auto x : mp)
        {
            mx = max(mx, x.second);
        }
        if(mx>n-mx)
        {
            cout << 2 * mx - n << endl;
        }
        else
        {
            cout << n % 2 << endl;
        }
    }

    return 0;
}