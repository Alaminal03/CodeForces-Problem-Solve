#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    list<string> l;
    map<string, list<string>::iterator> mp;

    for (int i = 0; i < n;i++)
    {
        string ss;
        cin >> ss;

        if(mp.find(ss) != mp.end())
        {
            l.erase(mp[ss]);
        }

        l.push_front(ss);
        mp[ss] = l.begin();
    }

    for(string x : l)
        {
            cout << x << endl;
        }
        return 0;
}