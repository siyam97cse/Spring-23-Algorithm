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
    g.addEdge(1, 2);
    g.addEdge(1, 4);
    g.addEdge(2, 7);
    g.addEdge(2, 8);
    g.addEdge(2, 5);
    g.addEdge(3, 9);
    g.addEdge(3, 10);
    g.addEdge(5, 6);
    


    cout << "Following is Breadth First Traversal "
         << "(starting from vertex 0) \n";
    g.bfs(1);

    return 0;
}
