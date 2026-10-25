#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    long long x;
    cin >> n >> x;

    vector<long long> a(n);

    for (int i = 0; i < n;i++)
    {
        cin >> a[i];
    }

    long long sum = 0;
    long long ans = 0;

    int left = 0;
    for (int r = 0; r< n; r++)
    {
        sum += a[r];

        while(sum>x)
        {
            sum -= a[left];
            left++;
        }
        if(sum==x)
        {
            ans++;
        }
    }

    cout << ans << endl;

    return 0;
}