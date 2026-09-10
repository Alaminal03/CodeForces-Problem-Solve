#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long int a[3];
        for (int i = 0; i < 3;i++)
        {
            cin >> a[i];
        }
        sort(a, a + 3);

        if(a[0]==a[1])
        {
            cout << 0 << endl;
        }
        else
        {
            cout << min(a[2] - a[1],a[1]-a[0]) << endl;
        }
    }

    return 0;
}