#include<bits/stdc++.h>
#define ll long long

using namespace std;

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll test_cs;
    cin>>test_cs;
    while (test_cs--)
    {
        ll len;
        cin>>len;
        ll arr[len],ev_c=0,od_c=0,pos;
        for(auto i=0;i<len;i++) { cin>>arr[i]; if(arr[i]%2==0) {ev_c+=1; pos=i+1;} else od_c+=1; }
        if(ev_c==0){
            if(len>1) {
                cout<<"2"<<endl;
                cout<<"1 2"<<endl;
            }
            else cout<<"-1"<<endl;
        }
        else if(od_c==0){
           cout<<"1\n1\n";
        }
        else{
            cout<<"1\n"<<pos<<endl;
        }
        /* code */
    }
    
    return 0;
}