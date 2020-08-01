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
#define MAX 11
set<int> te;
vi ar(MAX),st(MAX),ovrl(MAX);
bool check(){
    if(te.size()==1 && (*te.begin()==1 || ovrl[*te.begin()]==1)) return true;
    if(te.size()==2){
        int x=0,y=0;
        for(auto it: te){
            if(!x) x=it;
            else y=it;
        }
        if((x==1 && ovrl[x]==1) || (y-x==1 && ovrl[y]==1)) return true;
    }
    return false;
}
int main(){
    ios::sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--){
        te.clear();
        For(i,0,MAX) st[i]=ovrl[i]=0;
        int n;
        n=rand()%10+1;
        vi St(MAX);
        For(i,0,n) ar[i]=rand()%10+1;
        For(i,0,n) St[ar[i]]++,st[ar[i]]++;
        int res1=n,res2;
        For(i,0,n){
            int prev=0,fl=0;
            For(j,1,11){
                if(!St[j]) continue;
                prev=0,fl=0;
                St[j]--;
                For(k,1,11){
                    if(!St[k]) continue;
                    if(!prev) prev=St[k];
                    else if(St[k]!=prev){
                        fl=1;
                        break;
                    }
                }
                if(!fl) break;
                St[j]++;
            }
            if(!fl) break;
            St[ar[n-1-i]]--;
            res1--;
        }
        For(i,1,MAX) if(st[i]) ovrl[st[i]]++,te.insert(st[i]);
        for(int i=n-1;i>=0;i--){
            if(check()){
                res2=i+1;
                break;
            }
            ovrl[st[ar[i]]]--;
            if(!ovrl[st[ar[i]]]) te.erase(st[ar[i]]);
            te.insert(--st[ar[i]]);
            ovrl[st[ar[i]]]++;
        }
        if(res1!=res2){
            cout<<n<<" "<<res1<<" "<<res2<<"\n";
            For(i,0,n) cout<<ar[i]<<" ";
            break;
        }
    }
    return 0;
}