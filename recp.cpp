#include<bits/stdc++.h>
#define ll long long
using namespace std;

void fun1(int l,int u){
    if(l>u) return;
    else{
        fun1(l+2,u);
        cout<<l<<" ";
        cout<<l<<" ";
        fun1(l+1,u);
        
    }
}
/*void fun2(int l,int u){
    if(l>u) return;
    else{
        cout<<l<<" ";
        fun2(l+2,u);
    }
}*/
int main(){
    ll ub;
    cin>>ub;
    fun1(1,ub);
    //fun2(2,ub);
    return 0;
}