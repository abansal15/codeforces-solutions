//Jai shree ram
#include<bits/stdc++.h>
using namespace std;
int main(){
    int s,n,x=0,y;
    cin>>s>>n;
    vector<pair<int,int>> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i].first>>v[i].second;
    }
    sort(v.begin(),v.end());
    for(auto it:v){
        if(it.first>=s){
            cout<<"NO";
            x++;
            break;
        }
        else {
            s=s+it.second;
        }
    }
    if(x==0){
        cout<<"YES"<<"\n";
    }
}