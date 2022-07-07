#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll arr[100005];

bool onePossibleSum (ll index, vector<ll>v , ll sum , ll k, ll sizeOfArray)
{
    if(sum==k)
    {
        for(int i=0;i<v.size();i++)
        {
            cout<<v[i]<<" ";
        }
        return true;
    }
    if(sum>k)
        return false;
    if(index >=sizeOfArray)
        return false;

    sum +=arr[index];
    v.push_back(arr[index]);
    if(onePossibleSum(index+1,v,sum,k,sizeOfArray) == true) return true;
    v.pop_back();
    sum -=arr[index];
    if(onePossibleSum(index+1,v,sum,k,sizeOfArray) == true) return true;

    return false;
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

    onePossibleSum(0,emptyVector,0,k,n);
    return 0;
}

