// Jai shree ram
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    set<int> s;
    map<int, int> mp;
    int t = 6;
    while (t--)
    {
        int x;
        cin >> x;
        s.insert(x);
        mp[x]++;
    }
    //  cout<<s.size()<<'\n';
    // if (s.size() == 3)
    // {
    //     cout << "Bear";
    // }
    if (s.size() > 3)
    {
        cout << "Alien";
        return 0;
    }
    if (s.size() == 2 || s.size() == 1 or s.size() == 3)
    {
        int ff = 0, gg = 0, check = 0;
        for (auto it : mp)
        {
            if (it.second == 1)
            {
                gg++;
            }
            else if (it.second == 5)
            {
                cout << "Bear";
                ff++;
                return 0;
            }
            else if (it.second == 4 and s.size() < 3)
            {
                cout << "Elephant";
                ff++;
                return 0;
            }
            else if (it.second == 4 and s.size() == 3)
            {
                cout << "Bear";
                ff++;
                check++;
                return 0;
            }
            else if (it.second == 6)
            {
                cout << "Elephant";
                ff++;
                return 0;
            }
            else if (it.second == 3 or it.second == 2 and s.size() == 3)
            {
                ff++;
                cout << "Alien";
                return 0;
            }
        }
        // int xx = 0;
        // if (check > 0 and gg > 0)
        // {
        //     cout << "Bear";
        //     ff++;
        //     xx++;
        //     return 0;
        // }
        // if (xx == 0)
        // {
        //     cout << "Elephant";
        //     ff++;
        //     return 0;
        // }
        if (ff == 0)
        {
            cout << "Alien";
            return 0;
        }
    }
    else
        cout << "Alien";
    return 0;
}

// 2 2 3 3 4 4
// 2 2 2 3 4 4
// 2 2 2 2 3 4
// 2 2 3 3 3 4
// 2 3 3 3 3 4
// 2 4 4 3 3 3
// 2 2 3 3 3 3