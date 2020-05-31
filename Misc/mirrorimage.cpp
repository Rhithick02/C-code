#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node* left;
    node* right;
};
node* temp=NULL;
node* newnode(int root)
{
    node* temp=new node;
    temp->left=temp->right=NULL;
    temp->data=root;
    return temp;
}
void search(int root,node* rooot)
{
    if(rooot==NULL)
        return;
    if(root==rooot->data)

    search(root,node->left);
    search(root,node->right);

}
node* insert(node* rooot,int root,int child,char ch)
{
    
    if(root=rooot->data)
    {
        if(ch=='R')
            rooot->right->data=child;
        else
            rooot->left->data=child;
    }
    else if(root>rooot->data)
        rooot->right=insert(rooot->right,root,child,ch);
    else
        rooot->left=insert(rooot->left,root,child,ch);
    return rooot;

}
int main()
{
    node* rooot;
    int n,q,root,child;
    char ch;
    cin>>n;
    cin>>root>>child>>ch;
    if(ch=='R')
        rooot->right=newnode(root);
    else
        rooot->left=newnode(root);
    n--;
    while(--n)
    {
        cin>>root>>child>>ch;
        search(root,rooot);
        
    }
    cout<<rooot->right->data;
    return 0;
}