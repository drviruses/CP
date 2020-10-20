#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll t;
    cin>>t;
    while (t--)
    {
        ll n,mx=INT_MIN,sum=0;
        cin>>n;
        ll a[n];
        for(size_t i=0;i<n;i++) {
            cin>>a[i];
            mx=max(mx,a[i]);
            sum+=a[i];
        }
        sum-=mx;
        if(sum>mx) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
        
        /* code */
    }
    
    return 0;
}