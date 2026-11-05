#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        long long k;
        cin >> n >> k;

        vector<int> a(n), h(n);

        for (int i = 0; i < n;i++)
            {
                cin >> a[i];
            }
        for (int i = 0; i < n;i++)
            {
                cin >> h[i];
            }

            int left = 0, best = 0;
            long long sum = 0;

            for (int r = 0; r < n;r++)
            {
                if(r>0 && h[r-1]%h[r] !=0){
                    left = r;
                    sum = 0;
                }
                sum += a[r];

                while(sum>k){
                    sum -= a[left];
                    left++;
                }

                best = max(best, r - left + 1);
            }

            cout << best << endl;
    }

    return 0;
}