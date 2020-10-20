#include<bits/stdc++.h>

using namespace std;
void combo(int arr[], int data[],int start, int end,int index, int r) ; 

vector<int> com;
void recombo(int arr[], int n, int r)  
{  
    int data[r];  
    combo(arr, data, 0, n-1, 0, r);  
}  
  

void combo(int arr[], int data[],int start, int end,int index, int r)  
{  
    int mi=INT_MAX,sum=0,c=0;
    
    if (index == r)  
    {  
       
        for (int j = 0; j < r; j++) {
             sum+=data[j];
             
           }
       // mi=min(mi,sum); 
        com.push_back(sum); 
        return;  
    }  
    
    for (int i = start; i <= end && end - i + 1 >= r - index; i++)  
    {  
        data[index] = arr[i];  
    
        combo(arr, data, i+1, end, index+1, r);  
    }  
}  

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--){
        int n,r,c=0;
        cin>>n>>r;
        int arr[n];
        for(int i=0;i<n;i++)
          cin>>arr[i];
        recombo( arr,n, r); 
        int mini=*min_element(com.begin(), com.end());
        for(int i=0;i<com.size();i++) cout<< com[i]<<" "; cout<< endl;
        for(int i=0;i<com.size();i++)
          {
              if(com[i]==mini)
               c+=1;
          }
          cout<<c<<endl;
    }
    return 0;
}