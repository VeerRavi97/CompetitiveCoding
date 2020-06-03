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
 
int main(){
    fast;
//  int tc;
//  cin >> tc;
//  while(tc--){
 int n;
 cin >> n;
 vi v;
 for(int i=0;i<n;i++){
   int in;
 cin >> in;
 v.push_back(in);
 }
 ll xored=v[0];
 for(int i=1;i<v.size();i++)
 xored^=v[i];
 
 int lsb= xored & -xored;     
 cout << lsb << "\n";       // last set bit
 int x=0,y=0; 
 int xi,yi;
 for(int i=0;i<v.size();i++){
  if(v[i]&lsb) 
  {x^=v[i];
  
  }
  else y^=v[i];
 }
 cout << min(x,y) << " " << max(x,y) << "\n";
  
//  }
 
 
return 0;
}