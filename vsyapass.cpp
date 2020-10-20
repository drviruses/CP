/*
    @uthor: Amit Kumar
    user -->GitHub: drviruses ; CodeChef: dr_virus_ ; Codeforces,AtCoder,Hackerearth,Hakerrank: dr_virus;
*/
#include <bits/stdc++.h>
#include <chrono>
using namespace std;
using namespace std::chrono;
//#include <boost/multiprecision/cpp_int.hpp>
//namespace mp = boost::multiprecision;
//#define ln mp::cpp_int;
#define ll    long long
#define ld    long double
#define ull   unsigned long long
#define endl "\n"
ll google_itr = 1;
#define google(x) cout<<"Case #"<<x<<":"
#define pi 3.14159265358979323846264338327950L

const ll mod = 1e9+7;
const ll inf = 1e18;

ll popcount(ll num){
    num = num - ((num >> 1) & 0x55555555);
    num = (num & 0x33333333) + ((num >> 2) & 0x33333333);
    return ((num + (num >> 4) & 0xF0F0F0F) * 0x1010101) >> 24;
}

vector<pair<ll,ll>> prime_pow;
void sieveOfEratosthenes(ll N, ll s[]){ 
    vector <bool> prime(N+1, false); 
    for (ll i=2; i<=N; i+=2) 
        s[i] = 2;  
    for (ll i=3; i<=N; i+=2) { 
        if (prime[i] == false) {  
            s[i] = i;  
            for (ll j=i; j*i<=N; j+=2) { 
                if (prime[i*j] == false) { 
                    prime[i*j] = true; 
                    s[i*j] = i; 
                } 
            } 
        } 
    } 
} 
void primefactor(ll N){ 
    ll s[N+1];  
    sieveOfEratosthenes(N, s); 
    ll curr = s[N], cnt = 1;    
    while (N > 1){ 
        N /= s[N];  
        if (curr == s[N]) { 
            cnt++; 
            continue; 
        } 
        prime_pow.push_back({curr,cnt});  
        curr = s[N], cnt = 1; 
    } 
}

bool mycheck(string temp){
    ll up = 0, lo = 0, dig = 0;
    for(auto i:temp){
        if(isupper(i)) up += 1;
        if(islower(i)) lo += 1;
        if(isdigit(i)) dig += 1;
    }
    if(up and lo and dig) return true;
    return false;
}

void virus(){
       string seq;
       cin>>seq;
       if(mycheck(seq)) cout<<seq<<endl;
       else{
           for(auto i=0; i<seq.size(); i++){
               string temp = seq;
               temp[i] = '1';
               if(mycheck(temp)) { cout<<temp<<endl; return; }
               temp[i] = 'a';
               if(mycheck(temp)) { cout<<temp<<endl; return; }
               temp[i] = 'A';
               if(mycheck(temp)) { cout<<temp<<endl; return; }
           }
           if(isupper(seq[2])){
               seq[0] = '1', seq[1] = 'a';
               cout<<seq<<endl; return;
           }
           if(islower(seq[2])){
               seq[0] = '1', seq[1] = 'A';
               cout<<seq<<endl; return;
           }
           if(isdigit(seq[2])){
               seq[0] = 'a', seq[1] = 'A';
               cout<<seq<<endl; return;
           }
       }
}


int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
  /*#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif*/

    ll t;
    cin>>t;
    while(t--){
           auto start = high_resolution_clock::now();
           virus();
           auto stop = high_resolution_clock::now();
           auto duration = duration_cast<seconds>(stop - start);
         //cout << "Time: "<<duration.count()<<endl;
        //your code goes here
    }
    return 0;
}