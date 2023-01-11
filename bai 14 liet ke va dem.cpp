#include<bits/stdc++.h>
using namespace std;
bool check(int n)
{
    int tmp = n % 10; n /= 10;
    while(n)
    {
        int r = n % 10;
        if(r > tmp) return false;
        tmp = r;
        n /= 10;
    }
    return true;
}
bool cmp(pair<int,int>a , pair<int,int> b)
{
    if(a.second != b.second)
    {
        return a.second > b.second;
    }
    return a.first< b.first;
}
int main()
{
    int x ;
    map<int,int>mp;
    while(cin >> x)
    {
        if(check(x))
        {
            mp[x]++;
        }
    }
    vector<pair<int,int>>v;
    for(auto x : mp)
    {
        v.push_back({x.first , x.second});
    }
    sort(v.begin() , v.end() , cmp);
    for(pair<int,int> x : v)
    {
        cout << x.first << " " << x.second <<endl;
    }
    return 0;
}
