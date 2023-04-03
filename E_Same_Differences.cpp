// Jai shree ram
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    long long x;
    cin >> t;
    while (t--)
    {
        long long n,ans=0;
        cin >> n;
        long long count = 0;
        unordered_map<long long,long long> m;
        unordered_map<long long,long long>m2;
        for (long long i = 0; i < n; i++)
        {   
            cin>>x;
            m[i]=x-i;
        }
        for(auto it:m)
        {
            ans+=m2[it.second];
            m2[it.second]++;
        }
        // for(auto iit:m2)
        // {
        //     if(iit.second>count){
        //         count=iit.second;
        //     }
        // }
        cout << ans  <<'\n';
    }
}