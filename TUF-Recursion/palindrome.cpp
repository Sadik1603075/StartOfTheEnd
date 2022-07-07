#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool palindromeCheck(ll startIndex, string str, ll endIndex)
{
    if(startIndex>=endIndex)
        return true;
    if(str[startIndex] != str[endIndex])
        return false;
    palindromeCheck(startIndex+1,str,endIndex-1);
}
int main()
{
    ll i,j,n;
    string s;
    cin>>s;

    bool ans = palindromeCheck( 0,s,s.size()-1);
    if(ans)
    {

        printf("The String  is a palindrome string\n");
    }
    else
    {
        printf("The String is not a palindrome string\n");
    }

}
