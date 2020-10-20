#include<bits/stdc++.h>
#include<math.h>
#include <boost/multiprecision/cpp_int.hpp>
namespace mp = boost::multiprecision;


using namespace std;

/*mp::cpp_int powr(mp::cpp_int t,mp::cpp_int num)
{
    mp::cpp_int rr=1;
    while(num--)
     rr*=t;
    return rr; 
}*/

/*mp::cpp_int fact(mp::cpp_int a){
	if(a==1)
		return 1;
	if(a==0)
		return 0;
	return a * fact(a-1);
}

mp::cpp_int fun(mp::cpp_int a){
    mp::cpp_int re=1;
    while(a)
    {
        re*=fact(a);
        a-=1;
    }
    return re%1000000007;
}*/
mp::cpp_int babu(mp::cpp_int a, mp::cpp_int b,  
                                    mp::cpp_int mod) 
{ 
    mp::cpp_int res = 0; // Initialize result 
    a = a % mod; 
    while (b > 0) { 
  
        // If b is odd, add 'a' to result 
        if (b % 2 == 1) 
            res = (res + a) % mod; 
  
        // Multiply 'a' with 2 
        a = (a * 2) % mod; 
  
        // Divide b by 2 
        b /= 2; 
    } 
  
    // Return result 
    return res % mod; 
} 
  

mp::cpp_int babukrenge(mp::cpp_int N) 
{ 
    // Initialize product and fact with 1 
    mp::cpp_int product = 1, fact = 1; 
    mp::cpp_int MOD = 1e9 + 7; 
    for (int i = 1; i <= N; i++) { 
  
        // ith factorial 
        fact = babu(fact, i, MOD); 
  
        // product of first i factorials 
        product = babu(product, fact, MOD); 
  
        // If at any iteration, product becomes 
        // divisible by MOD, simply return 0; 
        if (product == 0) 
            return 0; 
    } 
    return product; 
} 

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        
        mp::cpp_int n;
        cin>>n;
       cout<< babukrenge(n)<<endl;


    }
    

    return 0;
}