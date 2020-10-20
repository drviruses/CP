#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'maximumPower' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts STRING s as parameter.
 */

int maximumPower(string s) {
    long unsigned int i,j;
    for(i=s.length()-1;i>=0;i--)
    {
        if(s[i]=='1')
            break;
    }
    
    double d=0;
    int p=i;
    for(j=s.length()-1;j>=s.length()-1-i;j--)
    {
        d+=pow(2,j)*(s[p]-'0');
        p--;
    }
    
    return (int)d;
}

int main()
{

    string s;
    cin>>s;
    int result = maximumPower(s);
    return 0;
}