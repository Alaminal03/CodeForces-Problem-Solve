#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;

        int a, b, c;
        cin >> a >> b >> c;

        int mn = min({a, b, c});

        cout << n - mn << endl;
    }

    return 0;
}