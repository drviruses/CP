#include<bits/stdc++.h>
#define ll long long

using namespace std;

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll max_toy,varty,min_m=INT_MAX;
    map<int ,int> m;
    cin>>max_toy>>varty;
    ll pricing[varty];
    for(auto i=0;i<varty;i++) cin>>pricing[i];
    sort(pricing,pricing+varty);
    for(auto i=0;i<=varty-max_toy;i++){
        min_m=min(min_m,abs(pricing[i]-pricing[i+max_toy-1]));
    }
    cout<<min_m;
    return 0;
}