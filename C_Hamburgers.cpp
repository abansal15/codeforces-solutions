// Jai shree ram
#include <bits/stdc++.h>
using namespace std;
#define int long long
void Haribol()
{
    string s;
    cin >> s;
    int nb, ns, nc, pb, ps, pc, r;
    int ans = 0;
    cin >> nb >> ns >> nc >> pb >> ps >> pc >> r;
    map<char, int> mp;
    for (int i = 0; i < s.size(); i++)
    {
        mp[s[i]]++;
    }
    int cb = mp['B'] * pb;
    int cs = mp['S'] * ps;
    int cc = mp['C'] * pc;

    if (nb < mp['B'])
    {
        r -= (mp['B'] - nb) * pb;
        nb = mp['B'];
    }
    if (ns < mp['S'])
    {
        r -= (mp['S'] - ns) * ps;
        ns = mp['S'];
        // cout << r << '\n';
    }
    if (nc < mp['C'])
    {
        r -= (mp['C'] - nc) * pc;
        nc = mp['C'];
    }
    if (nb - mp['B'] >= 0 and ns - mp['S'] >= 0 and nc - mp['C'] >= 0 and r > 0)
    {
        while (nb > 0 and ns > 0 and nc > 0)
        {
            ans++;
            nb -= mp['B'];
            ns -= mp['S'];
            nc -= mp['C'];
            if (nb-mp['B'] < 0 or ns-mp['S'] < 0 or nc-mp['C'] < 0)
            {
                break;
            }
        }
    }
    // cout << ns << '\n';
    // cout << ans << "\n";
    if (nb > 0 and ns > 0 and nc > 0 and r >= 0)
    {
        // cout << 1;
        while (nb > 0 or ns > 0 or nc > 0 and r > 0)
        {
            if (nb < mp['B'] and r >= pb * (mp['B'] - nb))
            {
                // cout << nb << '\n';
                r -= (pb * (mp['B'] - nb));
                nb = mp['B'];
                // cout << r << " " << nb << '\n';
            }
            if (ns < mp['S'] and r >= ps * (mp['S'] - ns))
            {
                r -= ps * (mp['S'] - ns);
                ns = mp['S'];
            }
            if (nc < mp['C'] and r >= pc * (mp['C'] - nc))
            {
                r -= pc * (mp['C'] - nc);
                nc = mp['C'];
            }
            if (nb - mp['B'] >= 0 and ns - mp['S'] >= 0 and nc - mp['C'] >= 0)
            {
                while (nb > 0 and ns > 0 and nc > 0)
                {
                    ans++;
                    nb -= mp['B'];
                    ns -= mp['S'];
                    nc -= mp['C'];
                }
            }
        }
    }
    // cout << ans << "\n";
    else if (nb > 0 and ns > 0 and nc == 0)
    {
        while (mp['B'] * nb > 0 or mp['S'] * ns > 0 and r > 0)
        {
            if (nb < mp['B'] and r >= pb * (mp['B'] - nb))
            {
                // cout << nb << '\n';
                r -= (pb * (mp['B'] - nb));
                nb = mp['B'];
                // cout << r << " " << nb << '\n';
            }
            if (ns < mp['S'] and r >= ps * (mp['S'] - ns))
            {
                r -= ps * (mp['S'] - ns);
                ns = mp['S'];
            }
            if (nc < mp['C'] and r >= pc * (mp['C'] - nc))
            {
                r -= pc * (mp['C'] - nc);
                nc = mp['C'];
            }
            if (nb - mp['B'] >= 0 and ns - mp['S'] >= 0 and nc - mp['C'] >= 0)
            {
                while (nb > 0 and ns > 0 and nc > 0)
                {
                    ans++;
                    nb -= mp['B'];
                    ns -= mp['S'];
                    nc -= mp['C'];
                }
            }
        }
    }

    else if (nb > 0 and ns == 0 and nc > 0)
    {
        while (mp['B'] * nb > 0 or mp['C'] * nc > 0 and r > 0)
        {
            if (nb < mp['B'] and r >= pb * (mp['B'] - nb))
            {
                // cout << nb << '\n';
                r -= (pb * (mp['B'] - nb));
                nb = mp['B'];
                // cout << r << " " << nb << '\n';
            }
            if (ns < mp['S'] and r >= ps * (mp['S'] - ns))
            {
                r -= ps * (mp['S'] - ns);
                ns = mp['S'];
            }
            if (nc < mp['C'] and r >= pc * (mp['C'] - nc))
            {
                r -= pc * (mp['C'] - nc);
                nc = mp['C'];
            }
            if (nb - mp['B'] >= 0 and ns - mp['S'] >= 0 and nc - mp['C'] >= 0)
            {
                while (nb > 0 and ns > 0 and nc > 0)
                {
                    ans++;
                    nb -= mp['B'];
                    ns -= mp['S'];
                    nc -= mp['C'];
                }
            }
        }
    }

    else if (nb == 0 and ns > 0 and nc > 0)
    {
        while (mp['C'] * nc > 0 or mp['S'] * ns > 0 and r > 0)
        {
            if (nb < mp['B'] and r >= pb * (mp['B'] - nb))
            {
                // cout << nb << '\n';
                r -= (pb * (mp['B'] - nb));
                nb = mp['B'];
                // cout << r << " " << nb << '\n';
            }
            if (ns < mp['S'] and r >= ps * (mp['S'] - ns))
            {
                r -= ps * (mp['S'] - ns);
                ns = mp['S'];
            }
            if (nc < mp['C'] and r >= pc * (mp['C'] - nc))
            {
                r -= pc * (mp['C'] - nc);
                nc = mp['C'];
            }
            if (nb - mp['B'] >= 0 and ns - mp['S'] >= 0 and nc - mp['C'] >= 0)
            {
                while (nb > 0 and ns > 0 and nc > 0)
                {
                    ans++;
                    nb -= mp['B'];
                    ns -= mp['S'];
                    nc -= mp['C'];
                }
            }
        }
    }

    else if (nb > 0 and ns == 0 and nc == 0)
    {
        while (mp['B'] * nb > 0  and r > 0)
        {
            if (nb < mp['B'] and r >= pb * (mp['B'] - nb))
            {
                // cout << nb << '\n';
                r -= (pb * (mp['B'] - nb));
                nb = mp['B'];
                // cout << r << " " << nb << '\n';
            }
            if (ns < mp['S'] and r >= ps * (mp['S'] - ns))
            {
                r -= ps * (mp['S'] - ns);
                ns = mp['S'];
            }
            if (nc < mp['C'] and r >= pc * (mp['C'] - nc))
            {
                r -= pc * (mp['C'] - nc);
                nc = mp['C'];
            }
            if (nb - mp['B'] >= 0 and ns - mp['S'] >= 0 and nc - mp['C'] >= 0)
            {
                while (nb > 0 and ns > 0 and nc > 0)
                {
                    ans++;
                    nb -= mp['B'];
                    ns -= mp['S'];
                    nc -= mp['C'];
                }
            }
        }
    }

    else if (nb == 0 and ns > 0 and nc == 0)
    {
        while (mp['S'] * ns > 0 and r > 0)
        {
            if (nb < mp['B'] and r >= pb * (mp['B'] - nb))
            {
                // cout << nb << '\n';
                r -= (pb * (mp['B'] - nb));
                nb = mp['B'];
                // cout << r << " " << nb << '\n';
            }
            if (ns < mp['S'] and r >= ps * (mp['S'] - ns))
            {
                r -= ps * (mp['S'] - ns);
                ns = mp['S'];
            }
            if (nc < mp['C'] and r >= pc * (mp['C'] - nc))
            {
                r -= pc * (mp['C'] - nc);
                nc = mp['C'];
            }
            if (nb - mp['B'] >= 0 and ns - mp['S'] >= 0 and nc - mp['C'] >= 0)
            {
                while (nb > 0 and ns > 0 and nc > 0)
                {
                    ans++;
                    nb -= mp['B'];
                    ns -= mp['S'];
                    nc -= mp['C'];
                }
            }
        }
    }

    else if (nb == 0 and ns == 0 and nc > 0)
    {
        while (mp['C'] * nc > 0 and r > 0)
        {
            if (nb < mp['B'] and r >= pb * (mp['B'] - nb))
            {
                // cout << nb << '\n';
                r -= (pb * (mp['B'] - nb));
                nb = mp['B'];
                // cout << r << " " << nb << '\n';
            }
            if (ns < mp['S'] and r >= ps * (mp['S'] - ns))
            {
                r -= ps * (mp['S'] - ns);
                ns = mp['S'];
            }
            if (nc < mp['C'] and r >= pc * (mp['C'] - nc))
            {
                r -= pc * (mp['C'] - nc);
                nc = mp['C'];
            }
            if (nb - mp['B'] >= 0 and ns - mp['S'] >= 0 and nc - mp['C'] >= 0)
            {
                while (nb > 0 and ns > 0 and nc > 0)
                {
                    ans++;
                    nb -= mp['B'];
                    ns -= mp['S'];
                    nc -= mp['C'];
                }
            }
        }
    }
   // cout << r << '\n';
    if(r>0)
    ans += r / (mp['B'] * pb + mp['S'] * ps + mp['C'] * pc);

    // int tc = cb + cs + cc;
    // ans += r / tc;
    // r -= (r / tc) * (tc);
    // cout << ans << " " << r << '\n';
    // if (r == 0)
    // {
    //     if (nb - mp['B'] >= 0 and ns - mp['S'] >= 0 and nc - mp['C'] >= 0)
    //     {
    //         while (nb > 0 and ns > 0 and nc > 0)
    //         {
    //             ans++;
    //             nb -= mp['B'];
    //             ns -= mp['S'];
    //             nc -= mp['C'];
    //         }
    //     }
    // }
    // else if (r != 0)
    // {
    //     if (nb - mp['B'] >= 0 and ns - mp['S'] >= 0 and nc - mp['C'] >= 0)
    //     {
    //         while (nb > 0 and ns > 0 and nc > 0)
    //         {
    //             ans++;
    //             nb -= mp['B'];
    //             ns -= mp['S'];
    //             nc -= mp['C'];
    //         }
    //     }
    //     cout << ans << '\n';
    //     if (nb < mp['B'] and r >= pb * (mp['B'] - nb))
    //     {
    //         nb = mp['B'];
    //         r -= pb * mp['B'];
    //     }
    //     if (ns < mp['S'] and r >= ps * (mp['S'] - ns))
    //     {
    //         ns = mp['S'];
    //         r -= ps * mp['S'];
    //     }
    //     if (nc < mp['C'] and r >= pc * (mp['C'] - nc))
    //     {
    //         nc = mp['C'];
    //         r -= pc * mp['C'];
    //     }
    //     if (nb - mp['B'] >= 0 and ns - mp['S'] >= 0 and nc - mp['C'] >= 0)
    //     {
    //         while (nb > 0 and ns > 0 and nc > 0)
    //         {
    //             ans++;
    //             nb -= mp['B'];
    //             ns -= mp['S'];
    //             nc -= mp['C'];
    //         }
    //     }
    // }
    cout << ans;
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
