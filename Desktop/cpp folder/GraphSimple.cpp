#include <bits/stdc++.h> 
using namespace std; 
template<typename T>
class Graph
{
    private:
        map<T, vector<T>> adj;
    public:
        // Graph(){

        // }
        void addEdge(T a, T b){
            adj[a].push_back(b);
            adj[b].push_back(a);
        }
        void print()
        {
            for(auto i : adj)
            {
                T key = i.first;
                cout<<key;
                for(auto j : i.second)
                    cout<<"->"<<j;
                cout<<endl<<endl;
            }
        }
};
int main() 
{ 
    Graph<string> gi;
    gi.addEdge("Amritsar","Delhi");
    gi.addEdge("Amritsar","Jaipur");
    gi.addEdge("Delhi","Siachin");
    gi.addEdge("Delhi","Bangalore");
    gi.addEdge("Delhi","Agra");
    gi.addEdge("Amritsar","Siachin");
    gi.print();
} 
