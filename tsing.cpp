/*
	@uthor: Amit Kumar
	user: CodeChef: dr_virus_ ; Codeforces,Hackerearth,Hakerrank: dr_virus;
*/
#include <bits/stdc++.h>
#include<fstream>
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

void seo(ll n, ll surpass_1[]){

    vector<bool> prime(n+1,false);
    for(ll i=2;i<=n;i+=2){
        surpass_1[i]=2;
    }

    for(ll i=3;i<=n;i+=2){
        if(prime[i]==false){
            surpass_1[i]=i;
            for(ll j=i;i*j<=n;j+=2){
                if(prime[i*j]==false){
                    prime[i*j]=true;
                    surpass_1[i*j]=i;
                }
            }
        }
    }
    return;
}

ll my_pre_pro(ll n){
    ll result=1;
    ll surpass_1[n+1];
    seo(n,surpass_1);
    ll curr=surpass_1[n],cnt=1;
    while(n>1){
        n/=surpass_1[n];
        if(curr == surpass_1[n]){
            cnt+=1;
            continue;
        }
        result=((result%mod)*((cnt+1)%mod)%mod);
        curr=surpass_1[n];
        cnt=1;
    }
    return result%mod;
}


int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	ofstream f0;
	f0.open("prd.txt");
 /* #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif */
	for(ll i=0;i<1000000;i++){
		f0<<my_pre_pro(i+1)<<",";
	}


	return 0;
}