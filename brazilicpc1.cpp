#include<bits/stdc++.h>
#define ll long long
#define ld long double

using namespace std;

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll n,sum=0,val;
    cin>>n;
    while (n--)
    { cin>>val;
        if(val==2 || val==3) sum+=1;
        /* code */
    }
    cout<<sum;
    return 0;
}