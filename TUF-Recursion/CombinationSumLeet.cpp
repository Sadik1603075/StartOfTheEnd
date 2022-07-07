#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<vector<ll>>ans;

void CombinationSum(ll index, vector<ll> v, ll sum, ll arr[], ll sizeOfArray)
{

    if(index == sizeOfArray)
    {
        if(sum==0)
        {
            ans.push_back(v);
            return;
        }
    }
    if(sum<0)
        return;
    if(arr[index]<sum)
    {

        v.push_back(arr[index]);
        CombinationSum(index,v,sum - arr[index],arr,sizeOfArray);
        v.pop_back();
    }

    CombinationSum(index,v,sum,arr,sizeOfArray);
}

int main()
{

}
