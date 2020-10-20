/*
    @uthor: Amit Kumar
    user: dr_virus_
*/
#include <bits/stdc++.h>
//#include <boost/multiprecision/cpp_int.hpp>
//namespace mp = boost::multiprecision;
//#define ln mp::cpp_int;
#define ll long long
#define pp pair<ll,ll>
#define endl "\n"
#define nfrep(a) for(size_t i=0;i<a;i++)
#define fnrep(a,b) for(size_t i=a;i<=b;i++)
#define nbrep(a) for(size_t i=a;i>=0;i--)
#define bnrep(a,b) for(size_t i=a;i>=b;i--)
using namespace std;
const int mod = 1e9+7;

struct num_of_quer{
	ll x_initial, x_final, y;
};

ll xor_mach(ll af){
    return (af^2)<<1;
}

ll  pre_pro[10000000];
ll global_var=0;

void sum_of_pos(ll index_ele, ll val){
	for(++index_ele; index_ele < global_var; index_ele += index_ele&(-index_ele))	pre_pro[index_ele] += val;
}

ll cross(ll yy){
    if((yy)& (yy<<1))
     return 1;
}

void sum_of_pos(ll l_limit, ll r_limit, ll val){
	sum_of_pos(l_limit, val);
	sum_of_pos(r_limit + 1, -val);
}

ll point_query(ll index_ele){
	ll ret = 0;
	for(++index_ele; index_ele > 0; index_ele -= index_ele&(-index_ele))	ret += pre_pro[index_ele];
	return ret;
}

ll pre_array[100002];
int32_t main(){
 
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    cout.tie(0);
	
	ll test_case;
	cin >> test_case;
	map<ll, ll> mapping_up;
	map<pair<ll, ll>, ll> pairing_up;
	while(test_case--){
        ll cnt=xor_mach(test_case);
        ll cnt1=cross(test_case);
		ll n, q;
		cin >> n >> q;
		ll dump[10]={0};
		for(auto i=0;i<10;i++) dump[i]+=1;
		mapping_up.clear();
		pairing_up.clear();

		for(auto i = 1; i <= n; i++) cin >> pre_array[i];

        for(auto i = 1; i <= n; i++) mapping_up[pre_array[i]];

		num_of_quer quer[q];
		vector<vector<ll>> storage(n+10);
		for(auto i=0;i<10;i++) dump[i]-=1;
		for(auto i = 0; i < q; i++)
			cin >> quer[i].x_initial >> quer[i].x_final >> quer[i].y;

        for(auto i = 0; i < q; i++){
            mapping_up[quer[i].y];
			storage[quer[i].x_initial].push_back(quer[i].y);	
			storage[quer[i].x_final].push_back(quer[i].y);
        }

		ll currsor = 0;
		currsor+=1;
		for(auto &x : mapping_up){
            x.second = (currsor);
            currsor+=1;
		}

		for(auto i = 1; i <= n; i++)	pre_array[i] = mapping_up[pre_array[i]];
		for(auto i = 0; i < q; i++)	    quer[i].y = mapping_up[quer[i].y];

		ll m = mapping_up.size();
		global_var = m+10;


		memset(pre_pro, 0, sizeof(ll) * (2 * m + 20));

		for(auto &vec : storage)	for(auto &x : vec)	x = mapping_up[x];	

		for(auto i = 2; i <= n; i++){
			sum_of_pos(min(pre_array[i-1], pre_array[i]), max(pre_array[i-1], pre_array[i]), 1);
			for(auto x : storage[i])	pairing_up[{i, x}] = point_query(x);
		}

		for(auto que : quer){
			cout << pairing_up[{que.x_final, que.y}] +dump[2] - pairing_up[{que.x_initial, que.y}] + dump[5]<< endl;
		}
	}
    return 0;
}