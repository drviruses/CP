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
#define int      long long
#define double   long double
#define uint     unsigned long long
#define all(vec) vec.begin(),vec.end()
#define endl "\n"
int google_itr = 1;
#define google(x) cout<<"Case #"<<x<<": "
#define pi 3.14159265358979323846264338327950L

vector<string> vec_splitter(string s) {
        s += ',';
        vector<string> res;
        while(!s.empty()) {
                res.push_back(s.substr(0, s.find(',')));
                s = s.substr(s.find(',') + 1);
        }
        return res;
}
void debug_out(
vector<string> __attribute__ ((unused)) args,
__attribute__ ((unused)) int idx, 
__attribute__ ((unused)) int LINE_NUM) { cerr << endl; } 
template <typename Head, typename... Tail>
void debug_out(vector<string> args, int idx, int LINE_NUM, Head H, Tail... T) {
        if(idx > 0) cerr << ", "; else cerr << "Line(" << LINE_NUM << ") ";
        stringstream ss; ss << H;
        cerr << args[idx] << " = " << ss.str();
        debug_out(args, idx + 1, LINE_NUM, T...);
}

#define XOX
#ifdef XOX
    #define deb(...) debug_out(vec_splitter(#__VA_ARGS__), 0, __LINE__, __VA_ARGS__)
#else
    #define deb(...) 42
#endif

const int mod = 1e9+7;
const int inf = 1e18;


void virus(){
        int len;
        cin >> len;

        vector <pair<int, pair<int, int>>> arr;
        for(auto i=0; i<len; i++) {
            int x, y, z;
            cin >> x >> y >> z;
            arr.push_back({x, {y,z}});
        }
        auto mysort = [&]( pair<int, pair<int, int>>& a, pair<int, pair<int, int>>& b ) {
            if(a.first == b.first) {
                if(b.second.first == a.second.first) {
                    return a.second.second < b.second.second;
                }
                else return b.second.first  > a.second.first;
            }
            else return a.first < b.first;
        };
        sort(all(arr), mysort);
        int ans = 0;
        for(auto i=0; i<len-1; i++) {
            ans += (abs(arr[i].first - arr[i+1].first) + abs(arr[i+1].second.first - arr[i].second.first) + max(0LL, (arr[i+1].second.second - arr[i].second.second)) );
        }
        ans += (abs(arr[0].first - arr[1].first) + abs(arr[1].second.first - arr[0].second.first) + max(0LL, (arr[0].second.second - arr[1].second.second)) );
        cout << ans << endl;
}


int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
  /*#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif*/

    int t = 1;
    //cin >> t;
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