    // Jai shree ram
    #include <bits/stdc++.h>
    using namespace std;
    #define int long long
    void solve()
    {
        int n, x, y, co = 0, ce = 0;
        cin >> n >> x;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> y;
            v.push_back(y);
            if (y & 1)
                co++;
            else
                ce++;
        }
        if (co == 0)
        {
            cout << "no" << '\n';
            return;
        }
        if (x % 2 == 0)
        {
            if (co + ce < x)
            {
                cout << "no" << '\n';
                return;
            }
            if (ce == 0)
            {
                cout << "no" << '\n';
                return;
            }
            if (co % 2 == 0  && ce!=0)
            {
                if (co - 1 + ce < x)
                {
                    cout << "no" << '\n';
                    return;
                }
                cout << "yes" << '\n';
                return;
            }
            
            cout << "yes" << '\n';
            return;
        }
        if (co & 1)
        {
            if (co + ce < x)
            {
                cout << "no" << '\n';
                return;
            }
            cout << "yes" << '\n';
            return;
        }
        if (co % 2 == 0)
        {
            if (co - 1 + ce < x)
            {
                cout << "no" << '\n';
                return;
            }
            cout << "yes" << '\n';
            return;
        }
        // cout << "yes"  << '\n';
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
            solve();
        }
    }
