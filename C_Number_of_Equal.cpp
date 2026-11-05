#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin >> n >> m;

    vector<int> a(n);
    vector<int> b(m);

    for (int i = 0; i < n;i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m;i++)
    {
        cin >> b[i];
    }
    long long cnt = 0;
    int j = 0;

    for (int i = 0; i < n;i++)
    {
        while(j<m && b[j] <=a[i])
        {
            j++;
        }

        cnt = cnt + (m - j);
    }

        cout << cnt << endl;

    return 0;
}