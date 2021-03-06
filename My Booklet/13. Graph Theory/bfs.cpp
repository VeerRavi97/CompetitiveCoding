#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>ii;
typedef pair<ii,int>iii;
typedef vector<int>vi;
#define all(c) (c).begin(),(c).end()
const int MAX_N=1010;
vector<ii>adj[10001];
vector<bool>visited;
vi parent;
vi dist;

void bfs(int s){
   queue<int>q;
   q.push(s);
    parent[s]=-1;
    dist[s]=0;
    visited[s]=true;
    while (!q.empty())
    {
        int u=q.front();q.pop();
        for(auto x:adj[u]){
           
            if(!visited[x.first]){
                 cout << x.first << "\n";
                visited[x.first]=true;
           parent[x.first]=u;
           dist[x.first]=dist[u]+1;
           q.push(x.first);
           }

        

        }
        
    }
    

}
int main(){
 int m;
 cin >> m;
 int N=5;
 for(int i=0;i<m;i++){
      int x,y,wt;
     cin >> x >> y >> wt;
     adj[x].push_back({y,wt});
     adj[y].push_back({x,wt});

 }
//   for(int i=0;i<N;i++){
//       cout << i << ":";
//       for(auto u:adj[i]){

//           cout << u.first << " " << u.second << "\n";
//       }

//   }



  visited.assign(N,false);
  parent.assign(N,-1);
  dist.assign(N,INT_MAX);
   bfs(0);
   for(int i=0;i<N;i++){
       cout << visited[i] << " ";
   }
   cout << endl;
   for(int i=0;i<N;i++){
       cout << parent[i] << " ";
   }
   cout << endl;

     for(int i=0;i<N;i++){
       cout << dist[i] << " ";
   }
   cout << endl;
}