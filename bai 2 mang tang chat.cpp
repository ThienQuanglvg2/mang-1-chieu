#include<bits/stdc++.h>
using namespace std;
int sapxep(int a[], int n)
{
    for(int i=0; i<n; i++)
    {
        if(a[i]>=a[i+1])
        {
            return 0;
        }
    }
    return 1;
}
main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    if(sapxep(a,n))
    {
        cout<<"YES";
    }
    else cout<<"NO";
}
