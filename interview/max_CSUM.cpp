#include <stdio.h>
#include "bits/stdc++.h"
//#include<bits/stdc++.h>
using namespace std;
#define ll long long

map<ll, ll> mp;
vector<ll> v;
set<ll> st;

ll arr[100005];

ll max_contigious_subarray3(ll input[], ll n)
{
    ll i, j, k, left, right;
    ll max_sum = INT_MIN;

    for (i = 0; i < n; i++)
    {
        for (j = i; j < n; j++)
        {
            ll sum = 0;

            for (k = i; k <= j; k++)
            {
                sum += input[k];
            }
            max_sum = max(max_sum, sum);
        }
    }
    return max_sum;
}

ll max_contigious_subarray2(ll input[], ll n)
{
    ll i, j, k, left, right;

    ll max_sum = INT_MIN ;

    for (i = 0; i < n; i++)
    {
        ll sum = 0;
        for (j = i; i < n; j++)
        {
            sum += input[j];
            max_sum = max(sum, max_sum);
        }
    }
    return max_sum;
}

ll max_contigious_subarray1(ll input[],ll n)
{
    ll i,j,k,l,left,right;
    ll max_arr[n+1];
    for(i=0;i<=n;i++)max_arr[i]=0;

    ll max_sum = -1000000009;

    max_arr[0]=input[0];

    ll ans = input[0];

    for(i=1;i<=n;i++)
    {
        max_arr[i] = max(arr[i],arr[i]+max_arr[i-1]);
        ans = max(max_arr[i],ans);
    }

    return ans;

}
int main()
{
    ll i, j, k, l, t, n, a, b, c;
    cin >> t;
    while (t--)
    {
        //sort(arr+1,arr+1+n,greater<ll>());
        cin >> n;

        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        l = max_contigious_subarray3(arr, n);
        cout << l << endl;
    }
}
