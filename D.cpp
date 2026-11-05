#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int temp = n;
    vector<int> v;

     v.push_back(n);
    for (int i = 1; ;i++)
    {
       
        int ans = 0;
        if(temp%2==0)
        {
            ans = temp / 2;
            v.push_back(ans);
            temp = ans;
        }
        else
        {
            ans = (3 * temp + 1) ;
            v.push_back(ans);
            temp = ans;
        }

        for (int j = 0; j < i;j++)
        {
            if(v[i]==v[j])
            {
                cout << i+1 << endl;
                return 0;
            }
        }
    }
        return 0;
}