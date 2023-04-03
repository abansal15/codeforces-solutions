// Jai shree ram
#include<bits/stdc++.h>
using namespace std;
int countt=0;
bool isPrime(long long int n)
{
    // Corner cases
    if (n <= 1)
        return false;   
    if (n <= 3)
        return true;
 
    // This is checked so that we can skip
    // middle five numbers in below loop
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
 
    return true;
}

int main(){
    int n;
    cin>>n;
    long long int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        double d=sqrt(a[i]);
        int at=d;
        if(d!=at) cout<<"NO"<<'\n';
        else if(isPrime(sqrt(a[i]))==true) cout<<"YES"<<'\n';
        else cout<<"NO"<<'\n';
    }
    
    }
//     cout<<count;
