// Jai shree ram
#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 1e6;
vector<bool> isPrime(N, 1);
void isPrimes()
{
    isPrime[0] = 0;
    isPrime[1] = 1;
    for (int i = 2; i < N; i++)
    {
        if (isPrime[i] == true)
        {
            for (int j = 2 * i; j < N; j += i)
            {
                isPrime[j] = false;
            }
        }
    }
}
void solve()
{
    isPrimes();
    int n, count = 2, count2 = 0;
    vector<int> ans;
    unordered_set<int> ss;
    cin >> n;
    for (int i = 2; i <= n + 1; i++)
    {
        if (isPrime[i] == 0)
        {
            // cout << i;
           // count2++;
            ans.push_back(2);
            ss.insert(2);
           // count++;
        }
        else if (isPrime[i] == 1)
        {
            //    cout << i;
            ans.push_back(1);
            ss.insert(1);
        }
    }
    // if(n>=2)
    // cout << 2 << "\n";
    // else cout <<1 <<'\n';
    cout << ss.size() <<"\n";
    for (auto it : ans)
    {
        cout << it << " ";
    }
    // cout << isPrime[8] << '\n';
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    // cin>>t;
    t = 1;
    while (t--)
    {
        solve();
    }
}
