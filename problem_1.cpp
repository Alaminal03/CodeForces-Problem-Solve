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
        vector<int> cnt(102,0);

        for(int i=0;i<n;i++)
        {
            cin >> a[i];
            cnt[a[i]]++;
        }

        int mex = 0;
        while(cnt[mex]>0)
        {
            mex++;
        }

        // if(mex==0)
        // {
        //     cout << "Bob" <<endl;
        //     continue;
        // }

        long long mov = 0;
       
        for(int x =1;x<mex;x++)
        {
            if(cnt[x]>=2)
            {
                mov = mov + cnt[x] - 1 ;
            }
        }

        for(int x =mex +1;x<=100;x++)
        {
            if(x==mex+1)
            {
                if(cnt[x]>=2)
                {
                    mov = mov + cnt[x] -1;
                }
            }
            else{
                mov = mov + 1ll * cnt[x] * (x-mex -1);
            }
        }
        

            if(mov % 2)
            {
                cout << "Alice" <<endl;
            }
            else
            {
                cout << "Bob" <<endl ;
            }

    }

    return 0;
}