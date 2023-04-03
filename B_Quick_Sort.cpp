// Jai shree ram
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a, b, count = 0, count2 = 1;
    cin >> a >> b;
    int ar[a];
    for (int i = 0; i < a; i++)
    {
        cin >> ar[i];
    }
    // if (a == b)
    // {
    //     cout << 1 << "\n";
    //     return;
    // }
    for (int i = 0; i < a; i++)
    {
        if (ar[i] == count2)
        {
            count2++;
        }
        else
        {
            count++;
        }
    }
    cout << ceil((float)count / b) << '\n';
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
