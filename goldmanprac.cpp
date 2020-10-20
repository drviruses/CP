#include<bits/stdc++.h>

using namespace std;

int f(int *a, int b){
    b -= 1;
    if(b == 0) return 1;
    *a += 1;
    cout<<*a<<" "<<b<<endl;
    return f(a,b)*(*a);
}

int main(){
    int a = 3;
    int b = 3;
    cout<< f(&a,b);
    return 0;
}