#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n, k,odd=0;
        cin >> n >> k;

        string s;
        cin >> s;

        for (char i = 'a'; i <= 'z';i++)
    {
        int cunt = count(s.begin(), s.end(), i);

        if(cunt%2==1)
        {
            odd++;
        }
    }

    if(odd-1<=k)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }



    }

    return 0;
}