#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t,pro=0,mx=INT_MIN;
    cin>>t;
    char poss[24][4]={{'A','B','C','D'},
                      {'A','B','D','C'},
                      {'A','C','D','B'},
                      {'A','C','B','D'},  
                      {'A','D','B','C'},
                      {'A','D','C','B'},
                      {'B','A','C','D'},
                      {'B','A','D','C'},
                      {'B','C','A','D'},
                      {'B','C','D','A'},
                      {'B','D','A','C'},
                      {'B','D','C','A'},
                      {'C','A','B','D'},
                      {'C','B','D','A'},
                      {'C','D','A','B'},
                      {'C','D','B','A'},
                      {'C','A','D','B'},
                      {'C','B','A','D'},
                      {'D','A','B','C'},
                      {'D','A','C','B'},
                      {'D','B','C','A'},
                      {'D','B','A','C'},
                      {'D','C','B','A'},
                      {'D','C','A','B'}
            };
    while (t--)
    {
        mx=INT_MIN;
        //cout<<"ccwececewcece";
        int q,pri=0;
        cin>>q;
        int count[4][4]={0}; /*12,9,6,3*/
        
        while(q--)
        {
            
            char mo;
            cin>>mo;
        
            int time;
            cin>>time;
            count[mo-'A'][time%4]+=1;
            
            /* code */
        }
        int zc=0;
        ll n=0;
        for(int j=0;j<4;j++){
            zc=0;
            for(int i=0;i<4;i++) {
                if(count[i][j]==0)
                    zc+=1;
            }
            if(zc==4) n-=100;    
        }
        
        /*for(int i=0;i<24;i++){
            for(int j=0;j<4;j++){
                    cout<<poss[i][j]<<" ";
            }
            cout<<endl;
        }*/

        int fr[4]={0};
        int pr[4]={25,50,75,100};
        int k=0;

        for(int i=0;i<24;i++){
            //cout<<"f"<<endl;
            pri=0;
            for(int j=0;j<4;j++){
                //cout<<"f2\n";
                    int ix=poss[i][j]-'A';
                    fr[j]=count[ix][j];
                    
                }
            
            sort(fr,fr+4);
            //for(size_t s=0;s<4;s++) cout<<fr[s]<<" ";
            //cout<<endl;
            for(size_t s=0;s<4;s++){
                pri+=(fr[s]*pr[s]);
            }
            mx=max(mx,pri);
            }
        cout<<mx+n<<endl;
        pro+=(mx+n);
        /* code */
    }
    cout<<pro<<endl;
    
    return 0;
}