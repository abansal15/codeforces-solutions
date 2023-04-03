// Jai shree ram
#include <bits/stdc++.h>
using namespace std;
#define int long long
void Haribol()
{
    int n;
    cin >> n;
    int a[n];
    int temp[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        temp[i] = a[i];
    }
    for (int i = 0; i <= 256; i++)
    {
        int ans = 0;
        for (int j = 0; j < n; j++)
        {
            temp[j] = temp[j] ^ i;
        }
        for (int k = 0; k < n; k++)
        {
            ans = ans ^ temp[k];
        }
        if (ans == 0)
        {
            cout << i << '\n';
            return;
        }
        else
        {
            for (int l = 0; l < n; l++)
            {
                temp[l] = a[l];
            }
        }
    }
    cout << -1 << '\n';
    return;
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        Haribol();
    }
}
