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
#define ld    long double
#define ull   unsigned long long
#define endl "\n"
#define all(vec) vec.begin(),vec.end()



int32_t main(){
    ios_base::sync_with_stdio(false);
    
  /*#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif*/
    vector<int> marks;
    int t;
    cin>>t;
    while(t--){
         int type;
        cin >> type;
        if(type == 1) {
            int score;
            cin >> score;
            marks.push_back(score);
        } else if(type == 2 and !marks.empty()) {
            marks.pop_back();
        } else if(type == 3 and !marks.empty()) marks[marks.size() - 1] += 5;
        else if(type == 4 and !marks.empty()) marks[marks.size() - 1] -= 5;
       else reverse(all(marks));
    }
    cout<<accumulate(all(marks),0ll);
    return 0;
}