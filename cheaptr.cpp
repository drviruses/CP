#include<bits/stdc++.h>
#define ll long long

using namespace std;

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll n,m,a,b,mim_m=INT_MAX;
    cin>>n>>m>>a>>b;
    if (m * a <= b)
        cout << n * a ;
    else 
        cout << (n/m) * b + min((n%m) * a, b);

    return 0;
}