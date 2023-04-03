// Jai shree ram
#include <bits/stdc++.h>
using namespace std;
#define int long long
void Haribol()
{
    string s;
    cin >> s;
    set<int> ss;
    map<char,int> m;
    for (int i = 0; i < s.size(); i++)
    {
        m[s[i]]++;
        ss.insert(s[i]-97);
    }
    char x = (char)(*ss.rbegin()+97);
    int xx = m[x];
    for (int i = 0; i < xx; i++)
    {
        cout << x;
    }
    return;
    
    
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t=1;
   // cin >> t;
    while (t--)
    {
        Haribol();
    }
}
