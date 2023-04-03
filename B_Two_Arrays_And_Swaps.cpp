// Jai shree ram
#include <bits/stdc++.h>
using namespace std;
#define int long long
void Haribol()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    int b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    sort(b, b + n, greater<int>());
    sort(a, a + n);
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i] < b[j] and k > 0)
            {
                swap(a[i], b[j]);
                k--;
                break;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }
    cout << sum << '\n';
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
