#include<bits/stdc++.h>
using namespace std;
const int mod=1e9+7;
main()
{
  int n; cin>>n;
  vector<int>a(n);
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  sort(a.begin(), a.end());
  int Min=mod;
  for(int i=1;i<n;i++){
    int tam=a[i]-a[i-1];
    if(tam<Min){
        Min=tam;
    }
  }
  int ans=0;
  for(int i=1;i<n;i++){
        int tam=a[i] - a[i-1];
    if(tam==Min)
    ++ans;
  }
  cout<<Min<<" "<<ans;
}
