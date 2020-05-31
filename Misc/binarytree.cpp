#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node* left;
    struct node* right;
};
node* newnode(int data)
{
    node* newnode=new node; 
    newnode->data=data;
    newnode->left=newnode->right=NULL;
    return newnode;
}
node* insert(node* root,int data)
{
    if(root==NULL)
        root=newnode(data);
    else if(data<=root->data)
        root->left=insert(root->left,data);
    else 
        root->right=insert(root->right,data);
    return root;
}
bool search(node* root,int data)
{
    if(root==NULL)
        return false;
    else if(root->data==data)
        return true;
    else if(data<=root->data)
        search(root->left,data);
    else
        search(root->right,data);
}
int main()
{
    node* root;
    int n;
    root=NULL;
    root=insert(root,15);
    root=insert(root,20);
    root=insert(root,10);
    cout<<"Enter the number\n";
    cin>>n;
    cout<<root->data<<endl;
    if(search(root,n))
        cout<<"Found\n";
    else
    {
        cout<<"NOT FOUND\n";
    }    
    return 0;
}   