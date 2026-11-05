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

        vector<int> a(n);
        map<int, int> last;
        for (int i = 0; i < n;i++)
        {
            cin >> a[i];
            last[a[i]] = i;
        }
        set<int> need;
        set<int> current;

        int ans = 0;
        int mn = n;

        for (int i = 0; i < n;i++)
        {
            current.insert(a[i]);

            if(need.count(a[i]))
            {
                need.erase(a[i]);
            }
            mn = min(mn, last[a[i]]);
            if(need.empty() && mn > i)
            {
                ans++;

                need = current;
                current.clear();

                mn = n;
            }

        }

        if(!current.empty())
            {
                ans++;
            }

        cout << ans << endl;
    }

    return 0;
}