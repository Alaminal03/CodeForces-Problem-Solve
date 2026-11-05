#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {

        long long a, b;
        cin >> a >> b;

        if(a==0 && b==0)
        {
            cout << 0 << endl;
        }
        else if(a==0 && b>1)
        {
            cout << -1 << endl;
        }
        else if(b<=a && (b-a)%2==0)
        {
            cout << a << endl;
        }
        else if(b<=a+1 && (b-(a+1))%2==0)
        {
            cout << a +1 << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }

    return 0;
}