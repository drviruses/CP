#include <bits/stdc++.h>
#include<string>
#define ll long long
using namespace std;


int main() {
    
    
    
    int t;
    cin>>t;
    while(t--){
        /*string a,b;
        cin>>a>>b;
        int fa=0,fb=0;
        for(ll i=0;i<a.length();i++){
            if(a[i]!='0')
             {fa+=1; break;}
        }
        for(ll i=0;i<b.length();i++){
            if(b[i]!='0')
             {fb+=1; break;}
        }
        
        ll sa=a.length(),sb=b.length();
        ll diff=(sa>sb)? (sa-sb):(sb-sa);
        
        if(sa>sb){
            for(ll i=0;i<diff;i++) b='0'+b;
        }
        else if(sa<sb){
            for(ll i=0;i<diff;i++) a='0'+a;
        }
        
        ll maxsub=0,coutr=0,cone=0;
        if(fa==0) cout<<1<<endl;
        else if(fb==0) cout<<0<<endl;
        else{
            for(ll i=0;i<a.length();i++){
                if((a[i]=='0' && b[i]=='1')||(a[i]=='1' && b[i]=='0')){
                    coutr+=1;
                }
                else if((a[i]=='1')&&(b[i]=='1')){
                    cone+=1;
                    maxsub=max(maxsub,coutr);
                    coutr=0;
                }
                else if((a[i]=='0')&&(b[i]=='0')){
                    coutr=0;
                }
                
                
            }
            
            if(cone>0)
                cout<<maxsub+2<<endl;
            else
                cout<<1<<endl;
        }
        

    }*/
    
        string a,b;
        cin>>a;
        cin>>b;
        
        int la=a.length();
        int lb=b.length();
        int aa,bb;
        int dif=(la>lb)?(la-lb):(lb-la);
        ll sa=a.length(),sb=b.length();
        ll diff=(sa>sb)? (sa-sb):(sb-sa);
        /*ll a1=stoll(a,0,2);
        ll b1=stoll(b,0,2);*/
        bool bexist=false;
        bool aexist=false;
        int k=0;
        while(b[k]!='\0')
        {
            if(b[k]!='0')
            {
                bexist=true;
                break;
            }
            k++;
        }
        ll maxsub=0,coutr=0,cone=0;
        int p=0;
        while(a[p]!='\0')
        {
            if(a[p]!='0')
            {
                aexist=true;
                break;
            }
            p++;
        }    
       /* a1=stoll(a,0,2);
         b1=stoll(b,0,2);*/
        if(la>lb)
        {for(int i=0;i<dif;++i)
        {
           b='0'+b; 
        }}
        else if(la<lb)
        {
            for(int i=0;i<dif;++i)
            {
                a='0'+a;
            }
        }
        diff=(sa>sb)? (sa-sb):(sb-sa);
         maxsub=0,coutr=0,cone=0;
        diff=(sa>sb)? (sa-sb):(sb-sa);
        //cout<<a<<"\n"<<b;
       // sa=a.length(),sb=b.length();
       //  diff=(sa>sb)? (sa-sb):(sb-sa);
        
        int lc=0,cntr=0;
        int cnone=0;
        if(!bexist)
        {
            cout<<"0"<<endl;
        }
        else if(!aexist)
        {
            cout<<"1"<<endl;
        }
        else
        {
            int i=0;
           while(a[i]!='\0')
           {
             if((a[i]=='0' && b[i]=='1')||(a[i]=='1'&&b[i]=='0'))
             {
                 lc++;
             }
             else if((a[i]=='1' && b[i]=='1'))
             {
                 cnone++;
                 cntr=max(cntr,lc);
                 lc=0;
             }
             else if((a[i]=='0' && b[i]=='0'))
             {
                 lc=0;
             }
             i++;
             
           }
           if(cnone>0)
           {
               cout<<cntr+2<<endl;
           }
           else if(cnone==0)
           {
               cout<<1<<endl;
           }
           
           
        }
        
        
        
        
    }
	// your code goes here
	return 0;
}
