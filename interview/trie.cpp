#include <stdio.h>
#include "bits/stdc++.h"
//#include<bits/stdc++.h>
using namespace std;
#define ll long long

struct node
{
    bool endmark;
    node *next[27];
    node()
    {
        endmark = false;

        for (int i = 0; i < 26; i++)
        {
            next[i] = NULL;
        }
    }
} * root;

void insert(char *str, int len)
{
    node *curr = root;

    for (int i = 0; i < len; i++)
    {
        int id = str[i] - 'a';

        if (curr->next[id] == NULL)
            curr->next[id] = new node();

        curr = curr->next[id];
    }
    curr->endmark = 1;
}

bool search(char *str, int len)
{
    node *curr = root;

    for (int i = 0; i < len; i++)
    {
        int id = str[i] - 'a';
        if (curr->next[id] == NULL)
            return false;
        curr = curr->next[id];
    }
    return curr->endmark;
}

void del(node* cur)
{
    for(int i=0;i<26;i++)
    {
        if(cur->next[i])
            del(cur->next[i]);
    }
    delete(cur);
}

int main()
{
    int n, k;

    root = new node();

    return 0;
}