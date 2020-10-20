#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll add(ll a,ll b){
    ll u,v,c=0;
    while(b>0){
        u=a^b;
        v=a&b;
        a=u;
        b=v*2;
        c+=1;
    }
    return c;
}

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin>>t;
    while(t--){
        string a,b;
        cin>>a>>b;
        long long na=stoi(a, 0, 2),nb=stoi(b, 0, 2);
        cout<<add(na,nb)<<endl;
    }
	// your code goes here
	return 0;
}
