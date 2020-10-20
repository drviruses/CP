#include<bits/stdc++.h>

using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     
    int t;
    cin>>t;
    while(t--)
    {
        int a[3],c[3];
        for(auto i=0;i<3;i++)  cin>>a[i];
        for(auto i=0;i<3;i++)  cin>>c[i];
        int maxa=*max_element(a,a+3);
        int maxc=*max_element(c,c+3);
        int mina=*min_element(a,a+3);
        int minc=*min_element(c,c+3);
        for(auto i=0;i<3;i++)
        {
            if(a[i]==maxa)
              a[i]=3;
            else if(a[i]==mina)
              a[i]=1;
            else  
              a[i]=2;  
        }
        for(auto i=0;i<3;i++)
        {
            if(c[i]==maxc)
              c[i]=3;
            else if(c[i]==minc)
              c[i]=1;
            else  
              c[i]=2;  
        }
        int fl=0;
    
        for(auto i=0;i<3;i++)
        {
            if(a[i]==c[i])
            fl+=1;
              
        }
        if(fl==3)
          cout<<"FAIR"<<endl;
        else
          cout<<"NOT FAIR"<<endl;  
    }
    
    return 0;
}