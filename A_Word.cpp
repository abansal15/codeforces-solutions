// Jai shree ram
#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    string s;
    cin >> s;
    int ct1 = 0, ct2 = 0;
    for (int i = 0; i < s.size(); i++)
    {
        /* code */
        if(s[i]==toupper(s[i]))
        ct1++;
        else 
        ct2++;
    }
    if(ct1>ct2)
    {
        for (int i = 0; i < s.size(); i++)
        {
             cout << (char)toupper(s[i]);
        }  
    }
    else 
    {
        for (int i = 0; i < s.size(); i++)
        {
             cout << (char)tolower(s[i]);
        }  
    }
    
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t=1;
   // cin >> t;
    while (t--)
    {
        solve();
    }
}
