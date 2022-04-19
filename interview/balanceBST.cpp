#include <stdio.h>
#include "bits/stdc++.h"
//#include<bits/stdc++.h>
using namespace std;
#define ll long long

map<ll, ll> mp;
vector<ll> v;
set<ll> st;

struct Node{
    int data;
    Node *left, *right;
    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

Node* sortedArrayToBST(int arr[],int start, int end)
{
    if( start> end)
        return NULL;
    int mid = ( start+end)/2;
    Node* root = new Node(arr[mid]);

    root->left = sortedArrayToBST(arr,start, mid-1);
    root->right = sortedArrayToBST(arr,mid+1,end);

    return root;

}
void preOrderPrint(Node* root)
{
    if( root==NULL)
        return;
    printf("%d ",root->data);
    
    preOrderPrint(root->left);
    preOrderPrint(root->right);
}
int main()
{
    int arr[10];
    for(int i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    Node* root = sortedArrayToBST(arr,0,4);
    preOrderPrint(root);
    

}