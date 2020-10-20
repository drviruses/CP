#include<bits/stdc++.h>
#define ll long long

using namespace std;

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll num_std,c_1=0,c_2=0,c_3=0;
    cin>>num_std;
    vector <ll> one_c,two_c,three_c;
    for(auto i=0;i<num_std;i++){
        ll val;
        cin>>val;
        if(val==1) {one_c.push_back(i); c_1+=1;}
        else if(val==2) {two_c.push_back(i); c_2+=1;}
        else {three_c.push_back(i); c_3+=1;}
    }
    ll min_tm=min(min(c_1,c_2),c_3);
    if(min_tm==0) cout<<"0";
    else{
        cout<<min_tm<<endl;
        for(auto i=0;i<min_tm;i++) cout<<one_c[i]+1<<" "<<two_c[i]+1<<" "<<three_c[i]+1<<endl;
    }
    return 0;
}