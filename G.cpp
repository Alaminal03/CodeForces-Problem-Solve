#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int temp = n / 2;
    vector<int> v(n),tem(n);
    for (int i = 0; i < n;i++)
    {
        cin >> v[i];
        if(v[i]>temp){

            tem[i] = (v[i]) - temp;
            temp++;
        }
           
    }

    // for(auto x : tem)
    //     cout << x << endl;

    int count = 0;

    for (int i = 0; i < n - 1;i++)
    {
        for (int j = 0; j < n;j++)
        {
            if(tem[i]!=tem[j])
            {
                count++;
                
            }
        }
    }

    if(count != 0)
    {
        cout << "Bob" << endl;
    }
    else
    {
        cout << "Alice" << endl;
    }

        return 0;
}