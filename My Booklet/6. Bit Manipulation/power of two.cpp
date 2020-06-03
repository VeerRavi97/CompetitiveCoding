#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll>vi;
typedef pair<ll,ll>ii;
typedef vector<ii>vii;
 
#define all(c) (c).begin(),(c).end()
#define fast ios::sync_with_stdio(0);cin.tie(0);
 
const ll MOD=1e9+7;
const ll INF=0x3f3f3f3f;
const double EPS=1e-9;
const ll MAX_N=1e5+5;

ll solve(ll n){
    if(n==0) return 1LL;
    ll ans= (ll)(n&(n-1));
    // cout << ans << "\n";
     return ans;
}

 
int main(){
    fast;
 int tc;
 cin >> tc;
 while(tc--){
 ll n;
 cin >> n;
 ll ans=solve(n);
  if(!ans) cout << "YES" << "\n";
else cout << "NO" << "\n";
  
 }
 
return 0;
}