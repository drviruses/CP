/*
    @uthor: Amit Kumar
    user: CodeChef: dr_virus_ ; Codeforces,Hackerearth,Hakerrank: dr_virus;
*/
#include <bits/stdc++.h>
using namespace std;

//#include <boost/multiprecision/cpp_int.hpp>
//namespace mp = boost::multiprecision;
//#define ln mp::cpp_int;
#define ll unsigned long long
#define ld double
#define pp pair<ll,ll>
#define endl "\n"
#define nfrep(a) for(size_t i=0;i<a;i++)
#define fnrep(a,b) for(size_t i=a;i<=b;i++)
#define nbrep(a) for(size_t i=a;i>=0;i--)
#define bnrep(a,b) for(size_t i=a;i>=b;i--)

const ll mod = 1e9+7;
const ll inf = 1e18;

ll bit_count(ll u){
    ll ucount;
    ucount= u -((u>>1)& 033333333333) - ((u>>2)& 011111111111);
    return ((ucount + (ucount>>3))& 030707070707) % 63;
}

ll circlerotate( ll n,ll d){
    if(n & 1) return (n>>1) | (long long)pow((long long)2,d-1);
    else return (n>>1);
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
 /* #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif */
    
    ll t;
    cin>>t;
    while(t--){
         ll A,B;
         cin>>A>>B;
         ll c_B=log2(B)+1,c_A=log2(A)+1;
         ll mx_l=max(c_B,c_A),posn=0;
         ll max_m=A ^ B,itr=1;
         for(auto i=0;i<64;i++){
            // cout<<circlerotate(B,mx_l)<<endl;
             B=circlerotate(B,mx_l);
             ll xor_a= A^B;
             if(xor_a > max_m){
                 max_m=xor_a;
                 posn=itr;
             }
            itr+=1;
         }
         cout<<posn<<" "<<max_m<<endl;
        //your code goes here
    }

    return 0;
}