#include<bits/stdc++.h>
using namespace std;
main()
{
    int n;
    cin>>n;
    map<int,int>mp;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        cnt[a[i]]++;
        mp[a[i]]++;
    }
    for(auto it:mp)
    {
        cout<<it.first<<" "<<it.second<<endl;
    }
    cout<<endl;
    for(int i=0; i<n; i++)
    {
        if(mp[a[i]])
        {
            cout<<a[i]<<" "<<mp[a[i]]<<endl;
            mp[a[i]]=0;
        }
    }
    mp.clear();
}
