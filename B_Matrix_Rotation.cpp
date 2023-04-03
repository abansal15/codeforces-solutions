// Jai shree ram
#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int t;
    cin>>t;
    while(t--){
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        if (a < b && c < d && a < c && b < d)
        {
            cout << "YES" <<'\n';
        }
        else if (d < b && c < a && c < d && a < b)
        {
            cout << "YES" <<'\n';
        }
        else if (d < c && b < a && d < b && c < a)
        {
            cout << "YES" <<'\n';
        }
        else if (b < d && a < c && b < a && d < c)
        {
            cout << "YES" <<'\n';
        }
        else
        cout << "NO" <<'\n';
	}

}
