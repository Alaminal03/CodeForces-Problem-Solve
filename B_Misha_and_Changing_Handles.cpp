#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    map<string, string> mp;

    while(n--)
    {
        string old, New;
        cin >> old >> New;

        if(mp.find(old)==mp.end())
        {
            mp[New] = old;
            
        }
        else
        {
            mp[New] = mp[old];
            mp.erase(old);
        }
    }    

        cout << mp.size() << endl;

        for(auto x : mp)
        {
            cout << x.second << " " << x.first << endl;
        }
    

        return 0;
}