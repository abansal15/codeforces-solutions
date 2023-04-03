//Jai shree ram
#include<bits/stdc++.h>
using namespace std;
int main(){
    int count=0;
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i]=='h'){
            for(int j=i+1;j<s.size();j++){
                if(s[j]=='e'){
                    for(int k=j+1;k<s.size();k++){
                        if(s[k]=='l'){
                            for(int l=k+1;l<s.size();l++){
                                if(s[l]=='l'){
                                    for(int m=l+1;m<s.size();m++){
                                        if(s[m]=='o'){
                                            count++;
                                            break;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if(count!=0) cout<<"YES"<<"\n";
    else cout<<"NO"<<'\n';
}