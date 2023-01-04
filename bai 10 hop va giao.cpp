#include<bits/stdc++.h>
const int mod=1e9+7;
const int maxn=1e7+1;
int cnt1[maxn], cnt2[maxn];
using namespace std;
main()
{
    int n,m;
    cin>>n>>m;
    int a[n], b[m];
    int Min=mod, Max=0;
    for(int &x:a)
    {
        cin>>x;
        Min=min(x,Min);
        Max=max(Max,a[i]);
        cnt1[x]++;
    }
    for(int &x:b)
    {
        cin>>x;
        Min=min(x,Min);
        Max=max(Max,a[i]);
        cnt2[x]++;
    }
    for(int i=Min; i<=Max; i++)
    {
        if(cnt1[i]>0 && cnt2[i]>0)
        {
            cout<<i<<" ";
        }
    }
    cout<<endl;
    for(int i=Min; i<=Max; i++)
    {
        if(cnt1[i]>0 || cnt2[i]>0)
        {
            cout<<i<<" ";
        }
    }
}
