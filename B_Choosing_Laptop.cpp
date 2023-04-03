// Jai shree ram
#include <bits/stdc++.h>
using namespace std;
#define int long long
void Haribol()
{
    int n;
    cin >> n;
    int a[n][4];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i][0] >> a[i][1] >> a[i][2] >> a[i][3];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i][0] < a[j][0])
            {
                if (a[i][1] < a[j][1])
                {
                    if (a[i][2] < a[j][2])
                    {
                        a[i][3] = 2000;
                    }
                }
            }
        }
    }

    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = i - 1; j >= 0; j--)
        {
            if (a[i][0] < a[j][0])
            {
                if (a[i][1] < a[j][1])
                {
                    if (a[i][2] < a[j][2])
                    {
                        a[i][3] = 2000;
                    }
                }
            }
        }
    }
    int id = 0;
    int ans = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (ans > a[i][3])
        {
            ans = min(ans, a[i][3]);
            id = i;
          //  cout << id << "\n";
        }
    }
    // cout << a[1][3];
    cout << id + 1 << "\n";
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

//  2762
//  4288
//  3524
//  2692
