// Jai shree ram
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        /* code */
        // vector<int> v;
        int n, a, b;
        cin >> n >> a >> b;
        int arr[b];
        for (int i = 0; i < b; i++)
        {
            // v.insert(v.begin()+i,i);
            //  cout<<v[i];
            arr[i] = i + 97;
            //  cout << arr[i];
        }
        //  cout<<v.size();
        if (a < n)
        {
            int k = 0;
            for (int i = 0; i < n; i = i + b)
            {
                for (int j = 0; j < b && k < n; j++)
                {
                    cout << (char)arr[j];
                    k++;
                }
            }
            // for (int j = 0; j < b; j++)
            // {
            //     cout << (char)arr[j];
            // }
        }
        else
        {
            int k=0;
            for (int i = 0; i < n; i++)
            {
                //  cout << (char)arr[j];
                for (int j = 0; j < b && k<n; j++)
                {
                    cout << (char)arr[j];
                    k++;
                }
            }
        }
        cout << '\n';
    }
}
// abcabca
// aaaaaa
//
// ababa