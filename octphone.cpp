//stock exchange problem
//ek array h usme meko ye find krna h us index se phle kitte smallest h hr ek elemt ke liye

        #include<bits/stdc++.h>
        #define ll long long int
        using namespace std;

        int main(){
            int t;
            cin>>t;

           while (t--)
           {
               /* code */
        
            
            ll n;
            cin>>n;
            ll ar[n],s[n]={0};
            for(size_t i=0;i<n;i++) cin>>ar[i];
            
            stack <ll> st;
            st.push(0);
            for(size_t i=1;i<n;i++){
                st.push(i);
                while( !st.empty()){
                    if((st.top()!=i)&&(ar[st.top()]<ar[i])==0)
                    s[i]+=1;
                    else
                     i+=1;
                    st.pop();
                }
                for(size_t j=0;j<=i;j++)
                st.push(j); 
            }

            for(size_t i=0;i<n;i++) cout<<s[i]<<" ";
            /*ll* i1; 
            i1 = std::max_element(s, s + n);
            cout<<*i1<<endl;*/
           }
            return 0;
        }