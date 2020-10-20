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

ll mod = 1e9+7;
const ll inf = 1e18;

map<ll,ll> gl_map;
vector<ll> f_k;
vector<ll> comm;

void soe(ll n, ll surpass[]){
    vector<bool> prime(n+1,false);
    for(ll i=2;i<=n;i+=2){
        surpass[i]=2;
    }
    for(auto i=3;i<=n;i+=2){
        if(prime[i]==false){
            surpass[i]=i;
            for(ll j=i;j*i<=n;j+=2){
                if(prime[i*j]==false){
                    prime[i*j]=true;
                    surpass[j*i]=i;
                }
            }
        }
    }
    prime.clear();
}

void primefct(ll n){
    ll surpass[n+1];
    soe(n,surpass);
    ll curr=surpass[n],cnt=1;
    while (n>1)
    {
        n/=surpass[n];
        if(curr == surpass[n]){
            cnt+=1;
            continue;
        }
        gl_map.insert({curr,cnt});
        comm.push_back(cnt);
        cout<< cnt<<" ";
        curr=surpass[n];
        cnt=1;
        /* code */
    }
}

void my_pre_fun(ll n){

        for(ll i=0;i<n;i++){
        ll sum=0,prd=1;
        bool entr=false;
        primefct(i+1);
        sort(comm.begin(),comm.end());
        ll m_x=comm[0];
        map<ll,ll>::iterator itr;
        for(itr=gl_map.begin();itr!=gl_map.end();itr++){
            ll cnt;
            if(itr->second>1){
            entr=true;
            cnt = (itr->second - 1);
            ll first_term = (ll)pow(itr->first,(ll)2) % mod;
            sum+=( ((( first_term * ( (ll)pow(itr->first,cnt) - 1 ) ) / ( itr->first - 1))) % mod);
            }
            prd*=itr->first;
        }
        if(m_x>=2){
            for(ll i=2;i<=m_x;i++)
            sum+=((ll)pow(prd,i)%mod);
        }
        f_k.push_back((sum+1)%mod);
        gl_map.clear();
        comm.clear();
    }
}


void pre(){
    for(ll i=0;i<1000000;i++){
        my_pre_fun(i+1);
    }
    //commulative sum
    for(ll i=1;i<1000000;i++){
        f_k[i]=(f_k[i]%mod)+(f_k[i-1]%mod);
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
   // pre();
    /* ll t;
    cin>>t;
    while(t--){
           ll num;
           cin>>num;
           cout<<f_k[num-1]-f_k[num-2]<<endl;
           f_k.clear();
           gl_map.clear();
           comm.clear();
        //your code goes here
    }
 */
primefct(1);
    return 0;
}