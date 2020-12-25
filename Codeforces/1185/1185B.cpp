#include<bits/stdc++.h>
using namespace std;
#define lli long long
int main(){
    int n;
    cin>>n;
    while(n--)
    {
        int count;
        string s[2];
        cin>>s[0];
        cin>>s[1];
        if(s[0][s[0].length()-1]!=s[1][s[1].length()-1] || s[0][0]!=s[1][0])
            cout<<"NO\n";
        
        else
        {
            for(int i=0,j=0;i<s[0].length();i++)
            {
                count=0;
                if(i<s[0].length()-1 && s[0][i]==s[0][i+1] && s[0][i]==s[1][j])
                {
                    j++;
                    continue;
                }
                for(;j<s[1].length();j++)
                {
                    if(s[0][i]!=s[1][j])
                        break;
                    else
                        count++;
                }
                if(count==0 || (i==s[0].length()-1 && j!=s[1].length()))
                {
                    count=0;
                    cout<<"NO\n";
                    break;
                }
            }
            if(count!=0)
                cout<<"YES\n";
        }
    }
    return 0;
}