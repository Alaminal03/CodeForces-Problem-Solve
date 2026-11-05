#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n, k;
        cin >> n >> k;

        map<int, int> first, last;

        for (int i = 1; i <= n;i++)
        {
            int x;
            cin >> x;

            if(first.find(x)==first.end())
            {
                first[x] = i;
            }
            last[x] = i;
        }

        while(k--)
     {
        int a, b;
        cin >> a >> b;

        if((first.find(a) != first.end()) &&
            last.find(b) != last.end() &&
            first[a]<last[b])
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }

        }

    }

    
    return 0;
}