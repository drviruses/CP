#include<bits/stdc++.h>
#define ll long long

using namespace std;

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll steps,m;
    cin>>steps>>m;
    ll  lower_lim=ceil(float((float)steps/2));
    //cout<<lower_lim<<endl;
    if(m>steps) cout<<"-1";
    else
    cout<<m* ceil((float)lower_lim/(float)m);
    return 0;
}