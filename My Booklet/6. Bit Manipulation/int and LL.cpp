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
 
int powi(int k){
    return (1<<k);
}
ll powll(ll k){
    return (1LL<<k);
}

int main(){
 for(int i=0;i<60;i++){
  cout << i << " " <<  powi(i) << " " << powll(i) << "\n";
 }
 
return 0;
}