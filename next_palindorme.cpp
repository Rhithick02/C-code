#include<bits/stdc++.h>
using namespace std;
#define lli long long
#define For(i,n) for(int i=0;i<n;i++)
#define vi vector<int>
#define vil vector<long long>
#define asc(x) x.begin(),x.end()
#define des(x) x.rbegin(),x.rend()
#define pb push_back
#define pa pair<int,int>
#define pal pair<long long,long long>
#define vpa vector<pair<int,int>>
#define vpal vector<pair<long long,long long>>
#define fi first
#define se second

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int num,flag=1;
        cin>>num;
        string s;
        while(flag)
        {
            num++;
            flag=0;
            s=to_string(num);
            int size=s.length();
            for(int i=0;i<size/2;i++)
            {
                if(s[i]!=s[size-1-i])
                {
                    flag=1;
                    break;
                }
            }
        }
        cout<<num<<endl;
    }
    return 0;
}