#include<bits/stdc++.h>
using namespace std;
using ll=long long;
const int maxn=1e7+1;
const int mod=1e9+7;
int a[maxn];
int n;
void sln()
{
    int Max=a[0], vtmax=0, Min=a[0], vtmin=0;
    for(int i=1; i<n; i++)
    {
        if(a[i]>Max)
        {
            Max=a[i];
            vtmax=i;
        }
        else if(a[i]<=Min)
        {
            Min=a[i];
            vtmin=i;
        }
    }
    cout<<Max<<" "<<vtmax<<endl;
    cout<<Min<<" "<<vtmin<<endl;
}
int snt(int n)
{
    for(int i=2; i<=sqrt(n); i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return n>1;
}
ll tichlonnhat(int a[],int n)
{
    ll Min1=1e9+1, Min2=1e9+1,Max1=-1e9-1, Max2=-1e9-1;
    for(int i=0; i<n; i++)
    {
        if(a[i]>Max1)
        {
            Max2=Max1;
            Max1=a[i];
        }
        else if(a[i]>Max2)
        {
            Max2=a[i];
        }
        if(a[i]<Min1)
        {
            Min2=Min1;
            Min1=a[i];
        }
        else if(a[i]<Min2)
        {
            Min2=a[i];
        }
    }
    ll res=max(1ll*Max1*Max2,1ll*Min1*Min2);
}
int dx(int a[],int n)
{
    int l=0, r=n-1;
    while(l<r)
    {
        if(a[l] !=a[r])
        {
            return 0;
        }
        ++l;
        --r;
    }
}
ll nhan(int a[],int n )
{
    ll tich=1;
    for(int i=0; i<n; i++)
    {
        tich*=a[i];
        tich=tich % mod;
    }
    return tich;
}
main()
{
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    sln();
    int dem=0;
    for(int i=0; i<n; i++)
    {
        if(snt(a[i]))
        {
            ++dem;
        }
    }
    cout<<dem<<endl;
    cout<<tichlonnhat(a,n)<<endl;
    if(dx(a,n))
    {
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
    cout<<nhan(a,n);
}
