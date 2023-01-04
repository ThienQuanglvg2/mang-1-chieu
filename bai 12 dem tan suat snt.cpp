#include<bits/stdc++.h>
using namespace std;
bool snt(int n)
{
    for(int i=2; i<=sqrt(n); i++)
    {
        if(n%i==0)
            return false;
    }
    return n>1;
}
main()
{
    map<int, int>mp;
    vector<int>v;

    /*int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<n; i++)
    {
        if(snt(a[i]))
        {
            mp[a[i]]++;
            v.push_back(a[i]);
        }
    }
    for(int i=0; i<n; i++)
    {
        if(mp[a[i]] !=0)
        {
            cout<<a[i]<<" "<<mp[a[i]]<<endl;
            mp[a[i]]=0;
        }

    }*/
    int x;
while(cin>>x){
        if(snt(x)){
            mp[x]++;
            v.push_back(x);
        }
}
    for(int x:v){
        if(mp[x] !=0){
            cout<<x<<" "<<mp[x]<<endl;
            mp[x]=0;
        }

}
}
