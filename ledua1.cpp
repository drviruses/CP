
#include <bits/stdc++.h>
#include <chrono>
using namespace std;
using namespace std::chrono;
#define ll    long long


string convert_words(string num){ 
    string ans = "";
    int len = num.size();
    string single_digits[] = { "zero", "one", "two","three", "four","five", "six", "seven", "eight", "nine"}; 
    string two_digits[] = {"", "ten", "eleven", "twelve", "thirteen", "fourteen","fifteen", "sixteen", "seventeen", "eighteen", "nineteen"}; 
    string tens_multiple[] = {"", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"}; 
    string tens_power[] = {"hundred"}; 

    if (len == 1) { 
        ans += single_digits[num[0] - '0'];
        return ans; 
    } 
    int itr = 0;
    while (num[itr] != '\0') { 
        if (len >= 3) { 
            if (num[itr] -'0' != 0) { 
                ans += single_digits[num[itr] - '0'];
                ans += " ";
                ans += tens_power[len - 3];
                ans += " ";
            } 
            --len; 
        } 
        else { 
            if (num[itr] == '1') { 
                int sum = num[itr] - '0' + (num[itr+1]) - '0'; 
                ans += two_digits[sum];
                return ans; 
            } 
            else if (num[itr] == '2' && num[itr+1] == '0') { 
                ans += "twenty"; 
                return ans; 
            } 
            else { 
                int i = num[itr] - '0'; 
                if(i) ans + tens_multiple[i], ans += " ";
                ++itr; 
                if (num[itr] != '0') 
                    ans += single_digits[num[itr] - '0'], ans += " ";
            } 
        } 
        ++itr; 
    } 
    return ans;
} 

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    ll len;
    cin>>len;
    vector<ll> arr(len);
    for(auto &i:arr) cin>>i;
    ll vowel = 0;
    for(auto i:arr){
        string pas = to_string(i);
        string t = convert_words(pas);
        for(auto j:t){
            if(j =='a' or j == 'e' or j == 'i' or j == 'o' or j == 'u' ) vowel+= 1;
        }
    }
    ll ans = 0;
    sort(arr.begin(),arr.end());
    unordered_map<ll,ll> str;
    for(auto i:arr){
        if(str[vowel - i]) ans += 1;
        str[i] ++;
    }
    cout<<vowel<<" "<<ans<<endl;
    string temp = to_string(ans);
    string strans = convert_words(temp);
    cout<<strans;
    return 0;
}