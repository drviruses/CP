// Program to compute sum of ranges for different range 
// queries 
#include <bits/stdc++.h> 
using namespace std; 

#define ll int
const int mod = 998244353;


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
    
// Variable to represent block size. This is made global 
// so compare() of sort can use it. 
int block; 

// Structure to represent a query range 
struct Query 
{ 
	int L, R; 
}; 

// Function used to sort all queries so that all queries 
// of the same block are arranged together and within a block, 
// queries are sorted in increasing order of R values. 
bool compare(Query x, Query y) 
{ 
	// Different blocks, sort by block. 
	if (x.L/block != y.L/block) 
		return x.L/block < y.L/block; 

	// Same block, sort by R value 
	return x.R < y.R; 
} 

int myXOR(int x, int y) 
{ 
   return (x | y) & (~x | ~y); 
} 

// Prints sum of all query ranges. m is number of queries 
// n is size of array a[]. 
void queryResults(int a[], int n, Query q[], int m) 
{ 
	// Find block size 
	block = (int)sqrt(n); 

	// Sort all queries so that queries of same blocks 
	// are arranged together. 
	sort(q, q + m, compare); 

    for(int i=0;i<m;i++) cout<<q[i].L<<" "<<q[i].R<<endl;
    cout<<endl;
	// Initialize current L, current R and current sum 
	int currL = 0, currR = 0; 
	//int currSum = 0; 

 
           unordered_map<int,int> freq;

	// Traverse through all queries 
	for (int i=0; i<m; i++) 
	{ 
		// L and R values of current range 
		int L = q[i].L-1, R = q[i].R-1; 

		// Remove extra elements of previous range. For 
		// example if previous range is [0, 3] and current 
		// range is [2, 5], then a[0] and a[1] are subtracted 
		while (currL < L) 
		{ 
			freq[a[currL]]-=1; 
			currL++; 
		} 

		// Add Elements of current Range 
		while (currL > L) 
		{ 
			freq[a[currL-1]]+=1;  
			currL--; 
		} 
		while (currR <= R) 
		{ 
			freq[a[currR]]+=1;  
			currR++; 
		} 

		// Remove elements of previous range. For example 
		// when previous range is [0, 10] and current range 
		// is [3, 8], then a[9] and a[10] are subtracted 
		while (currR > R+1) 
		{ 
		    freq[a[currL-1]]-=1;  
			currR--; 
		} 

		// Print sum of current range 
		//cout << "Sum of [" << L << ", " << R << "] is " << currSum << endl; 
        
            unordered_map<int,int>::iterator itr;
            ll xor_val_i=0;
            for(itr=freq.begin();itr!=freq.end();itr++) {
                cout<<itr->first<<"---->"<<itr->second<<endl;
                xor_val_i^=(itr->second);
                }
            cout<<xor_val_i<<endl;

            ll possible_combi=0;

            if(xor_val_i==0) cout<<"0"<<endl;
            else{
                ll msb=floor(log2(xor_val_i));
                for(itr=freq.begin();itr!=freq.end();itr++){

                    
                    if(itr->second & (1<<msb)){
                                           cout<<"Val fre: "<<(itr->second) <<endl;
                        possible_combi=(possible_combi)%mod+(combi(itr->second,(itr->second ^ xor_val_i),mod))%mod;
                        cout<<combi(3,1,mod)<<endl;
                    }
                }
                cout<<possible_combi%mod<<endl;
            }
	} 
} 

// Driver program 
int32_t main() 
{ 
    
    fac[0]=fac[1]=1;
    for(auto i=2;i<100000;i++) fac[i]=(i*fac[i-1])%mod;

	int a[] = {1,2,1,2,2}; 
	int n = sizeof(a)/sizeof(a[0]); 
	Query q[] = {{1,1}, {2,3}, {2, 5}}; 
	int m = sizeof(q)/sizeof(q[0]); 
	queryResults(a, n, q, m); 
	return 0; 
} 
