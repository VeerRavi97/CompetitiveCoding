#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll>vi;
typedef pair<ll,ll>ii;
typedef vector<ii>vii;
 
#define all(c) (c).begin(),(c).end()
#define fast ios::sync_with_stdio(0);cin.tie(0);
#define INT_SIZE 10
 
const ll MOD=1e9+7;
const ll INF=0x3f3f3f3f;
const double EPS=1e-9;
const ll MAX_N=100;

 
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
 vector<int>cnt(10,0);
for(int i=0;i<10;i++){
for(int j=0;j<n;j++){
    if(v[j]&(1<<i))
  cnt[i]++;
}
}
int p=1;
int ans=0;
// for(int i=0;i<10;i++)
// cout << cnt[i] << " ";
// cout << endl;
for(int i=0;i<10;i++){
 cnt[i]%=3;
 ans+=(cnt[i]*p);
 p=p<<1;
}
// for(int i=0;i<10;i++)
// cout << cnt[i] << " ";
// cout << endl;
cout << ans << "\n";
 
//  }
return 0;
}