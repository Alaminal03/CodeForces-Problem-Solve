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

    priority_queue<int> pq;


    for (int i= 1; i<=n;i++)
    {
        pq.push(i);
    }
    cout << 2 << endl;

    while(pq.size()>1)
    {
        int a = pq.top();
        pq.pop();

        int b = pq.top();
        pq.pop();

        cout << a << " " << b << endl;

        int x = (a + b + 1) / 2;
        pq.push(x);
    }
   } 

        return 0;
}