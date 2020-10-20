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

vector<string> ans;

string retstr_fir(ll cnt_all[], char till, string b){
    string ans = "";
    for(auto i=0; i<(till - 'a'); i++){
        for(auto j=0; j<cnt_all[i]; j++) ans += char('a'+i);
    }
    ans += b;
    for(auto i=(till - 'a'); i<26; i++){
        for(auto j=0; j<cnt_all[i]; j++) ans += char('a'+i);
    }
    return ans;
}

string retstr_end(ll cnt_all[], char till, string b){
    string ans = "";
    for(auto i=0; i<=(till - 'a'); i++){
        for(auto j=0; j<cnt_all[i]; j++) ans += char('a'+i);
    }
    ans += b;
    for(auto i=(till - 'a')+1; i<26; i++){
        for(auto j=0; j<cnt_all[i]; j++) ans += char('a'+i);
    }
    return ans;
}

void virus(){
    ans.clear();
    string a,b;
    cin>>a>>b;
    ll cnt_all[26] = {};
    set<char> uniq_b;
    for(auto i:a) cnt_all[i-'a']++;
    for(auto i:b) cnt_all[i-'a']--, uniq_b.insert(i);
    for(auto i:uniq_b){
        ans.push_back(retstr_fir(cnt_all,i,b));
        ans.push_back(retstr_end(cnt_all,i,b));
    }
    cout<<*min_element(ans.begin(),ans.end())<<endl;
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