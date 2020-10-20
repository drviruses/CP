// { Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
//User function Template for C++

int vicomparing (string first,string second){
    string first_second=first.append(second),second_first=second.append(first);
    int ret_rn=(first_second.compare(second_first)>0)? 1: 0;
    return ret_rn;
}

/** 
 *  Input param: A has the input numbers provided.
 *  Return String: Return the largest number in the form of string.
 **/ 
string findLargestNumber(vector<int> A)
{
    sort(A.begin(),A.end(),vicomparing);
    ostringstream s;
    if(!A.empty()){
        copy(A.begin(),A.end()-1,ostream_iterator<int>(s,""));
        s<<A.back();
    }
    return s.str();
}

// { Driver Code Starts.

int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> A;
        for (int i=0; i<n ; i++){
            int ip;
            cin>>ip;
            A.push_back(ip);
        }

        cout<<findLargestNumber(A)<<endl;

    }
}  // } Driver Code Ends