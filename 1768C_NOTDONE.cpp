// Jai shree ram
#include <bits/stdc++.h>
using namespace std;
// int solve(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n,count=0;
//         cin>>n;
//         int a[n];
//         for(int i=0;i<n;i++){
//             cin>>a[i];
//             if(n>1){
//                 if(a[i]==1){
//                     count++;
//                 }
//             }
//         }
//         if(n==1){
//             cout<<"YES"<<'\n';
//             return 0;
//         }
//         if(n==2 || n==3){
//             cout<<"NO"<<endl;
//             return 0;
//         }
//         else {
//             if(count!=0){
//                 cout<<"NO"<<endl;
//                 return 0;
//             }

//         }

//     }
//     return 0;
// }
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, count = 0,flag=0;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (n > 1)
            {
                if (a[i] == 1)
                {
                    count++;
                }
            }
        }
        if (n == 1)
        {
            cout << "YES" << '\n';
            // return 0;
        }
        if (n == 2 || n == 3)
        {
            cout << "NO" << endl;
            // return 0;
        }
        else
        {
            if (count != 0)
            {
                cout << "NO" << endl;
                //  return 0;
            }
            else{
                for(int i=0;i<n;i++){
                    if(a[i]==n){
                        cout<<1<<" ";
                        flag++;
                    }
                    if(a[i]==n && flag!=0){
                        cout<<a[i]-1<<" ";
                    }
                    else {
                        cout<<a[i]-1<<" ";
                    }
                }
            }
        }
    }
    return 0;
    // solve;
}