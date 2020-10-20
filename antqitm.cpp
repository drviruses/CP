#include<bits/stdc++.h>
#define ll long long

using namespace std;

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll seller,ini_bal;
    cin>>seller>>ini_bal;
    ll t=seller,cnt=0,sel_no=1;
    vector<ll> sell;
    while (t--)
    {
        ll siz,val,f=0;
        cin>>siz;
        for(auto i=0;i<siz;i++){
            cin>>val;
            if( f==0 && val<ini_bal) { sell.push_back(sel_no); f=1;  }
        }
        sel_no+=1;
        /* code */
    }
    cout<<sell.size()<<endl;
    vector<ll>::iterator itr;
    for(itr=sell.begin();itr!=sell.end();itr++) cout<<*itr<<" ";
        

    return 0;
}