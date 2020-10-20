
#include <bits/stdc++.h> 
#include <boost/multiprecision/cpp_int.hpp>
namespace mp = boost::multiprecision;
#define ln mp::cpp_int
#define ll long long
using namespace std; 

ln printPairs(ll arr[], ll arr_size, ll sum) 
{ 
	unordered_set<ll> s; 
	for (auto i = 0; i < arr_size; i++) { 
		ll temp = sum - arr[i]; 
        ln c=0;
		if (s.find(temp) != s.end()) 
        {cout << "Pair with given sum " << sum << " is (" << arr[i] << ", " << temp << ")" << endl; 
        arr[i]=-sum;
        c+=1;
        }
		s.insert(arr[i]); 
	} 
    return c;
} 


int main() 
{ 

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll t;
    cin>>t;
    while (t--)
    {
        ll n;
        cin>>n;
        n*=2;
        ll A[n];
        ln sum=0,cp;

        for(auto i=0;i<n;i++) { cin>>A[i]; sum+=A[i]; }
        sum=(sum)/((n/2)+1);

        sort(A,A+n);
        if(n==2){
            if(A[n-1]==A[n-2]) cout<<"1\n";
            else cout<<"0\n";
        }
        else{
            if(A[n-1]==A[n-2] && sum==A[n-1] ) 
            {

                cp=printPairs(A, arr_size, n); 
             
             }
             else cout<<"0\n";
        }

        
         
    }
     

	// Function calling 
	

	return 0; 
} 
