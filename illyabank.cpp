#include<bits/stdc++.h>
#define ll long long

using namespace std;

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string cur_bal;
    cin>>cur_bal;
    if(cur_bal[0]!='-')
        cout<<cur_bal;
    else{
        ll r_i;
        if(cur_bal[cur_bal.size()-1]-'0'>=cur_bal[cur_bal.size()-2]-'0')
            r_i=cur_bal.size()-1;
        else
            r_i=cur_bal.size()-2;

        if(cur_bal[cur_bal.size()-1]=='0' && (cur_bal.size()==3 || cur_bal.size()==2) )
            cout<<"0";
        else{    
            for(auto i=0;i<cur_bal.size();i++)
                if(i!=r_i) cout<<cur_bal[i];
        }
    }    
    return 0;
}