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
//#define int long long
void fast()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
int main()
{
    fast();
    string t, a;
    cin >> t;

    int n = t.find('.');
    a = t.substr(0, n);
    if (t[n - 1] == '9')
    {
        cout << "GOTO Vasilisa." << endl;
        return 0;
    }
    else if (t[n + 1] < '5')
    {
        cout <<a<< endl;
        return 0;
    }
    else if (t[n + 1] >= '5')
    {
        t[n-1]+=1;
        cout <<t.substr(0,n)<< endl;
        return 0;
    }
}