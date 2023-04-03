// Jai shree ram
//Author - Ajaybansal
#include <bits/stdc++.h>
using namespace std;
#define vi                          vector<int>
#define vvi                         vector<vector<int>> 
#define pb                          push_back
#define pi                          pair<int, int>
#define ppb                         pop_back
#define pf                          push_front
#define ppf                         pop_front
#define all(x)                      (x.begin(),x.end())
#define rep(i, a, b)                for(int i = a; i < b; i++)
#define endl                        "\n"
#define ff                          first
#define ss                          second
#define yes                         cout << "YES" << endl
#define no                          cout << "NO" << endl
#define int                         long long
#define si                          set<int>
#define msi                         map<string, int>
#define in                          insert
#define sc                          set<char>
#define mod                         1e9 + 7
#define bit(n,i)                    ((n>>i) & 1)   // To check if i th bit is set or unset in a number n return 0 if unset and 1 if set 
#define seti(n,i)                   (n | (1<<i))   // Set the i th bit in a number n
#define unseti(n,i)                 (~(1<<i) & n)  // Unset the i th bit in a number n
#define toggle(n,i)                 (n ^ (1<<i))   // Toglle the i th bit in a number n

#ifdef ON_PC
    #include <debug.h>
#else
    #define debug(x...)
    #endif

// Function to count number of set bit in a number n is  __builtin_popcount();
// If (n & (n-1)) ==0 it implies n is some power of 2

void fast()                         
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
}

int ipow(int base, int exp)
{
    int result = 1;
    while(1)
    {
        if (exp & 1)
            result *= base;
        exp >>= 1;
        if (!exp)
            break;
        base *= base;
    }
    return result;
}

int nod(int n) // to calculate the number of distinct digits
{
    int a[10] = {0};
    int c = 0;
    while(n)
    {
        a[n%10] = 1;
        n/=10;
    }
    for (int i = 0; i < 10; i++)
    {
        if (a[i])
            c++;
    }
    return c;
}

void printBinary(int num){
    for(int i=10;i>=0;--i){
        cout<<((num>>i) & 1);
    }
    cout<<endl;
}

signed solve()
{
fast();
int t;
cin >> t;
while(t--)
{
    /*code*/
    int n;
    cin>>n;
    int a[n];
    rep(i,0,n){
        cin>>a[i];
    }
    int ans=a[0];
    rep(i,0,n){
        ans=ans & a[i];
    }
    cout<<ans<<'\n';
}
return 0;
}
signed main()
{
solve();
}