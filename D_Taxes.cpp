#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    bool prime = true;
    for (int i = 2; i * i <= n;i++){
        if(n%i==0){
            prime = false;
            break;
        }
    }

    if(prime){
        cout << 1 << endl;
    }else if(n%2==0){
        cout << 2 << endl;
    } else{
        int m = n - 2;
        bool secprime = true;
        for (int i = 2; i * i <= m;i++){
            if(m%i==0){
                secprime = false;
                break;
            }
        }

        if(secprime){
            cout << 2 << endl;
        }else{
            cout << 3 << endl;
        }
    }

        return 0;
}