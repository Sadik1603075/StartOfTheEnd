#include<bits/stdc++.h>
using namespace std;
#define ll long long

int allPossibleCount( ll index, ll sum , ll k,ll sizeOfArray, ll arr[])
{
    if(sum==k)
        return 1;
    else if(sum >k)
        return 0;
    if(index >=sizeOfArray)
        return 0;

    sum += arr[index];
    ll taken = allPossibleCount(index+1,sum,k,sizeOfArray,arr);
    sum -= arr[index];
    ll notTaken = allPossibleCount(index+1,sum,k,sizeOfArray,arr);
    return taken+ notTaken;
}

int main()
{
    ll i,j,k,n;
    cin>>n>>k;
    ll arr[n+1];
    for(i=0;i<n;i++)
    {
        scanf("%lld",&arr[i]);
    }
    ll ans = allPossibleCount(0,0,k,n,arr);

    cout<<ans<<endl;
}
