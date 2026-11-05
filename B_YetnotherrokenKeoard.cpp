#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        string s;
        cin >> s;

        string s2 = "";

        for (int i = 0; i < s.size();i++)
        {
            if(s[i]=='b')
            {
                for (int j = s2.size() - 1; j >= 0;j--)
                {
                    if(s2[j]>='a' && s2[j]<='z')
                    {
                        s2.erase(j, 1);
                        break;
                    }
                }
            }
            else if(s[i]=='B')
            {
                for (int j = s2.size() - 1; j >= 0;j--)
                {
                    if(s2[j]>='A' && s2[j]<='Z')
                    {
                        s2.erase(j, 1);
                        break;
                    }
                }
            }
            else 
            {
                s2 += s[i];
            }

            
        }
        cout << s2 << endl;
    }

    return 0;
}