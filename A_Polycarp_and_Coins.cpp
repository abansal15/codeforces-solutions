// Jai shree ram
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        if (n % 3 == 0)
        {
            cout << n / 3 << " " << n / 3;
        }
        else if ((n - 1) % 3 == 0)
        {
            cout << (n - 1) / 3 + 1 << " " << (n - 1) / 3;
        }
        else
            cout << (n - 2) / 3 << " " << (n - 2) / 3 + 1;
        cout << "\n";
    }
}