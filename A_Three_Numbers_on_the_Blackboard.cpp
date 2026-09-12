#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    
    while(t--)
    {
        int a[3];
        for (int i = 0; i < 3;i++)
        {
            cin >> a[i];
        }
        sort(a, a + 3);
        int result = min(a[1], a[2] - a[0]);
        cout << result << endl;
    }

    return 0;
}