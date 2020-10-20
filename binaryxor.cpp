#include<bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>  
namespace mp = boost::multiprecision;
#define mod 1000000007
using namespace std;


mp::cpp_int fact(mp::cpp_int a)
{
	if(a==1)
		return 1;
	if(a==0)
		return 1;
	return a * fact(a-1);
}

  
mp::cpp_int nCr(mp::cpp_int n, mp::cpp_int r) 
{ 
    return fact(n) / (fact(r) * fact(n - r)); 
}  

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    mp::cpp_int t;
    cin>>t;
    while(t--){
        mp::cpp_int n,a1=0,b1=0;
        cin>>n;

        string a,b;
        cin>>a>>b;
        for(auto i=0;i<n;i++){
            if(a[i]=='1') a1+=1;
            if(b[i]=='1') b1+=1;
        }
        mp::cpp_int ans=((nCr(n,a1)%mod)*(nCr(n,b1)%mod))%mod;

    }
    
    return 0;
}