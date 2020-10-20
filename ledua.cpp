#include<bits/stdc++.h>
#define mod 1000000007
#define int long long
#define phi 1.6180339
#define rep(i,n) for(auto i=0;i<(n);i++)
#define endl "\n"
#define For(i,a,b) for(auto i=(a);i<(b);i++)
#define op1 cin.tie(NULL)
#define op2 cout.tie(NULL)
#define op3 std::ios_base::sync_with_stdio(false)
#define MAXX 1000001
using namespace std;
int arr[MAXX];
void trozen()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        unordered_map<int,vector<int>> m1;
        rep(i,n)
        {
            cin>>arr[i];
            m1[arr[i]].push_back(i);
        }
        sort(arr,arr+n);
        int i,can=0;
        for(i=0;i<n;i++)
        {
            int itr = m1[arr[i]].size();
            for(int j=0;j<itr;++j,i++)
            {   int actual_index=m1[arr[i]][j];
                int temp=abs(actual_index-(i));
                if(temp%k==0)
                  can+=1;   
            }
            i-=1;
        }
       // cout<<can<<endl;
        if(can==n)
            cout<<"yes"<<"\n";
        else
            cout<<"no"<<"\n";
    }
}
int32_t main()
{
    op1;op2;op3;
    /*#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif*/
    trozen();
    return 0;
}
