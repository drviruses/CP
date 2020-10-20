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
#define int    long long
#define ll long long
#define ld    long double
#define ull   unsigned long long
#define endl "\n"
ll google_itr = 1;
#define google(x) cout<<"Case #"<<x<<":"
#define pi 3.14159265358979323846264338327950L


ll popcount(ll num){
    num = num - ((num >> 1) & 0x55555555);
    num = (num & 0x33333333) + ((num >> 2) & 0x33333333);
    return ((num + (num >> 4) & 0xF0F0F0F) * 0x1010101) >> 24;
}
const ll mx = 1e6+1;
vector <int> primes; 
  

void sieve() 
{ 
    bool isComposite[mx] = {false}; 
    for (int i=2; i*i<=mx; i++) 
    { 
        if (isComposite[i]==false) 
            for (int j=2; j*i<=mx; j++) 
                isComposite[i*j] = true; 
    } 

    for (int i=2; i<=mx; i++) 
        if (isComposite[i]==false) 
            primes.push_back(i); 
} 
  
long long LCM(int n) 
{ 
    long long lcm = 1; 
    for (int i=0; i<primes.size() && primes[i]<=n; i++) 
    { 
        int pp = primes[i]; 
        while (pp*primes[i] <= n) 
            pp = pp *primes[i]; 

        lcm *= pp; 
    } 
    return lcm; 
} 


ll glb;


ll dp[mx];

void sieveOfEratosthenes(int N, int s[]) 
{ 
    vector <bool> prime(N+1, false); 
  
    for (int i=2; i<=N; i+=2) 
        s[i] = 2; 
  
    for (int i=3; i<=N; i+=2) 
    { 
        if (prime[i] == false) 
        { 
            s[i] = i; 
  
            for (int j=i; j*i<=N; j+=2) 
            { 
                if (prime[i*j] == false) 
                { 
                    prime[i*j] = true; 
  
                    s[i*j] = i; 
                } 
            } 
        } 
    } 
} 
  
void generatePrimeFactors(int N) 
{  
    int s[N+1]; 
  
    sieveOfEratosthenes(N, s); 
  
    int curr = s[N]; 
    int cnt = 1;   
    while (N > 1) 
    { 
        N /= s[N]; 
        if (curr == s[N]) 
        { 
            cnt++; 
            continue; 
        } 
  
        glb += cnt;
        curr = s[N]; 
        cnt = 1; 
    } 
} 

void virus(){
          glb = 0;
          int len;
          cin>>len;
          int lcm = dp[len];
          //cout<<lcm<<endl;
          if((len*((len-1)/__gcd(len,len-1))) == lcm) cout<<len-1<<"\n";
          else{
              lcm /= (len*(len-1));
              generatePrimeFactors(lcm);
              cout<<1+(glb-1)+1+(len-2)<<endl;
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
    sieve();
    dp[0] = 0, dp[1] = 1;
    for(auto i=2; i<=mx; i++) dp[i] = LCM(i);
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