#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b){
if(b==0) return a;
else return gcd(b,a%b);
}
main(){
int n;cin>>n;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
int dem=0;
for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if(gcd(a[i],a[j])==1){
          ++dem;
        }
    }
}
cout<<dem;
}
