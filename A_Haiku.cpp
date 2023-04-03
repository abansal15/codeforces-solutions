// Jai shree ram
#include <bits/stdc++.h>
using namespace std;
#define int long long
void Haribol()
{
    string s, s2, s3;
    getline(cin,s);
    getline(cin,s2);
    getline(cin,s3);
    int c1 = 0, c2 = 0, c3 = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
        {
            c1++;
        }
    }
    for (int i = 0; i < s2.size(); i++)
    {
        if (s2[i] == 'a' || s2[i] == 'e' || s2[i] == 'i' || s2[i] == 'o' || s2[i] == 'u')
        {
            c2++;
        }
    }
    for (int i = 0; i < s3.size(); i++)
    {
        if (s3[i] == 'a' || s3[i] == 'e' || s3[i] == 'i' || s3[i] == 'o' || s3[i] == 'u')
        {
            c3++;
        }
    }
    if (c1 == 5 and c2 == 7 and c3 == 5)
    {
        cout << "YES";
        return;
    }
    cout << "NO";
    //cout << " " << c1 << c2 << c3;
    return;
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
