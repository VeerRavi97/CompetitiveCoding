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
  int ans=0;
  int p=1;
  int i=0;
  while(n){
      ll num=n%10;
      ans+=(num*p);
      i++;
      p=1<<i;
      n/=10;
  }
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
 cout << ans << "\n";
  
 }
 
return 0;
}