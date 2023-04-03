// Jai shree ram
#include <bits/stdc++.h>
using namespace std;
#define int long long
const int m = 1e9 + 7;
const int n = 1e5 + 10;
int fact[n];

void Haribol()
{
    int n;
    cin >> n;
    cout << ((fact[n] % m) * ((n * n - n) % m)) % m << '\n';
    return;
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    fact[0] = 1;
    for (int i = 1; i < n; i++)
    {
        fact[i] = ((fact[i - 1] % m) * (i % m)) % m;
    }

    int t;
    cin >> t;
    while (t--)
    {
        Haribol();
    }
}
