// Jai shree ram
// Author - Ajaybansal
#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vector<int>>
#define pi pair<int, int>
#define ppb pop_back
#define pf push_front
#define ppf pop_front
#define all(x) (x.begin().x.end())
#define for(i, n) for (int i = 0; i < n; i++)
#define endl "\n"
#define ff first
#define ss second
#define Yes cout << "YES" << endl
#define No cout << "NO" << endl
// #define int long long
void fast()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
int main()
{
    // fast();
    long long int n;
    string s, s2;

    cin >> s;
    n = s.length();
    // int a[s.size()];
    // vector<int> v;
    // vector<string> v2;

    // cout << n;
    for (i, n)
    {
        if (isupper(s[i]))
        {
            s[i] = tolower(s[i]);
        }
    }
    // for (i, s.size())
    // {
    //     if (s[i] != (int)'a' && s[i] != (int)'e' && s[i] != (int)'i' && s[i] != (int)'o' && s[i] != (int)'u' && s[i] != (int)'y')
    //     {
    //         // c=s[i];
    //         v.push_back('.');
    //         v.push_back(s[i]);
    //     }

    //     // else continue;
    // }
    // for (i, v.size())
    // {
    //     s2[i] = v[i];
    //   //  cout << v[i] << '\n';
    //   cout<<s2[i];
    // }
    for (i, s.size())
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'y')
        {
            continue;
        }
        else
        {
            s2+='.';
            s2+=s[i];
        }
    }
    cout<<s2<<endl;

    return 0;
}
