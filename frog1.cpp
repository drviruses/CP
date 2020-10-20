#include<bits/stdc++.h>
#define ll long long

using namespace std;
ll sum;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    ll n;
    cin>>n;
    ll height[n];
    for(auto i=0;i<n;i++) cin>>height[i];
    ll dp[n];
    dp[0]=0;
    dp[1]=abs(height[0]-height[1]);
    for(auto i=2;i<n;i++){
        dp[i]=min(dp[i-1]+abs(height[i]-height[i-1]),dp[i-2]+abs(height[i]-height[i-2]));
    }
    cout<<dp[n-1]<<endl;
    return 0;
}