// Jai shree ram
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 1; i < n; i++)
    {
        if (arr[i] % 2 != arr[i - 1] % 2)
        {
            if(i==(n-1)){
                cout<<n<<endl;
                return 0;
            }
            if (arr[i] % 2 == arr[i + 1] % 2)
                cout << (i) << '\n';
            else if (arr[i] % 2 != arr[i + 1] % 2)
                cout << (i + 1) << '\n';
            return 0;
        }
    }
}