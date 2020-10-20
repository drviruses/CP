/*
    @uthor: Amit Kumar
    user: dr_virus_
*/
#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>
namespace mp = boost::multiprecision;
#define ln mp::cpp_int;
#define ll long long
#define pp pair<ll,ll>
#define endl "\n"
#define nfrep(a) for(size_t i=0;i<a;i++)
#define fnrep(a,b) for(size_t i=a;i<=b;i++)
#define nbrep(a) for(size_t i=a;i>=0;i--)
#define bnrep(a,b) for(size_t i=a;i>=b;i--)
using namespace std;
const int mod = 1e9+7;



ll day_of_year(ll dd, ll mm, ll yy)  
{  
    static ll tt[] = { 0, 3, 2, 5, 0, 3, 
                       5, 1, 4, 6, 2, 4 };  
    yy -= mm < 3;  
    return ( yy + yy / 4 - yy / 100 +  
             yy / 400 + tt[mm - 1] + dd) % 7;  
}


ll is_leap_year(ll x)
{
                ll flag=0;
               if(x%4==0)
               {
                   if(x%100==0)
                   {
                       if(x%400==0)flag++;
                   }
                   else
                        flag++;
                   
               }
               return flag;
}
int main()
{
    ll corona[405]={0}; ll kingo[402] = {0};
    corona[0]=0;
    ll sum=0;
    for(ll i=1;i<=401;++i)
    {

        if(is_leap_year(i)>0)
                {
                    if(day_of_year(1,2,i)==6)
                         {
                             sum+=1;
                             kingo[i] = 1;
                         }
                        
                }
        if(is_leap_year(i)==0)
                {
                    if(day_of_year(1,2,i)==6 || day_of_year(1,2,i)==0)
                         {
                             sum+=1;
                             kingo[i] = 1;
                         } 
                }
                corona[i]=sum;
    }
    ll t;
    cin>>t;
    while(t--)
    {
        ll aur_yar,szer,ey,em;
        cin>>szer>>aur_yar;
        cin>>em>>ey;
        ll cnt=0;
        ll sflag=0;
        ll eflag=0;
        ll noofyear = 0;
        ll xx = 0;
        ll answer_key = 0;
        noofyear = ey - aur_yar;
        if(noofyear >= 400) xx=noofyear/400;
        aur_yar=aur_yar%400;
        ey=ey%400;
        if(aur_yar<ey)
        {
            answer_key = corona[ey] - corona[aur_yar];
        }
        else if(aur_yar > ey)
        {
            answer_key = corona[ey] + (corona[400] - corona[aur_yar]);
        }
        if(kingo[aur_yar] && kingo[ey]) {answer_key++;}
        else if(kingo[aur_yar]) {
			answer_key++;
		}
        if(szer > 2) {
            if(kingo[aur_yar]) {
                answer_key--;
            }
        }
        if(em < 2) {
            if(kingo[ey]) {
                answer_key--;
            }
        }
        cout << answer_key + xx * 101 << endl;
    }
    return 0;    
       
}
