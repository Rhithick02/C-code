#include<bits/stdc++.h>
using namespace std;
#define RAND_MAX 11;
void toss(char ch1[],char ch2[],int p1,int comp,int score)
{
    cout<<"Odd or even?\n";
    cin.getline(ch1,100);
    cin>>p1;
    comp=rand();
    score=p1+comp;
    if(score%2==0)
    {
        cout<<"You lost the toss and the computer chose to ";
        if(score<9)
        {
            cout<<"bat";
            strcpy(ch2,"bowl");
        }
        else 
        {
            cout<<"bowl";
            strcpy(ch2,"bat");
        }
    }
    else 
    {
        cout<<"You won the toss and choose to \n";
        cin.getline(ch2,100);
        cout<<ch2;
    }
}
void inn1(int p1,int comp,int& score,char ch2[])
{
    if(strcmp(ch2,"bat")==0)
    {
        do
        {
            cin>>p1;
            comp=rand();
            if(p1!=comp)
            score+=p1;
        } while (p1!=comp);
        cout<<"\n\t\tOUT..YOUR SCORE IS "<<score<<" and the target is "<<score+1;
    }
    else
    {
        do
        {
            comp=rand();
            cin>>p1;
            if(p1!=comp)
            score+=comp;
        } while (p1!=comp);
        cout<<"\n\t\tOUT..YOUR SCORE IS "<<score<<" and the target is "<<score+1;
    }    
}
void inn2(int p1,int comp,int& score,char ch2[],int a)
{
    if(strcmp(ch2,"bat")==0)
    {
        do
        {
            cin>>p1;
            comp=rand();
            if(p1!=comp)
            score+=p1;
        } while (p1!=comp);
        cout<<"YOUR SCORE IS "<<score;
    }
    else
    {
        do
        {
            comp=rand();
            cin>>p1;
            if(p1!=comp)
            score+=comp;
        } while (p1!=comp);
        cout<<"YOUR SCORE IS "<<score;
    }    
    if(strcmp(ch2,"bowl")==0&&a>score)
    cout<<"\n\nP1 WINS!!!";
    else if(strcmp(ch2,"bat")==0&&a<score)
    cout<<"\n\nP1 WINS!!!";
    else 
    cout<<"\n\n COMPUTER WINS!!!";
}

int main()
{
    cout<<"\t\t\tHAND CRICKET\n\n";
    int score=0,p1,comp,a;
    char ch1[100],ch2[100];
    toss(ch1,ch2,p1,comp,score);   
    inn1(p1,comp,score,ch2);
    a=score;
    score=0;
    if(strcmp(ch2,"bat")==0)
    strcpy(ch2,"bowl");
    else 
    strcpy(ch2,"bat");
    inn2(p1,comp,score,ch2,a);       
    return 0;
}