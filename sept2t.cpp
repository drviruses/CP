#include<bits/stdc++.h>
#define endl '\n'
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

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;

  while (t--)
  {
    int n,k,sum=0;
    cin>>n>>k;
    int ar[n],ai[100]={0};
    for(int i=0;i<n;i++) 
    {
        cin>>ar[i];
        ai[ar[i]-1]+=1;
    }
    for(int i=0;i<100;i++)
    {
        if(ai[i]!=0) 
          sum+=1;
    }
    
    sort(ar,ar+n);
    if(sum==n)
      cout<<"1"<<endl;
    else
    {
        int r=0;
        int copykc[k]={0};
        for(int i=0;i<k;i++){
            copykc[i]=ar[i];
        }
        for(int i=0;i<k;i++)
             {
                 if(copykc[i]==copykc[k-1])
                  r+=1;
             }
            
        if(r<ai[ar[k-1]-1]){
             cout<<nCr(ai[ar[k-1]-1],r)<<endl;
        }
        else{
            cout<<"1"<<endl;
        }

        
    }
      
   
  }       
    return 0;
}