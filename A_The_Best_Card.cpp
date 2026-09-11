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
        int val = n + 1;

        bool prime = true;

        for (int i = 2; i * i <= val;i++)
            {
                if(val%i==0)
                    {
                        prime = false;
                        break;
                    }
            }


            if (prime)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
    }

    return 0;
}