#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll arr[100005];

void reverseArray(ll startIndex, ll endIndex)
{
    if(startIndex>=endIndex)
        return;
    swap(arr[startIndex],arr[endIndex]);
    reverseArray(startIndex+1,endIndex-1);
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
