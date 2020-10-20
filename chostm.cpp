#include<bits/stdc++.h>
#define ll long long

using namespace std;

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll std,k,c_5=0;
    cin>>std>>k;
    ll times[std];
    for(auto i=0;i<std;i++){
        cin>>times[i];
        times[i]+=k;
        if(times[i]<=5) c_5+=1;
    }
    cout<<c_5/3;
    return 0;
}