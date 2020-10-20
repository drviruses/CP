#include<bits/stdc++.h>
#define ll long long int

using namespace std;



/*void fib(ll p) { 
    ll a=0,b=1,c=a+b;

   for (auto i = 2; i < p; i++) {
      c=0;  
      c = (a+b);
      a=b;
      b=c; 
   } 
   cout<<c%10<<endl;
   }*/



int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    ll t,p;
    cin>>t;
    while (t--)
    {
        ll n;
        cin>>n;
        int pow[4]={0,9,2,3};
        int fl=floor(log(n)/log(2));
        int c=ceil(log(n)/log(2));
        cout<<fl<<" "<<c<<endl;
        int p= (fl<c)? fl : c; 
        if(p<4)
        cout<<p<<endl;
        else
        cout<<pow[p%4]<<endl;
        
    }
    
    
    return 0;
}