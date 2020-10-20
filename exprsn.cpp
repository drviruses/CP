#include<bits/stdc++.h>
#define ll long long

using namespace std;

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll array[3],copy[3],one_loc=-1,no_one=0;
    for(auto i=0;i<3;i++){
        cin>>array[i];
        copy[i]=array[i];
        if(array[i]==1){
            one_loc=i;
            no_one+=1;
        }
    }
    sort(array,array+3);
    if(no_one==3) cout<<"3";
    else if(no_one==2) { if(copy[2]==1 && copy[1]==1) cout<<2*copy[0]; else if(copy[0]==1 && copy[1]==1) cout<<2*copy[2];  else cout<<(copy[1])+2;}
    else if(no_one==1) {
        if(one_loc==0) cout<<(1+copy[1])*copy[2];
        else if(one_loc==1) cout<<(1+min(copy[0],copy[2]))*max(copy[0],copy[2]);
        else cout<<copy[0]*(1+copy[1]);
    }
    else cout<<array[0]*array[1]*array[2];
    return 0;
}