#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll arr[100005];


void reverseArray(ll startIndex, ll sizeOfArray)
{
    if(startIndex > sizeOfArray/2)
        return;
    swap(arr[startIndex],arr[sizeOfArray-startIndex+1]);
    reverseArray(startIndex+1,sizeOfArray);
}
int main()
{
    ll i,j,k,l,n,m;
    cin>>n;

    for(i=1;i<=n;i++)
    {
        scanf("%lld",&arr[i]);
    }
    reverseArray(1,n);

    for(i=1;i<=n;i++)
    {
        printf("%lld ",arr[i]);
    }
}

