// Jai shree ram
#include <bits/stdc++.h>
using namespace std;
int fact(int n){
    if(n==1 || n==0)
    {
      return 1;
    }
    return fact(n-1)*n;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            /* code */
            cin>>a[i];
        }
        
        cout<<6*(fact(10-n)/(fact(10-n-2)*2))<<'\n';
    }
}