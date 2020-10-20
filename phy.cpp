#include<bits/stdc++.h>
#define ll long long

using namespace std;

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll  num_vec,sum_x=0,sum_y=0,sum_z=0;
    cin>>num_vec;
    while(num_vec--){
        ll x_c,y_c,z_c;
        cin>>x_c>>y_c>>z_c;
        sum_x+=x_c;
        sum_y+=y_c;
        sum_z+=z_c;
    }

    if(sum_x==0 && sum_y==0 && sum_z==0) cout<<"YES";
    else cout<<"NO";

    return 0;
}