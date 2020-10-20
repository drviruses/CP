//sum of multiple of 3 and 5 till n

        #include<bits/stdc++.h>
        #define ll unsigned long long 

        using namespace std;

        ll ap(ll a,ll num){
            return ((a+(num*a))*(num))/2;
        }
        int main(){
            ll n;
            cin>>n;
            n-=1;
            ll re= ap(3,(int)n/3)+ap(5,(int)n/5)-ap(15,(int)n/15);
            cout<<re;
            return 0;
        }