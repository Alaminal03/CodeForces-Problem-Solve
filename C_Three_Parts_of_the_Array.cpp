#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    vector<long long> v(n);

    for (int i = 0; i < n;i++)
    {
        cin >> v[i];
    }

    int left = 0;
    int right = n - 1;

    long long sum1 = 0;
    long long sum3 = 0;
    long long ans = 0;

    while(left<=right)
    {
        if(sum1<=sum3)
        {
            sum1 = sum1 + v[left];
            left++;
        }
        else
        {
            sum3 = sum3 + v[right];
            right--;
        }

        if(sum1==sum3)
        {
            ans = sum1;
        }
    }

    cout << ans << endl;

    return 0;
}