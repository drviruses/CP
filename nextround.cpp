#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    ll n,k;
    cin>>n>>k;
    ll arr[n];
    for(auto i=0;i<n;i++) cin>>arr[i];
    ll compr=arr[k-1],j;
    
    for(j=0;j<n;j++) {
        if(arr[j]!=0){
        if(arr[j]>=compr)
        continue;
        else
        break;
        }
        else break;
    }
    
    cout<<j;
    return 0;
}