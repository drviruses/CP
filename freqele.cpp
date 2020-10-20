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

unordered_map<int,vector<int>> cnt;

ll freq(ll arr[],ll l,ll r,ll ele){
    ll left = lower_bound(cnt[ele].begin(),cnt[ele].end(),l) - cnt[ele].begin();
    ll right = upper_bound(cnt[ele].begin(),cnt[ele].end(),r) - cnt[ele].begin();
    return right - left;
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
         for(auto i=0;i<n;i++) {cin>>arr[i]; cnt[arr[i]].push_back(i);}
         ll q;
         cin>>q;
         while(q--){
             ll l,r,ele;
             cin>>l>>r>>ele;
             cout<<freq(arr,l,r,ele)<<endl;
         }
        //your code goes here
    }
    //cerr<<"Time Elapsed: "<<clock()/(double)CLOCKS_PER_SEC<<endl;
    return 0;
}