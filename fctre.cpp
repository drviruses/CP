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
#define pp pair<ll,ll>
#define endl "\n"
#define nfrep(a) for(size_t i=0;i<a;i++)
#define fnrep(a,b) for(size_t i=a;i<=b;i++)
#define nbrep(a) for(size_t i=a;i>=0;i--)
#define bnrep(a,b) for(size_t i=a;i>=b;i--)

const ll mod = 1e9+7;
const ll inf = 1e18;

vector<ll> prd_arr;
vector<ll> pth;
map<ll,ll> mem;
ll prd_res=1;


void pr_path(vector<ll>&virus_bfs){
    for(ll i=0;i<virus_bfs.size();i++) {
        prd_res=((prd_res%mod)*(((prd_arr[virus_bfs[i]-1])%mod))%mod);
    }   
    return;    
}

bool virus_visited(ll x,vector<ll>&virus_bfs){
    for(ll i=0;i<virus_bfs.size();i++){
        if(virus_bfs[i]==x)
            return false;
    }
    return true;
}

void virus_bfs_search(vector<vector<ll>>&virus_bfs,ll ini,ll fnl,ll nodes){

    queue<vector<ll>> virus_q;
    vector<ll> path;
    path.push_back(ini);
    virus_q.push(path);
    while(!virus_q.empty()){
        path = virus_q.front();
        virus_q.pop();
        ll last = path[path.size()-1];
        if(last == fnl)
            pr_path(path);

        for(ll i=0;i<virus_bfs[last].size();i++){
            if(virus_visited(virus_bfs[last][i],path)){
                vector<ll> virus_new(path);
                virus_new.push_back(virus_bfs[last][i]);
                virus_q.push(virus_new);
            }
        }    
    }
    return;
}

void seo(ll n, ll surpass_1[]){

    vector<bool> prime(n+1,false);
    for(ll i=2;i<=n;i+=2){
        surpass_1[i]=2;
    }

    for(ll i=3;i<=n;i+=2){
        if(prime[i]==false){
            surpass_1[i]=i;
            for(ll j=i;i*j<=n;j+=2){
                if(prime[i*j]==false){
                    prime[i*j]=true;
                    surpass_1[i*j]=i;
                }
            }
        }
    }
    return;
}

ll my_pre_pro(ll n){
    ll result=1;
    ll surpass_1[n+1];
    seo(n,surpass_1);
    ll curr=surpass_1[n],cnt=1;
    while(n>1){
        n/=surpass_1[n];
        if(curr == surpass_1[n]){
            cnt+=1;
            continue;
        }
        result=((result%mod)*((cnt+1)%mod)%mod);
        curr=surpass_1[n];
        cnt=1;
    }
    return result%mod;
}




int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
 /* #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif */
    //comu
    ll prki=1;
    ll t;
    cin>>t;
    
    while(t--){
           prd_res=1;
           ll nodes;
           cin>>nodes;
           vector<vector<ll>> virus_bfs;
           virus_bfs.resize(2*(nodes-1));

           for(ll i=1;i<=(nodes-1);i++){
               ll ini,fnl;
               cin>>ini>>fnl;
               virus_bfs[ini].push_back(fnl);
               virus_bfs[fnl].push_back(ini);
           }
           prki=1;
           for(ll i=0;i<nodes;i++){
               ll temp;
               cin>>temp;
               prd_arr.push_back(temp);
           }

           ll q;
           cin>>q;
           while(q--){
               prd_res=1;
               prki=0;
               ll scr,des;
               cin>>scr>>des;
               if(scr==des) {
                   ll r=(my_pre_pro(prd_arr[scr-1]));
                   if(mem.find(r)==mem.end()){
                       cout<<r%mod+prki<<endl;
                       mem.insert({scr,r});
                   }
                   else {
                       auto itr=mem.find(scr);
                       cout<<itr->second<<endl;}

               }
               else{
                    virus_bfs_search(virus_bfs,scr,des,nodes);
                    ll r=my_pre_pro(prd_res);
                    if(mem.find(r)==mem.end()){
                    cout<<r%mod+prki<<endl;
                    mem.insert({prd_res,r});
                    }
                    else{
                        auto itr=mem.find(prd_res);
                        cout<<itr->second<<endl;
                    }
                }
                pth.clear();
           }
           prd_arr.clear();
        //your code goes here
    }

    return 0;
}