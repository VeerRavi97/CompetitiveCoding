#include<bits/stdc++.h>
using namespace std;
#define all(c) c.begin(),c.end()
#define IOS ios::sync_with_stdio(0);cin.tie(0)
typedef long long ll;
typedef vector<ll>vi;
const unsigned int mod=1e9+7;
vi primes;
#define upperbound 1000000
bitset<1000010>bs;
void sieve(){
    bs.set();
 bs[0]=bs[1]=0;
 primes.push_back(2);
 for(ll i=4;i<=upperbound;i+=2) bs[i]=0;
 for(ll i=3;i<=upperbound;i+=2){
     if(bs[i]){
         primes.push_back(i);
         for(ll j=i*i;j<=upperbound;j+=i)
            bs[j]=0;
     }
 }

}
ll numDiv(ll n){
 ll pf=primes[0];
 ll pf_index=0;
 ll ans=1;
 while(pf*pf<=n){
     ll power=0;
     while(n%pf==0){
         n=n/pf;
         power++;
     }
     ans=((ans%mod)*((power+1)%mod))%mod;
     pf=primes[++pf_index];
 }

if(n!=1) ans=(ans*2)%mod;
return ans;

}
vi adj[111111];
const ll maxN=20;
ll level[111111] , LCA[111111][maxN+1];
void dfs(ll node , ll lvl , ll par)
{
	level[node] = lvl;
	LCA[node][0] = par;
 
	for(ll child : adj[node])
	if(child != par)
	{
		dfs(child , lvl+1 , node);
	}
}
void init(ll n)
{
	dfs(1 , 0 , -1);
 
	for(ll i=1;i<=maxN;i++)
	{
		for(ll j=1;j<=n;j++)
		if(LCA[j][i-1] != -1)
		{
			ll par = LCA[j][i-1];
			LCA[j][i] = LCA[par][i-1];
		}
	}
}
ll getLCA(ll a , ll b)
{
	if(level[b] < level[a]) swap(a , b);
 
	ll d = level[b] - level[a];
 
	while(d > 0)
	{
		ll i = log2(d);
		b = LCA[b][i];
 
		d -= 1 << i;
	}
 
	if(a == b) return a;
 
	for(ll i=maxN;i>=0;i--)
	if(LCA[a][i] != -1 && (LCA[a][i] != LCA[b][i]))
	{
		a = LCA[a][i] , b = LCA[b][i];
	}
 
	return LCA[a][0];
}
int main(){
IOS;
sieve();
ll tc;
cin >> tc;
while(tc--){
ll n;
cin >> n;
for(ll i=0;i<n;i++){
    adj[i].clear();
}
for(ll i=1;i<=n;i++)
{
		for(ll j=0;j<=maxN;j++)
		LCA[i][j] = -1;
}
memset(level,0,sizeof(level));
vi dis(n+1,-1);
for(ll i=0;i<n-1;i++){
    ll x,y;
    cin >> x >> y;
    adj[x].push_back(y);
}
vi v(n+1,0);
for(ll i=0;i<n;i++) cin >> v[i+1];
init(n);
// for(int i=1;i<=n;i++)
// {
// 		for(int j=0;j<=maxN;j++)
// 		cout << LCA[i][j] << " ";
//        cout << "\n";  
// }
queue<ll> q; q.push(1); 
dis[1]=v[1];
while (!q.empty()) {
ll u = q.front(); q.pop();
for (ll j = 0; j < (ll)adj[u].size(); j++) {
ll nb = adj[u][j];
if (dis[nb] == -1) { 
dis[nb] = ((dis[u]%mod)*(v[nb]%mod))%mod;
q.push(nb);
} 
} 
}

// for(auto x:dis) cout << x << " ";
// cout << "\n";
ll nq;
cin >> nq;
while(nq--){
    ll x,y;
    cin >> x >> y;
    if(x>y) swap(x,y);
    ll num=0;
    if(x!=y){
    ll lca=getLCA(x,y);
//    cout << "lca " << lca << "\n";
     num=((dis[x]%mod)*(dis[y]%mod))%mod;
    //  cout << "num1 " << num << "\n";
    num=num/(dis[lca]*dis[lca]);
    //  cout << "num2 " << num << "\n";
    num=((num%mod)*(v[lca]%mod))%mod;
    }
    else
    {
        num=v[x];
    }
    
    // cout << "num3 " << num << "\n";
    ll ans=numDiv(num);
    cout << ans << "\n";
}

}
}
/*
2
5
1 2
1 3
2 4
2 5
2 6 4 3 5
4
1 4
2 2
4 5
1 1
10
1 2
1 3
2 4
2 7
7 8
4 6 
4 5
4 10
6 9
1 2 3 4 5 6 7 8 9 10
2
6 9
7 3
*/