#include <bits/stdc++.h>
using namespace std;

int fact(int n); 
  
int nCr(int n, int r) 
{ 
    return fact(n) / (fact(r) * fact(n - r)); 
} 
  
 
int fact(int n) 
{ 
    int res = 1; 
    for (int i = 2; i <= n; i++) 
        res = res * i; 
    return res; 
} 
  

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int c0=0,c2=0,v,p=0;
        for(size_t i=0;i<n;i++){
            cin>>v;
            if(v==2)
            c2+=1;
            if(v==0)
            c0+=1;
        }
        if(c0>=2)
            p+=nCr(c0,2);
        if(c2>=2)    
            p+=nCr(c2,2);
            
        cout<<p<<endl;
    }
	// your code goes here
	return 0;
}
