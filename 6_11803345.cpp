#include <bits/stdc++.h>

using namespace std;

// Complete the makingAnagrams function below.
int makingAnagrams(string s1, string s2) {
    int cnt[26] = {},ans = 0;
    for(auto i:s1) cnt[i-'a']++;
    for(auto i:s2) cnt[i-'a']--;
    for(auto i=0; i<26; i++) ans += abs(cnt[i]);
    return ans;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s1;
    getline(cin, s1);

    string s2;
    getline(cin, s2);

    int result = makingAnagrams(s1, s2);

    fout << result << "\n";

    fout.close();

    return 0;
}
