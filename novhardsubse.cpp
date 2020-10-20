#include <iostream>
using namespace std;

int main() {
    long long int t;
    cin>>t;
    while(t--){
        int n,c=0,flag=1;
        
        int a[128];
        a[0]=a[1]=0;

        for(int i=1;i<128;i++){
            c=0;flag=1;
            for(int j=i-1;j>=0;j-- ){
               if(flag){ 
                if(a[i]==a[j])
                {
                    flag=0;
                    
                }
                else
                {
                    c+=1;
                }
                
               } 
            }
            if(c==i)
             a[i+1]=0;
             else
             {
                 a[i+1]=c+1;
             }
             
        }
        int cc=0;
        cin>>n;
        cout<<n<<endl;
        for(int i=0;i<n;i++)
        {
            if(a[n-1]==a[i])
             cc+=1;
        }
        cout<<cc<<endl;
    }
	// your code goes here
	return 0;
}
