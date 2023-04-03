// Jai shree ram
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, counte = 0, counto = 0,sum=0;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum+=a[i];
            if(a[i]%2==0) counte++;
            else counto++;
        }
        if(sum%2!=0){
            cout<<"YES"<<'\n';
        }
        else if(counto>0 && counte>0){
            cout<<"YES"<<'\n';
        }
        else {
            cout<<"NO"<<'\n';
        }
    }
}