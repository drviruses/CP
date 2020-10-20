#include<bits/stdc++.h>
#define _CRT_SECURE_NO_DEPRECATE
#define ll long long

using namespace std;

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll songs,dur;
    cin>>songs>>dur;
    ll song_t[songs],sum=0;
    for(auto i=0;i<songs;i++){ cin>>song_t[i]; sum+=song_t[i];}

    if(sum+((songs-1)*10)>dur) cout<<"-1";
    else{
        cout<<((songs-1)*10)/5+((dur-(sum+(songs-1)*10))/5);
    }
    return 0;
}