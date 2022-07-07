#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll arr[100005];

ll Fibonacci(ll nthFib)
{
    if(nthFib <=1)
        return nthFib;
    if(arr[nthFib] !=0 )
        return arr[nthFib];
    arr[nthFib] = Fibonacci(nthFib-1)+Fibonacci(nthFib-2);
    return  arr[nthFib] ;
}

int main()
{
    ll i,j,k,m,n;
    cin>>n;


    printf("%lld\n",Fibonacci(n));

}

