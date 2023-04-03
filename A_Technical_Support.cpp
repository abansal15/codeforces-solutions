// Jai shree ram
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        // string s2=s;
        int q=0;
        int c=0,d=0;
        // for(int i=0;i<n;i++)
        // {
        //     if(s[i]=='Q')
        //     q++;
        // }
        // if(n-q<q || s[n-1]=='Q')
        // {
        //     cout<<"No"<<"\n";
        // }
        // else 
        // {
            // for (int i = 0; i < s.size(); i++)
            // {
            //     if(s[i]=='Q')
            //     {
            //         c=i;
            //         d=0; 
            //         for (int j = c+1; j < s.size(); j++)
            //         {
            //             if(s[j]=='A')
            //             {
            //                 d++;
            //                 s.erase(s2.begin()+j-1);
            //                 break;
            //             }
            //         }
                    
            //     }
            // }
            // cout<<s.size();
            // if(d)
            //  cout<<"Yes"<<"\n";
            // else
            //  cout<<"No"<<"\n";
            int ct=0;
            for(int i=0;i<n;i++){
                if(s[i]=='Q'){
                    ct++;
                }
                else ct--;
                if(ct<0) ct=0;
            }
            if(!ct)
            {
                cout<<"Yes"<<"\n";
            }
            else 
            cout<<"No"<<"\n";
            
        }
    }
//}