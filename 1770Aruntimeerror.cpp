// Jai shree ram
// Author - Ajaybansal
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int n, m;
        long long int sum = 0;
        cin >> n >> m;
        long long int a[n] = {0};
        long long int a2[m] = {0};
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < m; i++)
        {
            cin >> a2[i];
        }
        sort(a, a + n);
        sort(a2, a2 + m, greater<int>());
        for (int i = 0; i < m; i++)
        {
            a[i] = a2[i];
        }
        for (int i = 0; i < n; i++)
        {
            sum += a[i];
        }
        cout << sum << endl;
       // return 0;
    }
    return 0;
}
