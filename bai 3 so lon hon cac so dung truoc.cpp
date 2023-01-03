#include<bits/stdc++.h>
using namespace std;
main(){
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
int Max1=-1e9-1, Max2=-1e9-1;
for(int i=0;i<n;i++){
    if(a[i]>Max1){
        cout<<a[i]<<" ";
    }
    if(a[i]>Max1){
        Max1=a[i];
    }
    }

}
