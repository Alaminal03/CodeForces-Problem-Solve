#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n>>m;

    int a[n + 1];
    int ans[n + 1];

    for (int i = 1; i <= n;i++)
    {
        cin >> a[i];
    }

    set<int> s;

    for (int i = n; i >= 1;i--)
    {
        s.insert(a[i]);
        ans[i] = s.size();
    }

    while(m--)
    {
        int list;
        cin >> list;

        cout << ans[list] << endl;
    }
        return 0;
}