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
#define int long long
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

#define NMAX 5000000

struct station {
	int pos, cost;
	bool operator<(station const& o) const {
		return pos < o.pos;
	}
};

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


station stations[NMAX];
int s[NMAX];
int nextSmall[NMAX];

void virus(){
    
	int n, maxGas, curGas, dist,amit = 0;
	cin>>n>>maxGas;
    curGas = maxGas, dist = n-1;
	for (int i = 0; i < n; i++) {
		if(i!=0){ll t_cost;
		cin>>t_cost;
		if(t_cost != 0){
		stations[amit].pos = i;
		stations[amit].cost = t_cost;
		amit++;
		}}
	}
	n = amit;

	sort(stations, stations + n);

	// find next cheaper station for each station
	int stacklen = 0;
	for (int i = n-1; i >= 0; i--) {
		while (stacklen > 0 && stations[s[stacklen-1]].cost >= stations[i].cost) {
			stacklen--;
		}
		nextSmall[i] = (stacklen == 0 ? -1 : s[stacklen-1]);
		s[stacklen] = i;
		stacklen++;
	}

	// move to station 1
	long long cost = 0;
	curGas -= stations[0].pos;
	for (int i = 0; i < n; i++) {
		// gas is less than 0 means it is impossible to reach the station
		if (curGas < 0) {
			cout<<"Case #"<<google_itr<<": "<<-1<<endl;
			return ;
		}
		int gasNeeded = min(maxGas, (nextSmall[i] == -1 ? dist : stations[nextSmall[i]].pos) - stations[i].pos);
		if (gasNeeded > curGas) {
			cost += stations[i].cost;
			curGas = gasNeeded;
		}
		curGas -= (i == n-1 ? dist : stations[i+1].pos) - stations[i].pos;
	}

	if (curGas < 0) {
		cout<<"Case #"<<google_itr<<": "<<-1<<endl;
	} else {
	  cout<<"Case #"<<google_itr<<": "<<cost<<endl;
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

    ll t;
    cin>>t;
    while(t--){
        
           auto start = high_resolution_clock::now();
           virus();
           auto stop = high_resolution_clock::now();
           auto duration = duration_cast<seconds>(stop - start);
		   google_itr++;
         //cout << "Time: "<<duration.count()<<endl;
        //your code goes here
    }
    return 0;
}