// Jai shree ram
#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int t;
    cin>>t;
    string s;
    s="codeforces";
    while(t--){
        int d=0;
        char c;
        cin>>c;
      //  cout<<c<<'\n';
        for(int i=0;i<s.size();i++){
            if(c==s[i]){
                cout<<"YES"<<'\n';
                d++;
                break;
            }
        }
        if(d==0){
            cout<<"NO"<<'\n';
        }
	}

}
