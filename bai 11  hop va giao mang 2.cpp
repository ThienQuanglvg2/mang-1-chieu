#include<bits/stdc++.h>
using namespace std;
const int mod=1e9+7;
main()
{
    int n,m;
    cin>>n>>m;
    vector<int>a(n);
    vector<int>b(m);
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<m; i++)
    {
        cin>>b[i];
    }
    int i=0, j=0;
    vector<int>hop,giao;
    while(i<n && j<m)
    {
        if(a[i]==b[j])
        {
            hop.push_back(a[i]);
            giao.push_back(a[i]);
            ++i;
            ++j;
        }
        else if(a[i]>b[j])
        {
            hop.push_back(b[j++]);
        }
        else
            hop.push_back(a[i++]);
    }
    while(i<n) hop.push_back(a[i++]);
    while(j<m) hop.push_back(b[j++]);
    for(int &x:hop) cout<<x<<" ";
    cout<<endl;
    for(int &x:giao) cout<<x<<" ";
}
