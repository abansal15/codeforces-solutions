// Jai shree ram
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, count = 0, count2 = 0;
        cin >> x;
        int a[x];
        for (int i = 0; i < x; i++)
        {
            cin >> a[i];
            if (i % 2 == 0 && a[i] % 2 != 0)
                count++;
            if (i % 2 != 0 && a[i] % 2 == 0)
            {
                count2++;
            }
        }
        if (count2 !=count)
            cout << -1 << "\n";
        else
        {
            cout<<count<<"\n";
    }
    }
}