// Jai shree ram
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, z = 0;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        for (int i = 0; i < n ; i++)
        {
            int y = v[i+1];
            int x = v[i];
            for (int j = i + 2; j < n; j++)
            {
                y = y ^ v[j];
            }
            if (y == x)
            {
                cout << x << '\n';
                //  z++;
                break;
            }
        }
    }
}

/*
// Another method

// Jai shree ram
#include <bits/stdc++.h>
using namespace std;
// any element of the array will works
int main()
{
    int t, z = 0;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        cout<<v[0]<<'\n';
    }
}
*/