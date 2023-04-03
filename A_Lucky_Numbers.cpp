// Jai shree ram
#include <bits/stdc++.h>
using namespace std;
#define int long long
const int n = 1e6 + 10;
int ar[n];
void Haribol()
{
    int a, b;
    cin >> a >> b;
    int ans = 0;
    int ans2 = 0;
    int ct;
    if (b != a)
        ct = b - a + 1;
    else
        ct = b - a;
    int temp = a;
    for (int i = 0; i <= 10000 and temp <= b; i++)
    {
        if (ar[a + i] >= ans2)
        {
            ans2 = ar[a + i];
            ans = a + i;
        }
        temp++;
    }
    ans2 = 0;
    int ans3 = 0;
    temp = b;
    for (int i = 0; i <= 10000 and temp >= a; i++)
    {
        if (ar[b - i] >= ans2)
        {
            ans2 = ar[b - i];
            ans3 = b - i;
        }
        temp--;
    }
    cout << max(ans,ans3) << '\n';
    return;
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    for (int i = 0; i < 10; i++)
    {
        ar[i] = 0;
    }

    for (int i = 10; i < n; i++)
    {
        string s = to_string(i);
        ar[i] = (*(max_element(s.begin(), s.end()))) - (*(min_element(s.begin(), s.end())));
    }

    int t;
    cin >> t;
    while (t--)
    {
        Haribol();
    }
}
