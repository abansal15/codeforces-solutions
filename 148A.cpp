// Jai shree ram
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k, l, m, n, d, count = 0;
    cin >> k >> l >> m >> n >> d;
    int x = 0;
    if (k >= x)
        x = k;
    if (l >= x)
        x = l;
    if (m >= x)
        x = m;
    if (n >= x)
        x = n;
    // cout<<x;
    unordered_set<int> a;
    for (int i = 1; (k * i) <= d; i++)
    {
        a.insert(k * i);
    }
    for (int i = 1; (l * i) <= d; i++)
    {     
        a.insert(l * i);
    }
    for (int i = 1; (m * i) <= d; i++)
    {
        a.insert(m * i);
    }
    for (int i = 1; (n * i) <= d; i++)
    {
        a.insert(n * i);
    }

    for (auto it : a)
    {
       // cout << it << endl;
        count++;
    }
    cout << count << endl;
}