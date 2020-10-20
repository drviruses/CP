#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll t;
    cin>>t;
    while(t--){
        ll a,b,c,n;
        cin>>a>>b>>c>>n;
        ll m=max(a,max(b,c));
        ll mi=(m-a)+(m-b)+(m-c);
        if(n>=mi && (n-mi)%3==0 ) cout<<"YES\n";
        else cout<<"NO\n";

    }
    return 0;
}