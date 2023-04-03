// Jai shree ram
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, r, k = 0, m = 0;
    cin >> n >> r;
    for (int i = 0; i < n; i++)
    {
        if (k % 2 == 0)
        {
            for (int j = 0; j < r; j++)
            {
                cout << "#";
            }
            cout << "\n";
            k++;
        }
        else
        {
            if (m % 2 == 0)
            {
                for (int j = 1; j < r; j++)
                {
                    cout << ".";
                }
                cout << "#";
                cout << "\n";
                k++;
                m++;
                continue;
            }
            if (m % 2 != 0)
            {
                cout<<"#";
                for (int j = 1; j < r; j++)
                {
                    cout << ".";
                }
                cout << "\n";
                k++;
                m++;
                continue;
            }
        }
    }
}
