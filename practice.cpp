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
#define endl "\n"
#define all(vec) vec.begin(),vec.end()
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

pair<int, int> myfactor(int n) {
            vector <pair<int, int>> t;
            int count = 0; 
            while (!(n % 2)) { 
                n >>= 1; 
                count++; 
            }  
            if (count) t.push_back({2,count}) ; 
        
            for (auto  i = 3; i <= sqrt(n); i += 2) { 
                count = 0; 
                while (n % i == 0) { 
                    count++; 
                    n = n / i; 
                } 
                if (count) t.push_back({i,count}) ;
            }  
            if (n > 2) 
                t.push_back({n,1}) ;
            
            auto mySort = [&](pair<int, int>& a, pair<int, int>& b) {
                return a.first > b.first;
            };
            sort(all(t), mySort);
            return t[0];
}

void virus(){
        int n, p;
        cin >> n >> p;

        vector <int> arr(n);
        for(auto &i : arr) cin >> i;

        sort(all(arr), greater <int>());
        vector <pair<pair<int, int>,int>> s;

        int ans = -1, tim = 0, dans = -1, lar = -1;
        for(auto i=0; i<n; i++) {
            pair<int, int> large = myfactor(arr[i]);
            if(large.first <= p ) {
                s.push_back({large, arr[i]});
            }
        } 
        auto mySort = [&](pair<pair<int, int>,int>& a, pair<pair<int, int>,int>& b) {
            if(a.first.first == b.first.first ) return a.first.second > b.first.second;
                return a.first.first > b.first.first;
            };
        sort(all(s), mySort);
        if(s.size() == 0) cout << -1 << endl;
        else
        cout << s[0].second << endl;

}


int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
  /*#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif*/
   // sieve();
    int t = 1;
    //cin >> t;
    while(t--){
           auto start = high_resolution_clock::now();
           virus();
           auto stop = high_resolution_clock::now();
           auto duration = duration_cast<seconds>(stop - start);
           //cerr << "\nTime: "<<duration.count()<<endl;
        //your code goes here
    }
    return 0;
}