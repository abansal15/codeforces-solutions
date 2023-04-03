// Jai shree ram
#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    int m, s, s2;
    cin >> m >> s;
    s2 = s;
    if (m == 1)
    {
        if (s <= 9)
        {
            cout << s << " " << s << '\n';
            return;
        }
        else
        {
            cout << -1 << " " << -1 << '\n';
            return;
        }
    }
    else
    {
        string ansM = "";
        string ansm = "";
        if (s <= 9 * m and s >= 1)
        {
            int ct = 0;
            while (s)
            {
                if (s >= 9)
                {
                    ansM += '9';
                    s -= 9;
                    ct++;
                }
                else
                {
                    ct++;
                    ansM += std::to_string(s);
                    s = 0;
                }
            }
            if (m - ct > 0)
            {
                for (int i = 0; i < m - ct; i++)
                {
                    ansM += '0';
                }
            }
            //   cout << ansM;
            int ct2 = 0;
            //   deque<char> dq;
            if (s2 > 9 * (m - 1))
            {
                int y = s2 - 9 * (m - 1);
                ansm += std::to_string(y);
                for (int i = 1; i < m; i++)
                {
                    ansm += '9';
                }
                // cout << 1;
                cout << ansm << " " << ansM;
            }
            else
            {
                // ansm += '1';
                s2--;
                ct2++;
                while (s2)
                {
                    if (s2 >= 9)
                    {
                        // dq.push_front('9');
                        reverse(ansm.begin(), ansm.end());
                        ansm += '9';
                        reverse(ansm.begin(), ansm.end());
                        s2 -= 9;
                        ct2++;
                    }
                    else if (s2 < 9 and s2 > 0)
                    {
                        ct2++;
                        reverse(ansm.begin(), ansm.end());
                        ansm += std::to_string(s2);
                        reverse(ansm.begin(), ansm.end());
                        s2 = 0;
                        // string r = std::to_string(s2);
                        // cout << r;
                        // dq.push_front('r');
                    }
                }
                if (m - ct2 > 0)
                {
                    // cout << 5 << " ";
                    // if (m - ct2 > 1)
                    // {
                    //     for (int i = 0; i < m - ct2 - 1; i++)
                    //     {
                    //         reverse(ansm.begin(), ansm.end());
                    //         ansm += '0';
                    //         reverse(ansm.begin(), ansm.end());
                    //         // dq.push_front('0');
                    //     }
                    // }
                    // else
                    // {
                    //     for (int i = 0; i < m - ct2; i++)
                    //     {
                    //         reverse(ansm.begin(), ansm.end());
                    //         ansm += '0';
                    //         reverse(ansm.begin(), ansm.end());
                    //         // dq.push_front('0');
                    //     }
                    // }
                    while (m - ct2)
                    {
                        reverse(ansm.begin(), ansm.end());
                        ansm += '0';
                        reverse(ansm.begin(), ansm.end());
                        ct2++;
                    }
                }
                cout << 1;
                // for (int i = 0; i < dq.size(); i++)
                // {
                //     cout << dq[i];
                // }
                cout << ansm << " " << ansM;
            }
            // cout << ansm << " " << ansM;
        }
        else
        {
            cout << -1 << " " << -1;
        }
    }
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    // cin>>t;
    while (t--)
    {
        solve();
    }
}
