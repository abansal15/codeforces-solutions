// Jai shree ram
#include <bits/stdc++.h>
using namespace std;
//#define int long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,x,m,s;
    cin >> n;
    int a[n+1]={0};
    for (int i=1;i<=n;i++)
    {
        cin>>x;
        a[i]=x+a[i-1];
        //cout<<a[i]<<'\n';
    }
    // cout<<a[0];
    cin>>m;
    while(m--)
    {
        
         cin>>s;
         cout<<lower_bound(a,a+n,s)-a<<'\n';
    }
}
