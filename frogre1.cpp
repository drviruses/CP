#include<bits/stdc++.h>
#define ll long long

using namespace std;

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll t;
    cin>>t;
    while (t--)
    {
        ll n;
        cin>>n;
        ll height_tower[n],frog_dp[n];
        for(auto i=0;i<n;i++) cin>>height_tower[i];

        //goal is to find the minimum goal to the last tower
        //the only jumps that th frog can do is k+1 and k+2
        //so it's a DP problem
        frog_dp[0]=0;
        frog_dp[1]=abs(height_tower[1]-height_tower[0]);

        for(auto i=2;i<n;i++){
            frog_dp[i]=min(frog_dp[i-1]+abs(height_tower[i]-height_tower[i-1]),frog_dp[i-2]+abs(height_tower[i]-height_tower[i-2]));
        }
        cout<<frog_dp[n-1]<<endl;
        /* code */
    }
    
    return 0;
}