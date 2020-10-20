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
#define all(vec) vec.begin(),vec.end()
#define endl "\n"
ll google_itr = 1;
#define google(x) cout<<"Case #"<<x<<":"
#define pi 3.14159265358979323846264338327950L

const ll mod = 1e9+7;
const ll inf = 1e18;

string myfun(string &s){
    ll len =(ll)s.size();

    if(len == 1){
        if(s[0] == 'a') return "IMPOSSIBLE";
        else return "a";
    }
    
    if(len&1){
        string del = s;
        del.erase(del.begin()+((len - 1)>>1));
        ll act = max_element(del.begin(),del.end()) - del.begin();
        if(del[act] != 'a') {
            s[act] = 'a';
            return s;
        }
    }
    else{
        ll pos = max_element(s.begin(),s.end()) - s.begin(); 
        if(s[pos] != 'a'){
             s[pos] = 'a';
            return s;
        }
    }
    return "IMPOSSIBLE";
}

void virus(){
          string s;
          cin>>s;
          cout<<myfun(s);
}


int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
  /*#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif*/

    ll t = 1;
    //cin>>t;
    while(t--){
           auto start = high_resolution_clock::now();
           virus();
           auto stop = high_resolution_clock::now();
           auto duration = duration_cast<seconds>(stop - start);
           cerr << "\n Time: "<<duration.count()<<endl;
        //your code goes here
    }
    return 0;
}