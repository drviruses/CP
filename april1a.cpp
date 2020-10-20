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
#define pp pair<ll,ll>
#define endl "\n"
#define nfrep(a) for(size_t i=0;i<a;i++)
#define fnrep(a,b) for(size_t i=a;i<=b;i++)
#define nbrep(a) for(size_t i=a;i>=0;i--)
#define bnrep(a,b) for(size_t i=a;i>=b;i--)

const ll mod = 1e9+7;
const ll inf = 1e18;

void is_factor(ll n,ll k){
    vector<ll> p_virus;
    while (n%2==0)
    {
        p_virus.push_back(2);
        n/=2;
        /* code */
    }
    for(ll i=3;i*i<=n;i+=2){
        while (n%i==0)
        {
            n=n/i;
            p_virus.push_back(i);
            /* code */
        }
        
    }
    if(n>2)
        p_virus.push_back(n);

    if(p_virus.size()<k) {cout<<"0"<<endl;return;} 
    else {cout<<"1"<<endl; return;}   
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
  #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif 

    ll t;
    cin>>t;
    while(t--){
           ll n,k;
           cin>>n>>k;
           is_factor(n,k);
        //your code goes here
    }

    return 0;
}