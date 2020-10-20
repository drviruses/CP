/*
    @uthor: Amit Kumar
    user: CodeChef: dr_virus_ ; Codeforces,Hackerearth,Hakerrank: dr_virus;
*/
#include <bits/stdc++.h>
using namespace std;

//#include <boost/multiprecision/cpp_int.hpp>
//namespace mp = boost::multiprecision;
//#define ln mp::cpp_int;
#define ll int
#define ld double
#define pp pair<ll,ll>
#define endl "\n"
#define nfrep(a) for(size_t i=0;i<a;i++)
#define fnrep(a,b) for(size_t i=a;i<=b;i++)
#define nbrep(a) for(size_t i=a;i>=0;i--)
#define bnrep(a,b) for(size_t i=a;i>=b;i--)

const ll mod = 1e9+7;
//const ll inf = 1e18;

vector <ll> sum_fct;
map <ll,ll> prime_pow;
vector<ll> power;


void seo(ll n, ll surpass[]){

    vector<bool> prime(n+1,false);
    for(ll i=2;i<=n;i+=2){
        surpass[i]=2;
    }

    for(ll i=3;i<=n;i+=2){
        if(prime[i]==false){
            surpass[i]=i;
            for(ll j=i;i*j<=n;j+=2){
                if(prime[i*j]==false){
                    prime[i*j]=true;
                    surpass[i*j]=i;
                }
            }
        }
    }

}


void prime_fct(ll n){

    ll surpass[n+1];
    seo(n,surpass);
    ll curr=surpass[n],cnt=1;
    while(n>1){
        n/=surpass[n];
        if(curr == surpass[n]){
            cnt+=1;
            continue;
        }
        prime_pow.insert({curr,cnt});
        power.push_back(cnt);
        curr=surpass[n];
        cnt=1;
    }

}

void my_pre_pro(ll n){
    
    for(ll i=0;i<n;i++){
        ll sum=0,prd=1;
        prime_fct(i+1);
        map<ll,ll>::iterator itr;
        for(itr=prime_pow.begin();itr!=prime_pow.end();itr++){
            if((itr->second)>1){
                ll cnt = (itr->second) - 1;
                ll f_term = (ll)pow(itr->first,(ll)2) % mod;
                sum+=( ((( f_term * ( (ll)pow(itr->first,cnt) - 1 ) ) / ( itr->first - 1))) % mod);
                prd*=(itr->first);
            }
        }
        if(power.size()>1 && power[0]>=2){    
            
            sort(power.begin(),power.end());
            ll m_x=power[0];
            if(m_x>=2){
                for(ll j=2;j<=m_x;j++){
                    if(i+1==1000)
                    cout<<((ll)pow(prd,j)%mod)<<" ";
                    sum+=((ll)pow(prd,j)%mod);
                }
            }

        }    
        sum_fct.push_back((sum+1)%mod);
        prime_pow.clear();
        power.clear();
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
    my_pre_pro(10000);
    for(ll i=1;i<10000;i++){
        sum_fct[i]=((sum_fct[i]%mod)+(sum_fct[i-1]%mod))%mod;
    }
    ll t;
    cin>>t;
    while(t--){
           ll num;
           cin>>num;
           cout<<sum_fct[num-1]<<endl;
        //your code goes here
    }

    return 0;
}