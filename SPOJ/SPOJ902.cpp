#include<bits/stdc++.h>
using namespace std;
#define lli long long
#define For(i,a,n) for(int i=(a);i<n;i++)
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
    float c;
    while(cin>>c)
    {
        if(c==0.00) break;
        int cards=1;
        float sum=0;
        while(sum<=c)
        {
            cards++;
            sum+=1.0/cards;
        }
        cout<<cards-1<<" card(s)"<<endl;
    }
    return 0;
}