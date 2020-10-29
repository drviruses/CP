#include <bits/stdc++.h>
using namespace std;
 
 
int main() 
{
     freopen("hack1.txt","r",stdin);
    freopen("mine1.txt","w",stdout);
	int t;
	cin>>t;
	while(t--)
	{
		int l, r;
    cin >> l >> r;
 
    if(2 * l > r){
        cout << "YES";
    }
    else cout << "NO";
    cout << endl;
	}
}