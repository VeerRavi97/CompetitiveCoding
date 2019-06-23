#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>ii;
typedef pair<ii,int>iii;
#define all(c) (c).begin(),(c).end()
const int MAX_N=1010;
vector<ii>adj[10001];
vector<bool>visited;
vector<iii>el;
bool comp(iii a, iii b){
    return a.second<b.second;
}

int main(){

// 6
// 0 1 5
// 0 4 6
// 1 3 7
// 4 3 8
// 1 2 9
// 3 2 10
 int m;
 cin >> m;
 int N=5;
 for(int i=0;i<m;i++){
      int x,y,wt;
     cin >> x >> y >> wt;
       el.push_back({{x,y},wt});
     adj[x].push_back({y,wt});
     adj[y].push_back({x,wt});

 }
  for(int i=0;i<N;i++){
      cout << i << ":";
      for(auto u:adj[i]){

          cout << u.first << " " << u.second << "\n";
      }

  }
  for(int i=0;i<m;i++){
      iii u=el[i];
      cout << u.first.first << " " <<  u.first.second << " " <<  u.second << "\n";
  }

sort(el.begin(),el.end(),comp);
for(int i=0;i<m;i++){
      iii u=el[i];
      cout << u.first.first << " " <<  u.first.second << " " <<  u.second << "\n";
  }
  
}