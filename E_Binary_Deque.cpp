#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {

        int n, sum;
        cin >> n >> sum;
        int temp_sum = 0;

        vector<int> v(n);
        for (int i = 0; i < n;i++)
        {
            cin >> v[i];
            temp_sum += v[i];
        }

        if(temp_sum<sum)
        {
            cout << -1 << endl;
            continue;
        }

        int left = 0, ans = 0, s = 0;
        for (int right = 0; right < n;right++)
        {
            s += v[right];
            while(s>sum)
            {
                s -= v[left];
                left++;
            }

            if(sum==s)
            {
                ans = max(ans, right - left + 1);
            }
        }

        cout << n - ans << endl;
    }

    return 0;
}