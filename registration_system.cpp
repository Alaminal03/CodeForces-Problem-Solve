#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    map<string,int> mp;

    while(n--)
    {
        string a;
        cin >> a;

        if(mp[a]==0)
        {
            cout << "OK" <<endl;
        }
        else
        {
            cout << a <<mp[a] <<endl ;
        }

        mp[a]++;
    }
    
    return 0;
}