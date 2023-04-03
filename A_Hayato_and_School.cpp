// Jai shree ram
#include<bits/stdc++.h>
using namespace std;
#define scan(arr) for(auto &x : arr) cin>>x;
#define print(arr) for(auto &x : arr) cout<<x<<" "; cout<<endl;
const int N=1e3+10;
// int b[N]={0};
// int c[N]={0};
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<int> b;
        vector<int> c;
        int n, co = 0, ce = 0;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (a[i] % 2 == 0)
            {
                ce++;
                b.push_back(i);
            }
            else
            {
                co++;
                c.push_back(i);
            }
        }
        if (ce < 2 && co <= 2){
            cout << "NO" << '\n';
            continue;
        }
        if(co==0){
            cout<<"NO"<<'\n';
            continue;
        }   
        else
        {
            cout << "YES" << '\n';
            
            if (co >= 3)
            {
                cout << c[0]+1 << " " << c[1]+1 << " " << c[2]+1 << "\n";
                continue;
            }
            else 
            {
                cout << b[0]+1 << " " << b[1]+1 << " " << c[0]+1 << "\n";
                continue;
            }
        }
    }
}

bool isPowerOfTwo(int n)
{
    if (n == 0)
        return false;
 
    return (ceil(log2(n)) == floor(log2(n)));
}

if(isPowerOfTwo(x-3)){
            cout<<"YES"<<'\n';
        }
        else cout<<"NO"<<'\n';