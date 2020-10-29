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
const int mx = 1e8+4;
vector<int> mypreprocess(1e5+4);

void sieve() { 
    mypreprocess[1] = 1; 
    for (int i=2; i<300001; i++) mypreprocess[i] = i; 
    for (int i=4; i<300001; i+=2) mypreprocess[i] = 2; 
    for (int i=3; i*i<300001; i++){ 
        if (mypreprocess[i] == i) { 
            for (int j=i*i; j<300001; j+=i) 
                if (mypreprocess[j]==j) mypreprocess[j] = i; 
        } 
    } 
} 

int myfactor(int N) {  
    vector <int> t;
    int curr = mypreprocess[N], cnt = 1; 
    while (N > 1) { 
        N /= mypreprocess[N]; 
        if (curr == mypreprocess[N]){ 
            cnt++; 
            continue; 
        } 
        t.push_back(curr);
        curr = mypreprocess[N]; 
        cnt = 1; 
    } 
    return *max_element(all(t));
} 
void virus(){
        int len;
        cin >> len;

        vector <int> arr(len);
        for(auto &i : arr) cin >> i;
        /* vector <int> poss;
        for(auto i=0; i<len; i++) {
            int setBit = __builtin_popcount(arr[i]);
            if(setBit >= 2){
                poss.push_back(arr[i]);
            }
        }
        sort(all(poss), greater <int>());
        for(auto i:poss){
            int large = myfactor(( i * i) + 1);
                if(large >= (i<<1)){
                    ans.push_back(i);
                }
        }
        if(ans.size() == 0) cout << -1 << endl; */ 
        int ans = -1;
        for(auto i:arr) {
            if( i > ans and !(i && (!(i&(i-1))))) ans = i;
        }
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
    //sieve();
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