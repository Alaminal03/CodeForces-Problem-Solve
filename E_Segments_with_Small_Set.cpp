#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,sum;
    cin >> n >> sum;

    vector<int> v(n);
    for (int i = 0; i < n;i++)
    {
        cin >> v[i];
    }
    int left = 0, ans = n + 1, s=0;

    for (int right = 0; right < n;right++)
    {
        s += v[right];

        while(s>=sum)
        {
            ans = max(ans, right - left + 1);
            s -= v[left];
            left++;
        }
    }

    cout << ans << endl;

    return 0;
}