#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;
    while(t--)
    {

    long long a, b;
    cin >> a >> b;

   if(b==1)
   {
       cout << "NO" << endl;
   }
   else
   {
     long long x, y, z;
    x = a;
    y = a * (2 * b - 1);
    z = x + y;

    cout << "YES" << endl;

    cout << x << " " << y << " " << z << endl;
   }
    }

    return 0;
}