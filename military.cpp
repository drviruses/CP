#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,min=INT_MAX,max=INT_MIN,maxi,mini;
    cin>>n;
    int a[n];
    for(auto i=0;i<n;i++)  cin>>a[i];
    for(int i=0;i<n;i++){
        if(a[i]>max)
        {
            max=a[i];
            maxi=i;
        }
        if(a[i]<=min)
        {
            min=a[i];
            mini=i;
        }
    }

    if(maxi>mini)
     mini-=1;
    
    cout<<n+maxi-mini;
    return 0;

}