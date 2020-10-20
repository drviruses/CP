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
ll inver=998244353;

ll mod_exp(ll x,ll n){
    if(!n) return 1;
    else if(!(n&1)) return mod_exp((x*x)%inver,n/2);
    else return (x * mod_exp((x*x)%inver,(n-1)/2));
}

ll frc_modulo(ll f,ll s){
    ll gcd=__gcd(f,s);
    f/=gcd,s/=gcd;
    ll pw = mod_exp(s,inver-2);
    return ((f%inver)*(pw%inver))%inver;
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
           string s;
           cin>>s;
           if(s.size()==1){
               cout<<"748683265"<<" "<<"748683265"<<" "<<"748683265"<<" 748683265"<<endl;
           }
           else {
                    stack<char> stk;
                    vector<char> vtr;
                    for(auto i=0;i<s.size();i++){
                        if(s[i]=='&' || s[i]=='|' || s[i]=='^'){
                            stk.push(s[i]);
                        }
                        else if(s[i]==')'){
                            char t = stk.top();
                            vtr.push_back(t);
                            stk.pop();
                        }
                    }
                    ll cnt_0=0,cnt_1=0,cnt_a=0,cnt_A=0;
                    if(vtr[0]=='&'){
                        cnt_0=9,cnt_1=1,cnt_a=3,cnt_A=3;
                    }
                    else if(vtr[0]=='|'){
                        cnt_0=1,cnt_1=9,cnt_a=3,cnt_A=3;
                    }
                    else{
                        cnt_0=4,cnt_1=4,cnt_a=4,cnt_A=4;
                    }
                    for(auto i=1;i<vtr.size();i++){
                        if(vtr[i]=='&'){
                            cnt_0=(cnt_0+cnt_1+cnt_a+cnt_A)+cnt_0+(cnt_0+cnt_a)+(cnt_0+cnt_A);
                            cnt_a=cnt_a+(cnt_a+cnt_1);
                            cnt_A=cnt_A+(cnt_A+cnt_1);
                        }
                        else if(vtr[i]='|'){
                            cnt_1=(cnt_0+cnt_1+cnt_a+cnt_A)+cnt_1+(cnt_1+cnt_a)+(cnt_1+cnt_A);
                            cnt_a=cnt_a+(cnt_a + cnt_0);
                            cnt_A=cnt_A+(cnt_a + cnt_0);
                        }
                        else{
                            cnt_0=cnt_0*4;
                            cnt_1=cnt_1*4;
                            cnt_a=cnt_a*4;
                            cnt_A=cnt_A*4;
                        }
                    }
                    ll tot_prb= (ll)pow((ll)4,vtr.size()+1);
                    cout<<frc_modulo(cnt_0,tot_prb)<<" "<<frc_modulo(cnt_1,tot_prb)<<" "<<frc_modulo(cnt_a,tot_prb)<<" "<<frc_modulo(cnt_A,tot_prb)<<endl;
                    }
        //your code goes here
    }

    return 0;
}