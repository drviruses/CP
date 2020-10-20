#include<bits/stdc++.h>
#include<fstream>
#define ll long long


class hashcode_library{
    public:
    ll book_in_lib,days_sign,per_day;
    vector <ll> score_book;
    void ip(){
        cin>>book_in_lib>>days_sign>>per_day;
        ll t=book_in_lib;
        while(t--){
            ll v;
            cin>>v;
            score_book.push_back(v);
        }
    }

};

int_32 main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ifstream("a_")
    ofstream fo("hash2020.txt",ios::app|ios::out);
    ll books,libr,days;
    cin>>books>>libr>>days;
    hashcode_library lib_obj[libr];
    ll book_arr[books];
    for(size_t i=0;i<books;i++) cin>>book_arr[i];
    ll t=libr;
    
    while (t--)
    {
        

        /* code */
    }
    
    return 0;
}