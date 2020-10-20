#include<bits/stdc++.h>
#define ll long long

using namespace std;

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll n;
    cin>>n;
    ll height_of_men[n],min_m=INT_MAX,max_m=INT_MIN;
    for(auto i=0;i<n;i++) {
        cin>>height_of_men[i];
        min_m=min(min_m,height_of_men[i]);
        max_m=max(max_m,height_of_men[i]);
    }
    //first location of the max element from left
    ll max_loc;
    for(auto i=0;i<n;i++) {
        if(height_of_men[i]==max_m)
            { max_loc=i; break; }
    }

    //last location of the min element from right
    ll min_loc;
    for(auto i=n-1;i>=0;i--){
        if(height_of_men[i]==min_m){
            min_loc=i; break;
        }
    }
    
    if(max_loc<min_loc)
    cout<<abs(0-max_loc)+abs((n-1)-min_loc);
    else
    cout<<abs(0-max_loc)+abs((n-1)-min_loc)-1;
  
    return 0;
}