#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *left,*right;
};
node *root;
node *getnewnode(int x)
{
    node *newnode=new node;
    newnode->data=x;
    newnode->left=NULL;
    newnode->right=NULL;
    return newnode;
}
int main(){
    int n,m;
    cin>>n>>m;

}