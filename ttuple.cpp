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
        //cout<<pairs.size()<<endl;
        if(pairs.size() == 0) {cout<<"0\n"; return;}
        else if(pairs.size() == 1) {cout<<"1\n"; return;}
        else if(pairs.size() == 2){
            ll p,q,a,b;
            auto itr = pairs.begin();
            p = itr->first, a = itr->second;
            itr ++;
            q = itr->first, b = itr->second;
            if(((p != 0 and q != 0) and ((b*p) == (a*q))) or ((a-p) == (b-q))) {cout<<"1\n"; return;}
            else {cout<<"2\n"; return;}
        }
        else{
            
            ll p,q,r,a,b,c;
            auto itr = pairs.begin();
            p = itr->first, a = itr->second;
            itr ++;
            q = itr->first, b = itr->second;
            itr ++;
            r = itr->first, c = itr->second;
            set<ll> add;
            vector<ll> add_arr;
            add.insert((a-p)),add_arr.push_back((a-p)),add_arr.push_back((b-q)),add_arr.push_back((c-r)),add.insert((b-q)),add.insert((c-r));
            set<ll> mul;
            vector<ll> mul_arr;
            ll mul_poss = 0;
            if(p != 0) if(a%p == 0) mul.insert(a/p), mul_poss += 1, mul_arr.push_back(a/p);  
            if(q != 0) if(b%q == 0) mul.insert(b/q), mul_poss += 1, mul_arr.push_back(b/q);
            if(r != 0) if(c%r == 0) mul.insert(c/r), mul_poss += 1, mul_arr.push_back(c/r); 
            sort(add_arr.begin(),add_arr.end());
            if(add_arr[0] == add_arr[1] and add_arr[1] == add_arr[2]){cout<<"1\n"; return;}
            if(add_arr[1] == add_arr[2] or add_arr[0] == add_arr[1]){cout<<"2\n"; return;}
            if((add_arr[2] - add_arr[1]) == add_arr[0]){ cout<<"2\n"; return;} 
            if(add.size() == 1 or (mul.size() == 1 and mul_poss == 3)){cout<<"1\n"; return;}
            if(mul_poss == 1){
                if((p != 0) and((a%p==0) and ((b-q)==(c-r)))) {cout<<"2\n"; return;}
                if((q != 0) and((b%q==0) and ((a-p)==(c-r)))) {cout<<"2\n"; return;}
                if((r != 0) and((c%r==0) and ((a-p)==(b-q)))) {cout<<"2\n"; return;}
            }
            if(mul_poss == 2){
                if((p != 0 and q != 0) and(a%p==0 and b%q==0) and (a/p == b/q)){cout<<"2\n"; return;}
                if((p != 0 and r != 0) and(a%p==0 and c%r==0) and (a/p == c/r)){cout<<"2\n"; return;}
                if((q != 0 and r != 0) and(b%q==0 and c%r==0) and (b/q == c/r)){cout<<"2\n"; return;}
            }
            if(mul_poss == 3){
                sort(mul_arr.begin(),mul_arr.end());
                if(mul_arr[0] == mul_arr[1] and mul_arr[1] == mul_arr[2]){cout<<"1\n"; return;}
                if(mul_arr[0] == mul_arr[1] or mul_arr[1] == mul_arr[2]){cout<<"2\n"; return;}
                if((mul_arr[1]!=0) and (mul_arr[2]%mul_arr[1] == 0) and mul_arr[2]/mul_arr[1] == mul_arr[0]){cout<<"2\n"; return;}
            }

            if((b-a)!=0 and (c-b)!=0 and (a-c)!=0){
                ld x_1, x_2, x_3;
                (p == 0)? x_1 = p : x_1 = ((ld)((a*q) - (b*p))/(ld)(b - a));
                (q == 0)? x_2 = q : x_2 = ((ld)((b*r) - (q*c))/(ld)(c - b));
                (r == 0)? x_3 = r : x_3 = ((ld)((c*p) - (a*r))/(ld)(a - c));
                if((x_1 == x_2) and (x_2 == x_3)) {
                   cout<<"2\n"; return;
                }
            }
            if((q-p)!=0 and (r-q)!=0 and (r-p)!=0){
                ld y_1 = ((ld)((a*q) - (b*p))/(ld)(q - r));
                ld y_2 = ((ld)((r*b) - (q*c))/(ld)(r - q));
                ld y_3 = ((ld)((a*r) - (c*p))/(ld)(r - p));
                if((y_1 == y_2) and (y_2 == y_3)){
                    cout<<"2\n"; return;
                }
                
            }
             
        }
        cout<<"3\n";
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