/*
    @uthor: Amit Kumar
    user: CodeChef: dr_virus_ ; Codeforces,Hackerearth,Hakerrank: dr_virus;
*/
#include <bits/stdc++.h>
using namespace std;
//#include <boost/multiprecision/cpp_int.hpp>
//namespace mp = boost::multiprecision;
//#define ln mp::cpp_int;
#define ll long long
#define ld double
#define endl "\n"

const ll mod = 1e9+7;
const ll inf = 1e18;

char block[10000];
ll blk_size;

unordered_map<char,vector<int>> ma_p;

ll frq(ll l,ll r,char ele){
    ll first = lower_bound(ma_p[ele].begin(),ma_p[ele].end(),l) - ma_p[ele].begin();
    ll last = upper_bound(ma_p[ele].begin(),ma_p[ele].end(),r) - ma_p[ele].begin();
    return last-first;
}

ll query(string s,ll l,ll r){
    ll  m_x = INT_MIN; 
    while (l<r and l%blk_size!=0 and l!=0) 
    { 
        m_x = max(m_x,(ll)s[l]);
        l++; 
    } 
    while (l+blk_size <= r) 
    { 
        m_x =max(m_x,(ll)block[l/blk_size]); 
        l += blk_size; 
    } 
    while (l<=r) 
    { 
        m_x = max(m_x,(ll)s[l]);
        l++; 
    } 
    return m_x; 
}

void preprocess(string s,ll n){
    ll blk_indx = -1;
    blk_size = sqrt(n);
    ll m_x = INT_MIN;
    for(auto i=0;i<n;i++){
        if(i%blk_size==0 && i!=0){
            blk_indx += 1;
            block[blk_indx] = m_x;
            m_x = INT_MIN;
        }
        m_x = max(m_x,(ll)(s[i]));
    }

}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
 /* #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif */

    ll t=1;
    //cin>>t;
    while(t--){
         ll n;
         cin>>n;
         string s,c_s;
         cin>>s;
         transform(s.begin(),s.end(),s.begin(),::tolower);
         preprocess(s,n);
         c_s=s;
         transform(c_s.begin(),c_s.end(),c_s.begin(),::tolower);
         for(auto i=0;i<n;i++) ma_p[c_s[i]].push_back(i);

         ll q;
         cin>>q;
         while(q--){
             ll l,r;
             cin>>l>>r;
             char mx = query(s,l,r);
             if(mx<97) mx+=32;
             cout<<frq(l,r,mx)<<endl;
         }

        //your code goes here
    }
    //cerr<<"Time Elapsed: "<<clock()/(double)CLOCKS_PER_SEC<<endl;
    return 0;
}