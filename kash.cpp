#include <bits/stdc++.h>
using namespace std;
  
#define int long long int 
typedef vector<int> vi;
typedef vector<pair<int, int>> vpi;
typedef vector<vi> vvi;
const int mod = 1e9 + 7; 

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL) 

#define EB emplace_back
#define ALL(v) v.begin(), v.end() 
#define size(v) (int)v.size() 
#define endl '\n'
#define UMO unordered_map
#define USO unordered_set
#define TC int t; cin >> t; while (t--) 

void Panda() {
    int n; cin >> n;
    cin.ignore();
    string s; getline(cin, s);
    set<int> suspects;
    int ind = 0;
    UMO<int, USO<int>> in;
    for(int i = 0; i < n; i++) {
    	int val = 0;
    	int id = -1;
    	while(s[ind] != ',' and ind < size(s)) {
    		if(s[ind] == ' ') {
    			if(id == -1) {
    				id = val;
    			} else in[id].insert(val);
    			val = 0;
    		} else val *= 10, val += s[ind] - '0';
    		ind++;
    	}
    	ind++;
    	assert(val > 0);
    	in[id].insert(val);
    }

    for(auto i:in) {
        for(auto j:i.second) cout << j << " ";
        cout << endl;
    }
    for(;;) {
    	int temp = size(suspects);
    	for(auto o : in) {
    		int cnt = 0;
            auto i = o.first; auto j = o.second;
    		for(auto k : j) {
    			if(in[k].find(i) != in[k].end()) {
    				suspects.insert(i), suspects.insert(k);
    			} else if(suspects.find(k) != suspects.end()) cnt++;
    			if(cnt >= 2) suspects.insert(i);
    		}
    	}
    	if(temp == size(suspects)) break;
    }
    ind = 0;
    for(auto i : suspects) {
    	if(ind == 0) cout << i;
    	else cout << ',' << i;
    	ind++;
    }
}
  
int32_t main() {
 
    FAST;

    //freopen("input.txt", "r", stdin); 
    //freopen("output.txt", "w", stdout); 
    
    Panda();

    return 0; 
}