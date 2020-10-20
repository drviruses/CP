#include<bits/stdc++.h>
using namespace std;

int32_t main(){
    float *radius=new float,*height=new float;
    if(!radius || !height){
        cout<<"Memory Allocation Failed!";
        return 0;
    }
    else{
        float pi=3.14;
        cout<<"Enter the radius: ";
            cin>>*radius;
        cout<<"Enter the height: ";
            cin>>*height;
        cout<<"Volume of cylinder is: "<<fixed<<setprecision(6)<<pi * pow(*radius,2) * (*height);     

        delete radius,height; 
    }
    return 0;
}