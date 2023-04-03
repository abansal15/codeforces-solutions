// Jai shree ram
#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int t;
    cin>>t;
    while(t--){
        int n,c=0,x=0,f=0;
        cin>>n;
        string s;
        cin>>s;
        for(int i=0;i<s.size();i++){
            if(s[i]=='U'){
                x++;
            }
            if(s[i]=='D'){
                x--;
            }
            if(s[i]=='R'){
                c++;
            }
            if(s[i]=='L'){
                c--;
            }
            if(c==1 && x==1){
                cout<<"YES"<<'\n';
                f++;
                break;
            }
            // if(c==0 && x==1){
            //     cout<<"YES"<<'\n';
            //     f++;
            //     break;
            // }
        }
        if(f==0){
            cout<<"NO"<<'\n';
        }
	}

}
