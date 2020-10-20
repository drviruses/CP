#include<bits/stdc++.h>
#define ll long long
#define ld long double

using namespace std;

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll max_lmt;
    cin>>max_lmt;
    ll no_even,no_odd;
    if(!(max_lmt & 1)){
        no_even=max_lmt/2;
        no_odd=max_lmt/2;
    }
    else{
        no_even=max_lmt/2;
        no_odd=max_lmt/2+1;
    }
    ll pos;
    cin>>pos;
    if(pos>no_odd) cout<<2*(pos-no_odd);
    else cout<<2*(pos-1)+1;
    return 0;
}