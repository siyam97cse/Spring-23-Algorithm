#include<iostream>
#include<map>
#include <bits/stdc++.h>
using namespace std;

template<typename T> 
class Graph{
    map<T,list<T> > l;
   
    public:
    void addEdge(int x, int y){
        l[x].push_back(y);
        //l[y].push_back(x);
    }
    void bfs(T src) {
        
        map<T, int> visited;
        queue<T> q;

        q.push(src);
        visited[src] = true;

        while (! q.empty()) {
            T node = q.front();
            q.pop();
            cout<<node<<" ";
            for (int nbr : l[node]){
                if(!visited[nbr]){
                    q.push(nbr);
                    //mark that nbr as visited
                    visited [nbr]=true;
                }    

            }
        }
    }
        
};
int main(){
    // Create a graph given in the above diagram
    Graph <int>g;  
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(1, 3);
    g.addEdge(2, 1);
    g.addEdge(2, 4);
    g.addEdge(3, 4);


    cout << "Following is Breadth First Traversal "
         << "(starting from vertex 0) \n";
    g.bfs(0);

    return 0;
}
