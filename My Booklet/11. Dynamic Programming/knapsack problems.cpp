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
 
 void  solve(ll sum,vector<ll>&v){
  vi sol(sum+1,0);
  sol[0]=1;
  for(auto c:v){
      for(ll x=sum;x>=c;x--){
          if(sol[x-c])sol[x]=1;
      }
  }
  for(auto x:sol){
      cout << x << " " ; 
  }

}

int main(){
 ll n;
 cin >> n;
 vi v;
 for(ll i=0;i<n;i++){
     ll in;
     cin >> in;
     v.push_back(in);
 }
 ll sum=0;
 cin >> sum;
 solve(sum,v);
return 0;
}