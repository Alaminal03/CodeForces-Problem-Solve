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
        vector<int> a(n);

        for (int i = 0; i < n;i++)
        {
            cin >> a[i];
        }
        int m;
        cin >> m;

        while(m--)
        {
            string s;
            cin >> s;

            if(s.size() != n)
            {
                cout << "NO" << endl;
                continue;
            }

            map<int, char> mp1;
            map<char, int> mp2;

            bool ok = true;

            for (int i = 0; i < n;i++)
            {
                if(mp1.find(a[i]) != mp1.end())
                {
                    if(mp1[a[i]] != s[i])
                    {
                        ok = false;
                        break;
                    }
                }

                if(mp2.find(s[i]) != mp2.end())
                {
                    if(mp2[s[i]] != a[i])
                    {
                        ok = false;
                        break;
                    }
                }

                mp1[a[i]] = s[i];
                mp2[s[i]] = a[i];
            }


            if(ok)
            {
                cout << "YES" <<endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}