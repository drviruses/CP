#include<bits/stdc++.h>
#define ll long long

using namespace std;

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    //cout<<(p/np)<<" "<<(c*d)<<" "<<((k*l)/n)<<endl;
    cout<<min(min((p/np),(c*d)),((k*l)/n))/n;
    return 0;
}