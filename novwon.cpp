#include <bits/stdc++.h>
#include<string.h>
using namespace std;

int main() {
    long long int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        int c[10]={0};
        for(size_t i=0;i<n;i++)
        {
            string s;
            cin>>s;
            for(size_t j=0;j<10;j++){
                if(s[j]=='1')
                 c[j]+=1;
                 
            }
        }
        long long int p=0;
        for(size_t i=0;i<10;i++)
        {
            if(c[i]&1!=0)
             p+=1;
        }
        cout<<p<<endl;
    }
	// your code goes here
	return 0;
}
