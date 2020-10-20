#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll n;
    cin>>n;
    ll a[n+1]={0};
    for(size_t i=0;i<n;i++) cin>>a[i];
    for(size_t i=0;i<n;i++){
        if(a[i]>a[i+1]) cout<<a[i]<<" ";
    }
    return 0;
}