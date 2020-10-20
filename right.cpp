#include<bits/stdc++.h>
#define ll long long
#include<vector>
#include<map>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    ll t;
    cin>>t;
    while(t--){
        ll c0=0,c1=0;
        vector<pair<double,double> > points;
        map <pair<double,double>,bool> chk;
        ll c_x,c_y;;
        cin>>c_x>>c_y;
        ll itr=c_x+c_y;
        //cout<<c_x<<" "<<c_y<<endl;
        while (c_x--)
        {
            double y=0,x;
            cin>>x;
            points.push_back(make_pair(x,y));
            chk[make_pair(x,y)]=true;
            /* code */
        }
        while(c_y--){
            double x=0,y;
            cin>>y;
            points.push_back(make_pair(x,y));
            chk[make_pair(x,y)]=true;
        }
        //cout<<"aaa";
        
        // cout<<itr<<endl;
        //for(auto i=0;i<itr;i++) cout<<points[i].first<<" "<<points[i].second<<" ";
        //cout<<endl;

        double x1,y1,x2,y2;
        for(auto i=0;i<itr;i++){
            for(auto j=i+1;j<itr;j++){
                if(i!=j){
                 x1=double(points[i].first);
                 y1=double(points[i].second);
                 x2=double(points[j].first);
                 y2=double(points[j].second);
               cout<<"Pair: "<<x1<<" "<<y1<<" "<<x2<<" "<<y2<<endl;
                double mid_x=double((x1+x2)/2);
                double mid_y=double((y1+y2)/2);
                double rad=double(sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)))/2);
                double Y1=0,X1=0;
                if((rad*rad)>(mid_x*mid_x))
                    Y1=double(sqrt(((rad*rad)-(mid_x*mid_x)))+mid_y);
                if((rad*rad)>(mid_y*mid_y))
                    X1=double(sqrt(((rad*rad)-(mid_y*mid_y)))+mid_x);
                double X2=-X1;
                double Y2=-Y1;
                cout<<X1<<" "<<Y1<<"   "<<X2<<" "<<Y2<<endl;
                cout<<"R:"<<rad<<endl;
                cout<<"C:"<<mid_x<<" "<<mid_y<<endl;
                chk[make_pair(x1,y1)]=false;
                chk[make_pair(x2,y2)]=false;
                cout<<"IN:"<<X1<<" "<<Y1<<endl;
                //bool a=chk[make_pair(-X,0)];
                //cout<<a<<endl;
                if(chk[make_pair(X1,0)]==true ) {c0+=1;cout<<"a1"<<endl;}
                 if(chk[make_pair(0,Y1)]==true) {c0+=1;cout<<"a2"<<endl;}

                if(Y1==0){
                    if(chk[make_pair(X2,0)]==true  &&  abs(mid_x-(X2))==rad) {c0+=1;cout<<"a3"<<endl;}
                }
                if(X1==0){
                    if(chk[make_pair(0,Y2)]==true && abs(mid_y-(Y2))==rad) {c0+=1;cout<<"a4"<<endl;}
                }

                chk[make_pair(x1,y1)]=true;
                chk[make_pair(x2,y2)]=true;

                cout<<"==============================================================="<<endl;
                }

                
            }
            
        }
        
        cout<<c0/2+c1<<endl;
    }
    return 0;
}