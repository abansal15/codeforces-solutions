// Jai shree ram
#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int t;
    cin>>t;
    while(t--){
        string s ;
        cin >>s ;
        int ans=0;
        int x=s.size();
        for (int i = 0; i < x; i++)
        {
            if(s[i]!='+')
            {
                ans+=s[i] - 48;
            }
        }
        cout << ans <<'\n';
        
	}

}
