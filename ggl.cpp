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
#define google(x) cout<<"\Case #"<<x<<"\:"
#define pi 3.14159265358979323846264338327950L

const ll mod = 1e9+7;
const ll inf = 1e18;

ll popcount(ll num){
    num = num - ((num >> 1) & 0x55555555);
    num = (num & 0x33333333) + ((num >> 2) & 0x33333333);
    return ((num + (num >> 4) & 0xF0F0F0F) * 0x1010101) >> 24;
}


void virus(){
        set<pair<ll,ll>> pairs;
        ll p,q,r,a,b,c;
        cin>>p>>q>>r>>a>>b>>c;
        if(p != a) pairs.insert({p,a});
        if(q != b) pairs.insert({q,b});
        if(r != c) pairs.insert({r,c});

        if(pairs.size() == 0) cout<<"0\n";
        else if(pairs.size() == 1) cout<<"1\n";
        else if(pairs.size() == 2){
            auto itr = pairs.begin();
            ll p,q,a,b;
            p = itr->first, a = itr->second;
            itr++;
            q = itr->first, b = itr->second;
            if((a - p) == (b - q)) cout<<"1\n";
            else if(p != 0 and q != 0 and (a%p == 0) and (b%q == 0) and (a/p == b/q)) cout<<"1\n";
            else cout<<"2\n";
        }
        else{
            auto itr = pairs.begin();
            ll p,q,r,a,b,c;
            p = itr->first, a = itr->second;
            itr++;
            q = itr->first, b = itr->second;
            itr++;
        
            r = itr->first, c = itr->second;
            if((a - p) == (b - q) and ((b - q) == (c - r))) {cout<<"1\n"; return;}
            if(p != 0 and q != 0 and r != 0 and (a%p == 0) and (b%q == 0) and (c%r == 0) and (a/p == b/q) and (b/q == c/r)) {cout<<"1\n"; return;}
            ll cnt = 0,temp_p,temp_a,temp_q,temp_b;
            if((q - p) != 0 and (b - a)%(q - p) == 0) cnt += 1, temp_p = p, temp_a = a, temp_q = q, temp_b = b;
            if((r - q) != 0 and (c - b)%(r - q) == 0) cnt += 1, temp_p = r, temp_a = c, temp_q = q, temp_b = b;
            if((r - p) != 0 and (c - a)%(r - p) == 0) cnt += 1, temp_p = p, temp_a = a, temp_q = r, temp_b = c;
            if(cnt == 0){cout<<"3\n"; return;}
            if(cnt == 2 or cnt == 3){cout<<"2\n"; return;}
            else{
                if(((temp_a - temp_p) == (temp_b - temp_q))){cout<<"2\n"; return;}
                if( temp_p != 0 and temp_q != 0 and (temp_a%temp_p == 0) and (temp_b%temp_q == 0) and (temp_a/temp_p == temp_b/temp_q)){cout<<"2\n"; return;}
                cout<<"3\n";
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