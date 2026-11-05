#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n, m;
    cin >> n >> m;

    vector<int> v(n);
    for (int i = 0; i < n;i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < m;i++)
    {
        int val;
        cin >> val;
        auto it = lower_bound(v.begin(), v.end(),val);

        cout << (it - v.begin()) << " ";
    }

        return 0;
}