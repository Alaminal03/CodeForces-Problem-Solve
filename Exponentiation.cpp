#include<bits/stdc++.h>
using namespace std;

const long long MOD = 1000000007;

long long power(long long a,long long b)
{
    long long res = 1;
    while (b > 0)
    {
        if(b %2 == 1)
        {
            res = res * a % MOD;
        }
        a = a * a % MOD;
        b >>= 1;
    }

    return res;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long a, b;
        cin >> a >> b;

        cout << power(a, b) << endl;
    }

    return 0;
}