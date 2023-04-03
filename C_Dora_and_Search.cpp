// Jai shree ram
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, s = 0, ans1, ans2;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int l = 0, r = n - 1;
        int mini = 1;
        int max = n;
        // if (n == 2 || n == 1)
        // {
        //     cout << -1 << '\n';
        // }
        // else
        // {
        //     for (int i = 0; i < n; i++)
        //     {
        //         int min1 = INT_MAX, max1 = 0;
        //         // if (*min_element(a + (sizeof(int)) * l, a + (sizeof(int)) * (r + 1)) == a[l] || *max_element(a + (sizeof(int)) * l, a + (sizeof(int)) * (r + 1)) == a[l])
        //         // {
        //         //     l++;
        //         // }
        //         // else if (*min_element(a + (sizeof(int)) * l, a + (sizeof(int)) * (r + 1)) == a[r] || *max_element(a + (sizeof(int)) * l, a + (sizeof(int)) * (r + 1)) == a[r])
        //         // {
        //         //     r--;
        //         // }
        //         // else
        //         // {
        //         //     ans1 = l;
        //         //     ans2 = r;
        //         // }
        //         // if (l == r || r - l == 1)
        //         // {
        //         //     s++;
        //         //     break;
        //         // }
        //         // for (int i = l; i <= r; i++)
        //         // {
        //         //     min1 = min(min1, a[i]);
        //         //     max1 = max(max1, a[i]);
        //         // }
        //        // sort(a , a + n);
        //         min1 = a[l];
        //         max1 = a[r];
        //         if (min1 != a[l] and max1 != a[l] and min1 != a[r] and max1 != a[r])
        //         {
        //             break;
        //         }
        //         if (min1 == a[l] || max1 == a[l])
        //         {
        //             l++;
        //         }
        //         if (min1 == a[r] || max1 == a[r])
        //         {
        //             r--;
        //         }
        //         if (l == r || r - l == 1)
        //         {
        //             s++;
        //             break;
        //         }
        //         // else
        //         // {
        //         //     ans1 = l;
        //         //     ans2 = r;
        //         //     break;
        //         // }
        //     }
        //     ans1 = l;
        //     ans2 = r;
        //     if (s)
        //     {
        //         cout << -1 << '\n';
        //     }
        //     else
        //     {
        //         cout << ans1 + 1 << " " << ans2 + 1 << '\n';
        //     }
        while (l < r)
        {
            if (a[l] == mini)
            {
                l++;
                mini++;
            }
            else if (a[l] == max)
            {
                l++;
                max--;
            }
            else if (a[r] == mini)
            {
                r--;
                mini++;
            }
            else if (a[r] == max)
            {
                r--;
                max--;
            }
            else
            {
                cout << l + 1 << " " << r + 1 << "\n";
                s++;
                break;
            }
        }
        if(!s)
        {
            cout << -1 <<'\n';
        }
    }
}
