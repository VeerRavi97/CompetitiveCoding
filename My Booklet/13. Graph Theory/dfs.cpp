#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>ii;
typedef pair<ii,int>iii;
#define all(c) (c).begin(),(c).end()
const int MAX_N=1010;
vector<ii>adj[10001];
vector<bool>visited;

void dfs(int u){
    // cout << u << " visited" << "\n";
   visited[u]=true;
   for(auto x:adj[u]){
       if(!visited[x.first])
       dfs(x.first);
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
   dfs(0);
   for(int i=0;i<N;i++){
       cout << visited[i] << " ";
   }
}