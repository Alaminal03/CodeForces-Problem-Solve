#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    long long sum = 0;
    if(n==1)
    {
        cout << 2 << endl;
    }
    else
    {
    for (int i = 1; i <= n;i++)
    {
        sum += i;
    }
    }
    cout << sum << endl;
}