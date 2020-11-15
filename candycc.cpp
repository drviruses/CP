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


void virus(){
        int n;
        cin >> n;

        vector <int> a(n);
        for(auto &i:a) cin >> i;

        int sum = accumulate(all(a), 0LL);
        int lowLim = sum/n;
        int highLim = lowLim + 1;

        vector <int> b(all(a));
        int firMin = 0, left = 0, ans = 0;
        for(auto i=0; i<n; i++) {
            if(b[i] > lowLim) left += (b[i] - lowLim) , ans += (b[i] - lowLim);
            else if(b[i] < lowLim and left >= (lowLim - b[i])) {
                int t = min(left, (lowLim - b[i]));
                b[i] += t; left -= t;
            }
            
        }
        cout << ans + (n - (sum%n)) << endl;
}


int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
  /*#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif*/

    int t;
    cin >> t;
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