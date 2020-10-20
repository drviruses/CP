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

map <ll,ll> prime_pow;
vector<ll> power;
map<ll,ll> mem;
ll prv_sum=0;

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


void prime_fct(ll n,ll *sum_p,ll *prd_p,ll *m_m_p){
    ll surpass[n+1];
    *sum_p=0,*prd_p=1,*m_m_p=INT_MAX;
    seo(n,surpass);
    ll curr=surpass[n],cnt=1;
    while(n>1){
        n/=surpass[n];
        if(curr == surpass[n]){
            cnt+=1;
            continue;
        }
        prime_pow.insert({curr,cnt});
        if(cnt>1){
            ll till = cnt-1; 
            ll f_term = (ll)pow(curr,(ll)2);
            (*sum_p)+= ((( f_term * ( (ll)pow(curr,till) - 1 ) ) / ( curr- 1))) ;
            (*prd_p)*=curr;
        }
        *m_m_p=min(*m_m_p,cnt);
        power.push_back(cnt);
        curr=surpass[n];
        cnt=1;
    }

}



ll my_pre_pro(ll ini,ll num){

    for(ll i=ini;i<num;i++){
        ll sum=0,prd=1,m_n;
        prime_fct(i+1,&sum,&prd,&m_n);

        if(power.size()>1 && prd!=1){
                if(m_n>=2 ){
                    ll till = m_n-1;
                    ll f_term = (ll)pow((prd),2);
                    (sum)+=(((f_term * ((ll)pow(prd,till)-1)) / (prd -1 )));
                }
        }

        prv_sum=((prv_sum)+((sum+1)))%mod;
        //cout<<i+1<<" "<<prv_sum<<endl;
        mem.insert({i+1,(prv_sum%mod)});
        prime_pow.clear();
        power.clear();
    }
    return prv_sum;
}
void my_pre_pro_long(ll ini,ll fnl){
    for(ll i=ini;i<=fnl;i++){
        ll sum = 0,prd=1, cnt=0;
        while(!(i%2)){
            i>>=1;
            cnt+=1;
        }
        if(cnt){
            prd*=2;
            sum+=cnt;
        }
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
    mem.insert({1,1});
    
    ll t;
    cin>>t;
    while(t--){
           ll num;
           cin>>num;
           ll ini=1, fnl=num;

           if(!mem.empty()){

               map<ll,ll>::reverse_iterator str=mem.rbegin();
               if(num<=(str->first)){
                   auto res = mem.find(num);
                   cout<<(res->second)%mod<<endl;
                }
                else{
                    map<ll,ll>::reverse_iterator itr=mem.rbegin();
                    ini=itr->first;
                    prv_sum=itr->second;
                    cout<<(my_pre_pro_long(ini,fnl))%mod<<endl;
                }
                
            }
        //your code goes here
    }

    return 0;
}