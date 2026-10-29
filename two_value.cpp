#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    long long int x;
    cin >> n >> x;

    vector<long long> a(n);

    map<long long, int> mp;

    for (int i = 0; i < n;i++)
    {
        cin >> a[i];

        long long need = x - a[i];

        if(mp.find(need) != mp.end())
        {
            cout << mp[need] << " " << i + 1 << endl;
            return 0;
        }

        mp[a[i]] = i + 1;
    }

        cout << "IMPOSSIBLE" << endl;

    return 0;
}