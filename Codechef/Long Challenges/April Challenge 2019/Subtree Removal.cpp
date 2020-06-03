#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll>pi;
typedef vector<pi>vi;

#define fast ios::sync_with_stdio(0);cin.tie(0);
#define all(v) v.begin(),v.end()
#define endl "\n"
#define pb push_back()
#define MAXN 100001


const ll MOD=1e9+7;
const ll INF=0x3f3f3f3f;
const ll MINF=-INF;
const double EPS=1e-9;

vector<ll>adj[MAXN];
vector<ll>sub(MAXN);
vector<ll>sum(MAXN);
vector<ll>value(MAXN);
void dfs(ll s,ll e){
    sub[s]=1;
    sum[s]=value[s];
    // cout << s << " " << e << " " <<sub[s] << " " << sum[s] << "\n";
    for(auto u:adj[s])
    {
        // cout << u << " ";
        if(u==e)continue;
        dfs(u,s);
        sub[s]+=sub[u];
        sum[s]+=sum[u];
        
        //  cout << "printing " << " " << s << " " << u << " " << sub[s] << " " << sum[s] << "\n";
    }
    
}

int main(){
    fast;
    ll tc;
    cin >> tc;
    while(tc--){
      ll n,x;
      cin >> n >> x;
      memset(adj,0,sizeof(adj));
      fill(all(sum),0);
      fill(all(sub),0);
      fill(all(value),0);
       ll total=0;
      for(int i=0;i<n;i++){
          ll in;
          cin >> in;
          value[i]=in;
          total+=in;
      }
      
      for(int i=0;i<n-1;i++){
          ll u,v;
         
          cin >> u >> v;
           --u;--v;
          adj[u].push_back(v);
          adj[v].push_back(u);
      }
        //   cout << "ANSWERING" << "\n"; 
        //   for(int i=0;i<n;i++){
        //       cout << i << ":" << " ";
        //       for(auto u:adj[i])
        //       cout << u << " ";
        //       cout << endl; 
        //   }
        //   cout << endl;
            dfs(0,0);
      // for( ll i=0;i<n;i++){
         
      //     cout << sub[i] << " " << sum[i] << "\n";
      // }
        ll ans=MINF;
       
           
          ll cal=(x*1);
          ll j=0;
        //   cout << cal << " ";
          for(int i=0;i<n;i++){
              ll curr=total-sum[i];
              ll calc=curr-cal;
              // cout << calc << " ";
               ans=max(ans,calc);
        
           
       }
        // cout << endl;
       cout << ans << "\n"; 
    }
    
    
    
    
}

