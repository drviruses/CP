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

void virus(){
    ll len;
    cin>>len;
    cin.ignore();
    ll mn = LLONG_MIN;
    bool ans = true;
    unordered_map<string,ll> mymap;
    for(auto j=0; j<len; j++){
        string s;
        getline(cin,s);
        //cout<<s<<endl;
        if(s[0] == '-'){
            string t ="";
            for(auto i=3; i<s.size(); i++) t+=s[i];
            mymap[t] = 1;
            continue;
        }
        else{
            vector<string> tot;
            string t = "";
            ll i = 0;
            for(i=0; i<(ll)s.size(); i++){
                if(s[i] != ' ' and s[i] != '>' and s[i] != '-') t += s[i];
                if(s[i] == '-' or s[i] == '>') break;
                if(s[i] == ' '){
                    tot.push_back(t);
                    t.clear();
                }
            }
            //cout<<i<<endl;
            i += 3;
            t.clear();
            for(;i<(ll)s.size(); i++) t += s[i];
            mymap[t] = 1;
            
            for(auto i:tot){
                if(mymap[i] == 0 and ans){
                    ans = false;
                    mn = min(mn,j+1LL);
                    break;
                }
            }
        }
    }
        if(ans) cout<<"correct\n";
        else cout<<mn<<endl;
}


int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    
  /*#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif*/

    ll t=1;
    //cin>>t;
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