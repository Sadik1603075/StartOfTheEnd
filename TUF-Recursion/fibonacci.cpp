#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll arr[100005];

void Fibonacci(ll fibIndex, ll nthFib)
{
    if(fibIndex>nthFib)
        return;

    arr[fibIndex] = arr[fibIndex-1]+arr[fibIndex-2];
    Fibonacci(fibIndex+1,nthFib);
}

int main()
{
    ll i,j,k,m,n;
    cin>>n;

    arr[0]=0;
    arr[1]=1;

    Fibonacci(2,n);

    for(i=0;i<=n;i++)
    {
        printf("%lld ",arr[i]);
    }
}
