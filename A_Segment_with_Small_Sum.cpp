#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    long long k;
    cin >> n >> k;

    vector<int> a(n);

    for (int i = 0; i < n;i++)
    {
        cin >> a[i];
    }

    int left = 0, right = 0, ans = 0;

    long long sum = 0;

    while(right<n)
    {
        sum += a[right];

        if(sum<=k)
        {
            ans = max(ans, right - left + 1);
        }
        else
        {
            sum -= a[left];
            left++;
        }
        right++;
    }

    cout << ans << endl;
    return 0;
}