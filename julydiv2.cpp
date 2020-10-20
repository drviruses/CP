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

vector<pair<ll,ll>> factor_arr;

void myfactor(ll num){ 
    ll count = 0;   
    while (!(num % 2)) { 
        num >>= 1; count++; 
    }  
    if (count) factor_arr.push_back({2,count}); 
    for (auto i = 3; i <= sqrt(num); i += 2) { 
        count = 0; 
        while (num % i == 0) { 
            count++; 
            num /= i; 
        } 
        if (count) factor_arr.push_back({i,count}); 
    } 
    if (num > 2) factor_arr.push_back({num,1});
}

ll sum (ll n){
    ll s = 0;
    while(n!=0){

        s+=n%10; n/=10;
    }
    return s;
}
void virus(){
   ll n;
    cin>>n;
    vector<ll> a(n);
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
    vector<ll> b(n);
    ll x=0;
    ll l=1;
    map<ll,ll> mp;
    for(ll i=0;i<n;i++)
    {
        if(i==0)
        {
            mp[a[i]]=1;
            b[i]=a[i];
            x=max(x,a[i]);
        }
        else if((i+1)>a[i])
        {
            cout<<-1<<endl;
            goto z1;
        }
        else
        {
            if(a[i]<x)
            {
                cout<<-1<<endl;
                goto z1;
            }
            if(mp[a[i]]==0)
            {
                b[i]=a[i];
                mp[a[i]]=1;
            }
            else
            {
                while(mp[l]>0)
                {
                    l++;
                }
                //cout<<l<<endl;
                mp[l]=1;
                b[i]=l;
            }
        }
        x=max(x,a[i]);
    }
    x=0;
    for(ll i=0;i<n;i++)
    {
        x=max(x,b[i]);
        if(x!=a[i])
        {
            cout<<-1<<endl;
            goto z1;
        }
    }
    for(ll i=0;i<n;i++)
    {
        cout<<b[i]<<" ";
    }
    cout<<endl;
    z1:;
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