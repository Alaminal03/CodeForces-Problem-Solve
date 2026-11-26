#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n, k;
    cin >> n >> k;
     long long div=-1;

    for (long long i = 2; i <= n / 2;i++)
    {
        if(n%i==0)
        {
            if(k<=i)
            {
                div = i;
            }
        }
    }
    cout << div << endl;

    return 0;
}