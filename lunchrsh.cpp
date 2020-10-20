#include<bits/stdc++.h>
#define ll long long

using namespace std;

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll no_res,k_tm;
    cin>>no_res>>k_tm;
    vector<ll> m_x;
    while (no_res--)
    {
        ll f,t;
        cin>>f>>t;
        if(t<k_tm) m_x.push_back(f);
        else m_x.push_back(f-(t-k_tm));
        /* code */
    }
    sort(m_x.begin(),m_x.end(),greater<ll>());
    cout<<m_x[0];
    
    return 0;
}