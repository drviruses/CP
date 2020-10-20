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


void virus(){
          vector<string> path;
          while(true){
              string seq;
              cin>>seq;
              if(seq == "exit") break;
              else if(seq[0] == 'p'){
                  cout<<"/ ";
                  for(auto i:path) cout<<i<<"/ ";
                  cout<<endl;
              }
              else{
                    string temp = "";
                    for(auto i=0; i<(ll)seq.size(); i++){
                        if(seq[i] == '/'){
                            if(temp == "..") if(path.size() != 0) path.pop_back();
                            if(temp == "...") path.clear();
                            if(temp.size() != 0 and temp != ".." and temp != "...") path.push_back(temp);
                            temp.clear();
                        }
                        else temp += seq[i];
                    }
                    if(temp == "..") if(path.size() != 0) path.pop_back();
                    if(temp == "...") path.clear();
                    if(temp != ".." and temp != "...")path.push_back(temp);
              }
              fflush(stdin);
          }
          cout<<path.size()<<endl;
          for(auto i:path) cout<<i<<" ";
}


int32_t main(){
    
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
           //cerr << "\n Time: "<<duration.count()<<endl;
        //your code goes here
    }
    return 0;
}