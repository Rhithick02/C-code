#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int player1[t],player2[t];
    vector <int> score(t);
    cin>>player1[0]>>player2[0];
    score[0]=player1[0]-player2[0];
    for(int i=1;i<t;i++)
    {
        cin>>player1[i]>>player2[i];
        player1[i]+=player1[i-1];
        player2[i]+=player2[i-1];
        score[i]=player1[i]-player2[i];
    }
    sort(score.begin(),score.end(),greater<int>());
    if(score[0]>(score[t-1]-(score[t-1]*2)))
    cout<<"1 "<<score[0];
    else
    cout<<"2 "<<(score[t-1]-(score[t-1]*2));
    return 0;    
}