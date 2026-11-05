#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int sz = s.size();

    string year = "",month="",day="";

    for (int i = 0; i < sz;i++)
    {
        if(i<4)
        {
            year.push_back(s[i]);
        }
        if(i>4 && i<7)
        {
            month.push_back(s[i]);
        }
        if(i>7 &&i<10)
        {
            day.push_back(s[i]);
        }
    }

    if(year<="2019" && month<="04" && day<="30")
    {
        cout << "Heisei" << endl;
    }
    else if(year<="2019" && month<"04")
    {
        cout << "Heisei" << endl;
    }
    else
    {
        cout << "TBD" << endl;
    }

    

    return 0;
}