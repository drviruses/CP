
#include <bits/stdc++.h>
using namespace std;
#define ll    long long
#define ld    long double
#define ull   unsigned long long
#define endl "\n"

ll maxsum(ll arr[], ll len){
    ll sum = 0;
    for(auto i=0; i<len; i++) sum += arr[i];
    ll limit = (sum << 1) + 1;
    ll dp [len+1][limit];
    for(auto i=0; i<len; i++){
        for(auto j=0; j<limit; j++) dp[i][j] = LLONG_MIN;
    }
    dp[0][sum] = 0;
    for(auto i=0; i<len; i++){
        for(auto j=0; j<limit; j++){
            if((j - arr[i-1]) >= 0 and dp[i-1][j - arr[i-1]] != LLONG_MIN)
                dp[i][j] = max(dp[i][j], dp[i-1][j- arr[j-1]] + arr[i-1]);
            if((j + arr[i-1]) < limit and dp[i-1][j-arr[i-1]] != LLONG_MIN)
                dp[i][j] = max(dp[i][j],dp[i-1][j + arr[i-1]]);
            if(dp[i-1][j] != LLONG_MIN) dp[i][j] = max(dp[i][j],dp[i-1][j]);
        }
    }
    return dp[len][sum];
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll t;
    cin>>t;
    while(t--){
        ll num;
        cin>>num;
        ll arr[num], j = 1;
        for(auto i=0; i<num; i++) arr[i] = j++;
        cout<<maxsum(arr,num)<<endl;
    }

    return 0;
}