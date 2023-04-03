// Jai shree ram
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string n;
        cin >> n;
        //  cout<<n<<'\n';
        int x = n.size();
        int c=0;
        //   cout<<x<<'\n';
        for(int i=0;i<x;i++){
            if(n[i]!='0') c++;
        }
        cout<<c<<'\n';
        for (int i = 0; i < n.size(); i++)
        {
            // cout<<n[i]*pow(10,x-1)<<" ";
            // x--;
            if (n[i] != '0')
            {
                int ch = n[i];
               //  cout << ch * (pow(10, x - i - 1)) << " ";
              //   cout<<(pow(10, x - i - 1))<<" ";
                // cout<<(int)ch<<" "<<n[i]<<'\n';
                // cout<<n[i]*100<<'\n';
                cout<<n[i];
                for(int j=0;j<x-i-1;j++){
                    cout<<"0";
                }
            }
            cout<<" ";
        }
        cout<<"\n";
    }
}