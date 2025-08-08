#include<bits/stdc++.h>
using namespace std;
struct Graph{
	int n,m;
};
struct GraphEdgeList:public Graph{
    struct Edge{
        int u,v,w;
        Edge():Edge(0,0,0){}
        Edge(int u,int v,int w):u(u),v(v),w(w){}
    };
    vector<Edge> e;
    void input(bool haveW,bool doubleSide){
        cin>>n>>m;
        for(int i=1;i<=m;i++){
            int u,v,w;
            cin>>u>>v;
            if(haveW)cin>>w;
            else w=1;
            e.push_back(Edge(u,v,w));
            else e.push_back(Edge(v,u,w));
        }
    }
};
struct GraphKruskal:public GraphEdgeList{
    struct Edge:public GraphEdgeList::Edge{
        bool operator<(const Edge& ano)const{
            return w<ano.w;
        }
    };
    vector<Edge> e;
}
