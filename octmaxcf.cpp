//stock exchange problem
//ek array h usme meko ye find krna h us index se phle kitte smallest h hr ek elemt ke liye

        #include<bits/stdc++.h>
        #include<vector>

        #define ll long long int
        using namespace std;

        int main(){
            int t;
            cin>>t;

           while (t--)
           {
            ll n,val;
            cin>>n;
            vector <ll> a;
            vector <ll> b;
            vector <ll> ca;

            for(size_t i=0;i<n;i++) {
                cin>>val;
                a.push_back(val);
                b.push_back(val);
            }
            sort(b.begin(),b.end());
            for(size_t i=0;i<b.size();i++){
                ll j=0,c=0;
                while (a[j]!=b[i])
                {
                    if(a[j]%b[i]==0)
                     c+=1;
                    j+=1; 
                     
                }
                ca.push_back(c);
                
            }
            
            cout<<*max_element(ca.begin(),ca.end())<<endl;

           }
            return 0;
        }