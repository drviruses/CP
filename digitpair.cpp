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
        vector<ll> arr(len);
        for(auto &i:arr) cin>>i;
        vector<string> rule;
        for(auto i:arr){
            string num = to_string(i);
            sort(num.rbegin(),num.rend());
            ll cal = ((num[0] - '0')*11 + (num[num.size()-1] - '0')*7);
            string st_cal = to_string(cal);
            string act_cal;
            if(st_cal.size() >= 3){
                
            }
            else act_cal = st_cal;
            act_cal.push_back(st_cal[st_cal.size()-2]),act_cal.push_back(st_cal[st_cal.size()-1]);
            rule.push_back(act_cal);
        }
        ll cnt = 0;
        vector<set<string>> mat_ev(10), mat_od(10);
        for(auto i=0; i<len; i++){
            if(i&1){
                mat_od[(rule[i][0]-'0')].insert(rule[i]);
            }
            else{
                mat_ev[(rule[i][0]-'0')].insert(rule[i]);
            }
        }
        for(auto i=0; i<10; i++){
            if(mat_ev[i].size()>1) cnt += mat_ev[i].size();
            if(mat_od[i].size()>1) cnt += mat_od[i].size();
        }
        cout<<cnt;
}


int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
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