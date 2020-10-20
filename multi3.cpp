/*
    @uthor: Amit Kumar
    user: CodeChef: dr_virus_ ; Codeforces,Hackerearth,Hakerrank: dr_virus;
*/
#include <bits/stdc++.h>
using namespace std;

//#include <boost/multiprecision/cpp_int.hpp>
//namespace mp = boost::multiprecision;
//#define ln mp::cpp_int;
#define ll long long
#define ld double
#define pp pair<ll,ll>
#define endl "\n"
#define nfrep(a) for(size_t i=0;i<a;i++)
#define fnrep(a,b) for(size_t i=a;i<=b;i++)
#define nbrep(a) for(size_t i=a;i>=0;i--)
#define bnrep(a,b) for(size_t i=a;i>=b;i--)

const ll mod = 1e9+7;
const ll inf = 1e18;


int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
 /* #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif */

    ll t,k,sum,d_0,d_1;
    cin>>t;
    while(t--){
        
        cin >> k >> d_0 >> d_1;
        sum=0;
        sum=(d_0+d_1);
        if (k==2)
        {
            if (sum%3==0) cout << "YES\n";
            else cout << "NO\n";
            continue;
        }
        sum += sum%10;
        if (k==3)
        {
            if (sum%3==0) cout << "YES\n";
            else cout << "NO\n";
            continue;
        }
        k-=3;
        sum=(d_0+d_1);
        ll digit_nx = sum%10;
        sum += digit_nx;
        if (digit_nx==5 || digit_nx==0)
        {
            cout << "NO\n";
            continue;
        }
        while (k>0)
        {
            digit_nx = (digit_nx*2)%10;
            if (digit_nx==2) break;
            sum+=digit_nx;
            k--;
        }
                sum+=(k/4)*20;
                k%=4;
                while (k>0)
                {
                    sum+=digit_nx;
                    k--;
                    digit_nx = (digit_nx*2)%10;
                }
                if (sum%3==0)
                {
                    cout << "YES\n";
                }
                else cout << "NO\n";
        //your code goes here
    }

    return 0;
}