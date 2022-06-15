#include "bits/stdc++.h"
//#include<bits/stdc++.h>

using namespace std;
#define ll long long 

int main()
{
    ll steps,i,j;
    string path;

    cin>>steps;
    cin>>path;

    ll level=0;
    ll previousLevel = 0;
    ll currentLevel = 0;
    ll valleyCount = 0;


    for(i = 0; i<steps ; i++)
    {
        if(path[i]=='U')
            level++;
        else
            level--;

        if(level==0)
            {
                currentLevel = 0;
                previousLevel = 0;
            } 
        else if(level>0)
            currentLevel = 1;
        else
            currentLevel = -1;

        if( previousLevel == 0 && currentLevel < 0)
        {
            valleyCount++;
            previousLevel = -1;
        }

    }
    printf("%lld\n",valleyCount);
}