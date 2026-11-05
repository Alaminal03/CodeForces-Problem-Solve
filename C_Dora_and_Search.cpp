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

        vector<int> v(n);

        for (int i=0; i < n;i++)
        {
            cin >> v[i];
        }

        int left = 0;
        int right = n - 1;
        int mn = 1, mx = n;

        while(left<right)
        {
            if(v[left]==mn)
            {
                left++;
                mn++;
            }
            else if(v[left]==mx)
            {
                left++;
                mx--;
            }
            else if(v[right]==mn)
            {
                right--;
                mn++;
            }
            else if(v[right]==mx)
            {
                right--;
                mx--;
            }
            else 
            {
                break;
            }
        }

        if(left>=right)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << left + 1 << " " << right + 1 << endl;
        }
    }

    return 0;
}