// Jai shree ram
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        set<int> s;
        int x,z;
        cin >> x;
        z=x;
        while (x--)
        {
            int y;
            cin >> y;
            s.insert(y);
        }

        if (s.size() % 2 == 0 && z % 2 == 0 || s.size() % 2 != 0 && z % 2 != 0)
        {
            cout << s.size() << '\n';
        }
        else
        {
            cout << s.size() - 1 << '\n';
        }
    }
    //  cout<<s.size()<<'\n';
}