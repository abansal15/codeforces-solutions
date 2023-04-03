// Jai shree ram
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        m[a[i]]++;
    }
    int ans = 0;
    ans += m[4];
    m[4] = 0;
    if (m[1] > m[3])
    {
        ans += m[3];
        m[1] -= m[3];
        m[3] = 0;
    }
    //  cout << m[1] << '\n';
    if (m[3] >= m[1])
    {
        ans += m[1];
        m[3] -= m[1];
        m[1] = 0;
        ans += m[3];
        m[3] = 0;
    }
    // cout << ans << '\n';
    if (m[2] % 2 == 0)
    {
        ans += (m[2] / 2);
        m[2] = 0;
    }

    if (m[2] % 2 != 0)
    {
        ans += m[2] / 2;
        if (m[1] <= 2)
        {
            ans += 1;
            m[1] = 0;
            m[2] = 0;
        }
        else if (m[1] > 2)
        {
            ans += 1; //+ ((m[1] - 2) / 4 + (m[1] - 2) % 4);
            m[2] = 0;
            m[1] -= 2;
            if (m[1] % 4 != 0)
                ans += m[1] / 4 + 1;
            else
                ans += m[1] / 4;
            m[1] = 0;
        }
    }
    //  cout << ans << '\n' << m[1] << '\n';
    if (m[1] != 0 and m[1] > 4 and m[3] == 0)
    {
        if (m[1] % 4 != 0)
            ans += m[1] / 4 + 1;
        else
            ans += m[1] / 4;
    }

    if (m[1] != 0 and m[1] <= 4 and m[3] == 0)
    {
        ans += 1;
    }

    if (m[3] != 0)
    {
        ans += m[3];
    }
    cout << ans;
}