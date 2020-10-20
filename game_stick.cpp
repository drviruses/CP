#include<bits/stdc++.h>
#define ll long long

using namespace std;

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll row,coll;
    cin>>row>>coll;
    ll min_time=min(row,coll);

    if(min_time%2==0) cout<<"Malvika";
    else cout<<"Akshat";
    
    return 0;
}