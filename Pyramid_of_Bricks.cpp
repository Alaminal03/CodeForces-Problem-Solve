#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin >> t;

    while(t--)
    {
        long long int n;
        cin >> n;

        long long int sum = 0,count = 0;
        for (long long int i = 1; i <= n;i++)
        {
            sum += i;
             if(sum>n)
             {
                 break; 
             }
             count++;
              
        }

        cout << count << endl;
    }

    return 0;
}