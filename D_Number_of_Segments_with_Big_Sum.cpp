#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
   long long sum;
    cin >> n >> sum;

    vector<int> v(n);

    for (int i = 0; i < n;i++)
    { 
        cin >> v[i];
    }

    int left = 0;
   long long ans = 0;
    long long s = 0;

    for (int i = 0; i < n;i++)
    {
        s += v[i];

        while(s>=sum)
        {
            s -= v[left];
            left++;
        }

        ans += left;
    }

    cout << ans << endl;

    return 0;
}