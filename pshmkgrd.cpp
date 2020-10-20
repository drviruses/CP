#include<bits/stdc++.h>
#define ll long long
#define ld double

using namespace std;

ll slope(ll x1,ll y1,ll x2,ll y2){
    if((x2-x1)==0) return 1;

    ld s_lp=((double)abs(y2-y1)/(double)abs(x2-x1));
    if(s_lp==0) return 1;
    if(s_lp==1) return 2;

    return 0;

}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;

    if(!slope(x1,y1,x2,y2)) cout<<"-1";
    else{
            
            if(slope(x1,y1,x2,y2)==2){
                if(x2>x1) cout<<x1<<" "<<y2<<" "<<x2<<" "<<y1;
                else cout<<x2<<" "<<y1<<" "<<x1<<" "<<y2;
            } 
            else{
                ll d= (x1==x2)? abs(y2-y1) : abs(x2-x1);
                if(x1==x2) {
                    cout<<x1+d<<" "<<y1<<" "<<x2+d<<" "<<y2;
                }
                else{
                    cout<<x1<<" "<<y1+d<<" "<<x2<<" "<<y2+d;   
                }
            }

    }
    return 0;
}