#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[n];
    for(int i=0;i<n;i++)
    {
        cin >>a[i];
    }
    int left = 0;
    int right = n-1;
    int sum1=0,sum2=0;

    for(int i=0;left<=right;i++)
    {
        if(i%2==0)
        {
            if(a[left]>a[right])
            {
                sum1= sum1+a[left];
                left++;
            }
            else
            {
                sum1 = sum1+a[right];
                right--;
            }
        }
        else
        {
            if(a[left]>a[right])
            {
                sum2=sum2+a[left];
                left++;
            }
            else
            {
                sum2=sum2+a[right];
                right--;
            }
        }
    }

    cout <<sum1 <<" " <<sum2 <<endl;


    return 0;
}