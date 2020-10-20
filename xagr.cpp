#include <bits/stdc++.h>
using namespace std;
//freopen("input.txt", "r", stdin);
//freopen("output.txt", "w", stdout);

typedef long long ll;
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define forr(i, a, b) for(ll i = (a); i < (ll) (b); i++)
#define forn(i, n) forr(i, 0, n)
#define pb push_back
#define mp make_pair
#define all(c) (c).begin(),(c).end()
#define DBG(x) cerr << #x << " = " << (x) << endl
#define DBGV(v,n) forn(i,n) cout << v[i] << " "; cout << endl
#define esta(x,c) ((c).find(x) != (c).end())
#define RAYA cerr << "===============================" << endl


int main()
{
	FIN;
	
  int t; cin >> t;
  while(t--) {
    int n; cin >> n;
    string pal; cin >> pal;
    vector <int> pos;
    forn(i,n) {
      int cont = 1;
      while(i+cont < n && pal[i+cont] == pal[i]) cont++;
      pos.pb(cont);
      i += cont-1;
    }
    for(int u : pos) cout << u << " "; cout << "\n";
    int ans = 0; int b = 0;
    forn(i,pos.size()) {
      ans++; b = max((int)(i+1),b);
      if(pos[i] == 1) {
        while(b < pos.size() && pos[b] == 1) b++;
        if(b == pos.size()) i++;
        else pos[b]--;
        //~ DBG(i); DBG(pos[i]); DBG(b);
      }
      
    }
    cout << ans << "\n";
  }
  
  return 0;
}
