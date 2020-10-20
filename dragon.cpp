#include<bits/stdc++.h>
#define ll long long

using namespace std;

class drg{
public: ll kill_p,give_p;
};


int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    
    ll ini_pow,num_dr;
    cin>>ini_pow>>num_dr;
    drg obj[num_dr];
    
    for(auto i=0;i<num_dr;i++){
        cin>>obj[i].kill_p>>obj[i].give_p;
    }

    for(auto i=0;i<num_dr;i++){
        for(auto j=0;j<num_dr-i-1;j++){
            ll t_1,t_2;
            if(obj[j].kill_p > obj[j+1].kill_p){
                t_1=obj[j].kill_p;
                obj[j].kill_p=obj[j+1].kill_p;
                obj[j+1].kill_p=t_1;
                
                t_2=obj[j].give_p;
                obj[j].give_p=obj[j+1].give_p;
                obj[j+1].give_p=t_2;
            }
        }
    }
    ll cnt=0;
    for(auto i=0;i<num_dr;i++){
        if(obj[i].kill_p < ini_pow){
            cnt+=1;
            ini_pow+=obj[i].give_p;
        }
        else break;
    }

    if(cnt==num_dr) cout<<"YES";
    else cout<<"NO";
    
    return 0;
}