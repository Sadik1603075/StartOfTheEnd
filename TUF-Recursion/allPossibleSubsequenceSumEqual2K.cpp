#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll arr[100005];

void allPossibleSum (ll index, vector<ll>v , ll sum , ll k, ll sizeOfArray)
{
    if(sum==k)
    {
        for(int i=0;i<v.size();i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
        return;
    }
    if(sum>k)
        return;
    if(index >=sizeOfArray)
        return;

    sum +=arr[index];
    v.push_back(arr[index]);
    allPossibleSum(index+1,v,sum,k,sizeOfArray);
    v.pop_back();
    sum -=arr[index];
    allPossibleSum(index+1,v,sum,k,sizeOfArray);
}

int main()
{
    ll i,j,n,k;
    cin>>n>>k;

    for(i=0; i<n; i++)
    {
        scanf("%lld",&arr[i]);
    }
    vector<ll>emptyVector;

    allPossibleSum(0,emptyVector,0,k,n);
    return 0;
}
