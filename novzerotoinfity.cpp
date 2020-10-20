#include<bits/stdc++.h>
#define ull unsigned long long int
using namespace std;

class rec{
    public:
      ull v,c;
      rec(){
          v=0;
          c=0;
      } 
      ull v,c;
      string s;
      void ip(){
          cin>>s;
      }
      void count(){
          for(ull i=0;i<s.size();i++)
          {
              if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
                v+=1;
              else
                c+=1;  
          }

      }

};

class alice:public rec{
    public:



}a;

class bob{

};


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    ull t;
    cin>>t;
    while(t--){
        ull n,i;
        cin>>n;
        rec r[n];
        for(i=0;i<n;i++) 
            r[i].ip();
        for(i=0;i<n;i++) 
            r[i].count();
        for(i=0;i<n;i++){
            if(r[i].v>=r[i].c)
              =r[i].s
             
        }    
    
        
    }

    return 0;
}