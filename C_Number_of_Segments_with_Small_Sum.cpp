#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    long long int sum;

    cin >> n >> sum;

    vector<int> v(n);
    for (int i = 0; i < n;i++)
    {
        cin >> v[i];
    }

    long long int subarray = 0;
    long long int current_sum = 0;
    int left = 0;

    for (int right = 0; right < n;right++)
    {
        current_sum += v[right];

        while(current_sum>sum)
        {
            current_sum -= v[left];
            left++;
        }

        subarray += (right - left + 1);
    }

    cout << subarray << endl;
    return 0;
}