// Jai shree ram
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, count1 = 0, count2 = 0, max = 0, min = 1000;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] > max)
        {
            max = a[i];
            count1 = i;
        }
        if (a[i] <= min)
        {
            min = a[i];
            count2 = i;
        }
    }
    // if(n==2){
    //     if(a[0]<a[1]) cout<<1;
    //     else cout<<0;
    //     return 0;
    // }
    // if(n%2==0 && n!=2) cout<<count1+(n-1)-count2;
    // else cout<<count1+(n-1)-count2;
    // cout << count1 << count2 << "\n";
    if (count1 > count2) // as if max element is on the right side of the min element then if we take max at starting point then min element gets shifted by 1 to right side automatically
    {
        cout << count1 + n - 1 - count2 - 1;
    }
    else
    {
        cout << count1 + n - 1 - count2;
    }
}