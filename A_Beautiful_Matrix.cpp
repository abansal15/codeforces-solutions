// Jai shree ram
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[25];
    int c = 0, r = 0, col = 0;
    for (int i = 0; i <= 24; i++)
    {
        cin >> a[i];
        //   cout<<a[i]<<'\n';
        if (a[i] == 1)
        {
            c = i;
        }
    }
    if (c % 5 != 0)
    {
        r = (c / 5) + 1;
        col = c % 5;
    }
    else if (float((c) / 5) == int((c) / 5))
    {
        r = c / 5 + 1;
        if (float((c) / 5) != int((c) / 5))
            col = c / 5 - 1;
        else if (float((c) / 5) == int((c) / 5))
            col = 0;
    }
   // cout << r << " " << col + 1 << "\n";
    cout << abs(3 - r) + abs(col - 2);
}