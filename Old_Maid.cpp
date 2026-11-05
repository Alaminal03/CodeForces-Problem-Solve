#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n;i++)
    {
        cin >> a[i];
    }
    int sum = 0;
    sort(a, a + n);

    for (int i = 0; i < n;i++)
    {
        int count = 0;
        for (int j = i; j < n;j++)
        {
            if(a[i]==a[j])
            {
                count++;
            }
            else 
            {
                break;
            }
        }
        if(count%2==1)
        {
            sum = sum + a[i];
        }
            i = i+count-1;
    }

    cout << sum << endl;

    return 0;
}