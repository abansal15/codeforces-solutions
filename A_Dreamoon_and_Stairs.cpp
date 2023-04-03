// Jai shree ram
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a, b;
    cin >> a >> b;
    if (b > a)
    {
        cout << -1 << '\n';
        return;
    }
    if (a % 2 == 0)
    {
        if ((a / 2) % b)
        cout << (a / 2) + (b - (a / 2) % b);
        else 
        cout << (a / 2);
        return;
    }
    else if (a & 1)
    {
        if((a / 2 + 1) % b)
        cout << (a / 2 + 1) + (b - (a / 2 + 1) % b);
        else 
        cout << (a / 2 + 1);
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int t;
    t = 1;
    while (t--)
    {
        solve();
    }
}
