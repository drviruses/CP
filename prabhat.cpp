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
        string sTime;
        cin  >> sTime;
        
        if(sTime[0] == '-') {
            cout << "INVALID INPUT"; return;
        }

        int hh = stoi(sTime.substr(0, 2)), mm = stoi(sTime.substr(3, 2));

        int sum[] = {0, 4, 9, 15, 19, 22};
        for(auto i:sum) {
            string hA = "", mS = "";
            int min = mm + i;
            if(min >= 60){
                mS = "00";
                hh++;
            }
            if(hh == 24){
                hA = "00"; hh = 0;
            }
            string tH = to_string(hh) , tM = to_string(min);
            if(tH.size() == 1) tH.insert(tH.begin(), '0');
            if(tM.size() == 1) tM.insert(tM.begin(), '0');

            if(hA == "00") cout << hA << ".";
            else cout << tH << ".";
            if(mS == "00") cout << mS << "";
            else cout << tM; 
            cout << " ";
        }

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