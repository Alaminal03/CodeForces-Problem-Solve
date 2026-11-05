#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    vector<int> a(n);
    vector<int> b(m);
    vector<int> c;

    for (int i = 0; i < n;i++)
    {
        cin >> a[i];
        c.push_back(a[i]);
    }
    for (int i = 0; i < m;i++)
    {
        cin >> b[i];
        c.push_back(b[i]);
    }

    sort(c.begin(), c.end());

    for(auto x : c)
    {
        cout << x << " ";
    }

        return 0;
}