// Jai shree ram
#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >>n;
    string s;
    cin>>s;
    int a=0,ans=0;
    for (int i = 0; i < n; i++)
    {
        if(s[i]==')')
        {
            a--;
        }
        else if(s[i]=='(')
        {
            a++;
        }
        if(a<0)
        {
            ans++;
            a=0;
        }
    }
    cout << ans <<"\n";
    return;
    
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    
}