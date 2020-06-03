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

void solve(int n){
for(int i=13;i>=0;i--){
  int mask=1<<i;
if(n&(mask)) cout << "1";
else cout << "0";
}
cout << "\n";
}
void solve2(int n){
    while(n){
      cout << (n&1);
     n=n>>1;
    }
      cout << "\n";
}

 
int main(){
 int tc;
 cin >> tc;
 while(tc--){
 int n;
 cin >> n;
 solve(n);

 solve2(n);

  
 }
 
return 0;
}