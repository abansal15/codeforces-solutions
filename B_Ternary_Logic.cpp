// Jai shree ram
#include <bits/stdc++.h>
using namespace std;
#define int long long


void Haribol()
{
    int a, c;
    cin >> a >> c;
    int ans = 0;
    int k = 1;
    while (a or c)  
    {
        if (c%3-a%3<0)
        {
            ans += ((c%3-a%3+3)%3)*k;
            a/=3;c/=3;k*=3;
        }
        else{
            ans += ((c%3-a%3)%3)*k;
            a/=3;c/=3;k*=3;
        }
    }
    cout << ans;
    return;
    
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    // cin >> t;
    while (t--)
    {
        Haribol();
    }
}
