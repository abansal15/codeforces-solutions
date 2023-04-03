// Jai shree ram
#include <bits/stdc++.h>
using namespace std;
#define int long long
void Haribol()
{
    string s;
    cin >> s;
    int cl = 0;
    int cr = 0;
    int ind = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '^')
        {
            ind = i;
        }
    }
    for (int i = 0; i < ind; i++)
    {
        if (s[i] == '1' or s[i] == '2' or s[i] == '3' or s[i] == '4' or s[i] == '5' or s[i] == '6' or s[i] == '7' or s[i] == '8' or s[i] == '9')
        {
            cl += abs(i - ind) * (s[i] - 48);
        }
    }
    for (int i = ind + 1; i < s.size(); i++)
    {
        if (s[i] == '1' or s[i] == '2' or s[i] == '3' or s[i] == '4' or s[i] == '5' or s[i] == '6' or s[i] == '7' or s[i] == '8' or s[i] == '9')
        {
            cr += abs(i - ind) * (s[i] - 48);
        }
    }
    if (cl == cr)
    {
        cout << "balance";
        return;
    }
    else if (cl > cr)
    {
        // cout << ind << '\n';
        // cout << cl << " " << cr << '\n';
        cout << "left";
        return;
    }
    else
    {
        // cout << ind << '\n';
        // cout << cl << " " << cr << '\n';
        cout << "right";
        return;
    }
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    //   cin >> t;
    while (t--)
    {
        Haribol();
    }
}
