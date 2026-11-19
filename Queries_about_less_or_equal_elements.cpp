#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    vector<int> x(a);
    for (int i = 0; i < a;i++)
    {
        cin >> x[i];
    }
    sort(x.begin(), x.end());

    for (int i = 0; i < b;i++)
    {
        int y;
        cin >> y;

        int count =  upper_bound(x.begin(), x.end(), y) - x.begin();

        cout << count << " ";
    }

        return 0;
}