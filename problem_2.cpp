#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n;i++)
    {
        cin >> v[i];
    }

    int k;
    cin >> k;

    int sum = 0;
    for (int i = 0; i < k;i++)
    {
        sum += v[i];
    }

    int mx = sum;

    for (int i = k; i < n;i++)
    {
        sum = sum + v[i];
        sum = sum - (v[i - k]);

        mx = max(mx, sum);
    }

        cout << mx << endl;
}