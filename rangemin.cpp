// C++ implementation of above approach 
#include <bits/stdc++.h> 
using namespace std; 

// Each segment of the segment tree would be a set 
// to maintain distinct elements 
set<int>* segment; 

// Build the segment tree 
// i denotes current node, s denotes start and 
// e denotes the end of range for current node 
void build(int i, int s, int e, int arr[]) 
{ 

	// If start is equal to end then 
	// insert the array element 
	if (s == e) { 
		segment[i].insert(arr[s]); 
		return; 
	} 

	// Else divide the range into two halves 
	// (start to mid) and (mid+1 to end) 
	// first half will be the left node 
	// and the second half will be the right node 
	build(2 * i, s, (s + e) / 2, arr); 
	build(1 + 2 * i, 1 + (s + e) / 2, e, arr); 

	// Insert the sets of right and left 
	// node of the segment tree 
	segment[i].insert(segment[2 * i].begin(), 
					segment[2 * i].end()); 

	segment[i].insert(segment[2 * i + 1].begin(), 
					segment[2 * i + 1].end()); 
} 

// Query in an range a to b 
set<int> query(int node, int l, int r, int a, int b) 
{ 
	set<int> left, right, result; 

	// If the range is out of the bounds 
	// of this segment 
	if (b < l || a > r) 
		return result; 

	// If the range lies in this segment 
	if (a <= l && r <= b) 
		return segment[node]; 

	// Else query for the right and left 
	// leaf node of this subtree 
	// and insert them into the set 
	left = query(2 * node, l, (l + r) / 2, a, b); 
	result.insert(left.begin(), left.end()); 

	right = query(1 + 2 * node, 1 + (l + r) / 2, r, a, b); 
	result.insert(right.begin(), right.end()); 

	// Return the result 
	return result; 
} 

// Initialize the segment tree 
void init(int n) 
{ 
	// Get the height of the segment tree 
	int h = (int)ceil(log2(n)); 
	h = (2 * (pow(2, h))) - 1; 

	// Initialize the segment tree 
	segment = new set<int>[h]; 
} 

// Function to get the result for the 
// subarray from arr[l] to arr[r] 
void getDistinct(int l, int r, int n) 
{ 
	// Query for the range set 
	set<int> ans = query(1, 0, n - 1, l, r); 

	cout << ans.size() << endl; 
} 

// Driver code 
int main() 
{ 
    int n,q;
    cin>>n>>q;

	int arr[n];
    for(auto i=0; i<n; i++) cin>>arr[i];


	init(n); 

	// Bulid the segment tree 
	build(1, 0, n - 1, arr); 

	// Query in range 0 to 4 
    for(auto i=0;i<q;i++){
        int f, t;
        cin>>f>>t;
        f-=1, t-=1;
	getDistinct(f, t, n); 

    }

	return 0; 
} 
