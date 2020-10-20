/*
    @uthor: Amit Kumar
    user: CodeChef: dr_virus_ ; Codeforces,Hackerearth,Hakerrank: dr_virus;
*/
#include <bits/stdc++.h>
using namespace std;
//#include <boost/multiprecision/cpp_int.hpp>
//namespace mp = boost::multiprecision;
//#define ln mp::cpp_int;
#define ll long long
#define ld double
#define endl "\n"

const ll mod = 1e9+7;
const ll inf = 1e18;

ll blk[1000];
ll blk_size;

ll query_sum(ll arr[],ll l, ll r){
    ll sum = 0;
    while(l<r && l%blk_size!=0 && l!=0){
        sum+=arr[l];
        l+=1;
    }
    while(l+blk_size<=r){
        sum += blk[l/blk_size];
        l+=(blk_size);
    }
    while(l<=r){
        sum+=arr[l];
        l+=1;
    }
    return sum;
}


void preprocess(ll arr[],ll n){
    blk_size = sqrt(n);
    ll blk_idx = -1;
    for(auto i=0;i<n;i++){
        if(i%blk_size==0){
            blk_idx+=1;
        }
        blk[blk_idx]+=arr[i];
    }
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
 /* #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif */

    ll t=1;
    //cin>>t;
    while(t--){
         ll n;
         cin>>n;
         ll arr[n];
         for(auto i=0;i<n;i++) cin>>arr[i];
         preprocess(arr,n);
         //for(auto i=0;i<sqrt(n);i++) cout<<blk[i]<<" ";
         ll q;
         cin>>q;
         while(q--){
             ll l,r;
             cin>>l>>r;
             cout<<query_sum(arr,l,r)<<endl;
         }
        //your code goes here
    }
    //cerr<<"Time Elapsed: "<<clock()/(double)CLOCKS_PER_SEC<<endl;
    return 0;
}