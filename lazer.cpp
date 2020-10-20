
#include <bits/stdc++.h>
#define ll long long int
const int mod = 998244353;
using namespace std;

ll fac[100000];

ll power(ll x, ll y, ll p) 
{ 
    ll res = 1;     
    x = x % p;  
    while (y > 0) 
    { 
        if (y & 1) 
            res = (res*x) % p; 
        y = y>>1; 
        x = (x*x) % p; 
    } 
    return res; 
} 
  
ll modInverse(ll n, ll p) 
{ 
    return power(n, p-2, p); 
} 
ll combi(ll n, ll r, ll p) 
{ 
   if (r==0) 
      return 1; 
  
    return (fac[n]* modInverse(fac[r], p) % p * 
            modInverse(fac[n-r], p) % p) % p; 
} 
  

/*
// Prints sum of all query ranges. m is number of queries 
// n is size of array a[]. 
void queryResults(int a[], int n, Query q[], int m) 
{ 
	// Find block size 
	block = (int)sqrt(n); 

	// Sort all queries so that queries of same blocks 
	// are arranged together. 
	sort(q, q + m, compare); 

    for(int i=0;i<m;i++) cout<<q[i].L<<" "<<q[i].R;
    cout<<endl;
	// Initialize current L, current R and current sum 
	int currL = 0, currR = 0; 
	int currSum = 0; 

	// Traverse through all queries 
	for (int i=0; i<m; i++) 
	{ 
		// L and R values of current range 
		int L = q[i].L, R = q[i].R; 

		// Remove extra elements of previous range. For 
		// example if previous range is [0, 3] and current 
		// range is [2, 5], then a[0] and a[1] are subtracted 
		while (currL < L) 
		{ 
			currSum -= a[currL]; 
			currL++; 
		} 

		// Add Elements of current Range 
		while (currL > L) 
		{ 
			currSum += a[currL-1]; 
			currL--; 
		} 
		while (currR <= R) 
		{ 
			currSum += a[currR]; 
			currR++; 
		} 

		// Remove elements of previous range. For example 
		// when previous range is [0, 10] and current range 
		// is [3, 8], then a[9] and a[10] are subtracted 
		while (currR > R+1) 
		{ 
			currSum -= a[currR-1]; 
			currR--; 
		} 

		// Print sum of current range 
		cout << "Sum of [" << L << ", " << R 
			<< "] is " << currSum << endl; 
	} 
} 
*/




int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    fac[0]=fac[1]=1;
    for(auto i=2;i<100000;i++) fac[i]=(i*fac[i-1])%mod;
    
    ll t;
    cin>>t;
    while (t--)
    {
        ll n;
        cin>>n;
        ll arr_ele[n];
        
        for(auto i=0;i<n;i++){
            cin>>arr_ele[i];
        }

        ll q;
        cin>>q;
        while(q--){
            unordered_map<ll,ll> freq;
            ll possible_combi=0;
            ll left_lim,right_lim;
            cin>>left_lim>>right_lim;

            for(auto i=left_lim-1;i<right_lim;i++) freq[arr_ele[i]]+=1;

            unordered_map<ll,ll>::iterator itr;
            ll xor_val_i=0;
            for(itr=freq.begin();itr!=freq.end();itr++) xor_val_i^=(itr->second);
            
            //for(itr=freq.begin();itr!=freq.end();itr++) cout<<"ELE: "<<itr->first<<"---> "<<itr->second<<endl;

            cout<<"XOR: "<<xor_val_i<<endl;

            if(xor_val_i==0) cout<<"0"<<endl;
            else{
                ll msb=floor(log2(xor_val_i));
                for(itr=freq.begin();itr!=freq.end();itr++){
                   
                    
                    if(itr->second & (1<<msb)){
                        cout<<"Val fre: "<<itr->second<<endl;
                        possible_combi=(possible_combi)%mod+(combi(itr->second,(itr->second ^ xor_val_i),mod))%mod;
                        cout<<combi(3,1,mod)<<endl;
                    }
                }
                cout<<possible_combi%mod<<endl;
            }   
        }
        /* code */
    }
    
    return 0;
}