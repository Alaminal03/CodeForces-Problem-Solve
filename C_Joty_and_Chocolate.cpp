#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n, a, b, p, q;
    cin >> n >> a >> b >> p >> q;

    long long x = a, y = b;

    while(y!=0)
    {
        long long c = x % y;
        x = y;
        y = c;
    }

    long long g = x;
    long long lcm = a / g * b;

    long long red = n / a;
    long long blue = n / b;
    long long both = n / lcm;

    long long ans = red *p + blue *q;

    if(p>q)
    {
        ans = ans - both * q;
    }
    else
    {
        ans = ans - both * p;
    }

    cout << ans << endl;

    return 0;
}