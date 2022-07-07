#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll arr[100005];

void PrintAllSub(ll index, vector<ll> v, ll sizeOfArray)
{
    if(index >= sizeOfArray)
    {
        for(int i=0;i<v.size();i++)
            cout<<v[i]<<" ";
        printf("\n");
        return;
    }
    v.push_back(arr[index]); // taking the index value and again calling recursion
    PrintAllSub(index+1,v,sizeOfArray);
    v.pop_back();
    PrintAllSub(index+1,v,sizeOfArray); // not taking the index and calling recursion
}
int main()
{
    ll i,j,n;
    cin>>n;

    for(i=0;i<n;i++)
    {
        scanf("%lld",&arr[i]);
    }
    vector<ll> emptyVector;

    PrintAllSub(0,emptyVector,n);

}
