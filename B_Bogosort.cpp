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
        cin>>n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            /* code */
            cin>>a[i];
        }
        sort(a,a+n,greater<int>());
        for (int i = 0; i < n; i++)
        {
            /* code */
            cout<<a[i]<<" ";
        }
        cout<<"\n";
        
    }
}