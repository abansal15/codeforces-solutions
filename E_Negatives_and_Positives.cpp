// Jai shree ram
#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int f[n];
    int negcount=0;

    for(int i=0;i<n;i++){
        cin>>f[i];
        if(f[i]<0)negcount++;
        }
        for(int i=0;i<n;i++){
          f[i]=abs(f[i]);
        }
    
    sort(f,f+n);
    
    if(negcount%2!=0)
    f[0]=-f[0];

    long long int sum =0;
    for(int i=0;i<n;i++){
        sum=sum+f[i];
        }
    cout<<sum<<endl;

}
return 0;
}
