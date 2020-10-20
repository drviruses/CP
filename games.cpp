#include<bits/stdc++.h>
#define ll long long

using namespace std;

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll team;
    cin>>team;
    ll host[100]={0},guest[100]={0};

    while (team--)
    {
        ll hm_cl,out_cl;
        cin>>hm_cl>>out_cl;
        host[hm_cl-1]+=1;
        guest[out_cl-1]+=1;
        /* code */
    }
    
    //sum
    ll sum=0;
    for(auto i=0;i<100;i++){
        sum+=(host[i]*guest[i]);
    }
    cout<<sum;
    
    return 0;
}