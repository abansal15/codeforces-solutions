// Jai shree ram
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long int n, k;
   // vector<long long> v;
    cin >> n >> k;
    // for (int i = 1; i <= n; i = i + 2)
    // {
    //     v.push_back(i);
    // }
    // for (int i = 2; i <= n; i = i + 2)
    // {
    //     v.push_back(i);
    // }
    // cout << v[k - 1] << '\n';
    if(n%2==0 && k<=n/2){
        cout<<(k*2)-1;
        return 0;
    }
    if(n%2==0 && k>n/2){
        cout<<(k-n/2)*2;
        return 0;
    }
    if(n%2!=0 && k<=(n+1)/2){
        cout<<(k*2)-1;
        return 0;
    }
    if(n%2!=0 && k>(n+1)/2){
        cout<<(k-(n+1)/2)*2;
        return 0;
    }
}