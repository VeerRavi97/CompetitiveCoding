#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> ii;
#define N 1000002
typedef vector<ll> vi;
vi visited(N,0);
vi adj[N];
void dfs(ll u)
{
    visited[u]+=1;
    for(ll i=0;i<adj[u].size();i++)
    {
        ll f=adj[u][i];
        if(visited[f]==0)
            dfs(f);
    }

}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n,m;
    cin >> n >> m;
    for(ll i=0;i<m;i++)
    {
        ll a,b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);

    }
    ll cnt=0;
    for(ll i=1;i<=n;i++)
    {
       if(visited[i]==0)
       {
           dfs(i);
           cnt++;
           cout << "CC" <<cnt << " "<< ":";


           for(ll j=1;j<=n;j++)
           {
               if(visited[j]==1)
                cout << j << " ";
           }
           for(ll j=1;j<=n;j++)
           {

                 if(visited[j])
                    visited[j]+=1;
           }
       }
       cout <<"\n";


    }







}
