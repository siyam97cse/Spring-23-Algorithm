#include<iostream>
#include<map>
#include <bits/stdc++.h>

#define MAX 10000
using namespace std;

vector<int> edges[MAX]; 

bool visited [MAX];
void dfs (int node){
    visited[node] = true;
    cout<<node<< ' ';
    for(auto nbr : edges[node]){
        if(!visited[nbr]){
            dfs(nbr);
        }
    }
}

int main()
{
    edges[1].push_back(2);
    edges[1].push_back(3);
    edges[2].push_back(4);
    
    dfs(1);

    return 0;
}
