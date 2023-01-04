#include<bits/stdc++.h>
using namespace std;
main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    vector<int>chan,le;
    for(int i=0; i<n; i++)
    {
        if(a[i] % 2==0)
        {
            chan.push_back(a[i]);
        }
        else le.push_back(a[i]);
    }
    sort(le.begin(),le.end(),greater<int>());
    for(int x:le) cout<<x<<" ";
    sort(chan.begin(),chan.end());
    for(int x:chan) cout<<x<<" ";
}
