#include <iostream>
#include <vector>
#include <list>
#include <queue>
using namespace std;

class Graph
{
	int v;
	list<int> *l;

public:
	Graph(int v)
	{
		this->v = v;
		l = new list<int>[v];
	}

	void addedge(int v, int u)
	{
		l[u].push_back(v);
		l[v].push_back(u);
	}

    void dfsHelper(int u, vector<bool> &vis){
        cout<<u<<" ";
        vis[u]= true;
        for(int v : l[u]){
            if (!vis[v])
            {
                dfsHelper(v,vis);
            }
            
        }
        
    }


    void dfs(){
        int src=0;
        vector<bool> vis(v,false);
        dfsHelper(src,vis);
    }

	
};

int main()
{
	Graph g(5);
	g.addedge(0, 1);
	g.addedge(1, 2);
	g.addedge(1, 3);
	g.addedge(2, 3);
	g.addedge(2, 4);

	g.dfs();
	return 0;
}
