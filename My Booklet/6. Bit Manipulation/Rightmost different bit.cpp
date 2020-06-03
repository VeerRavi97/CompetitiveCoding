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

 int solve(int a,int b){
 int n=a^b;    
int ans=0;
int kth=0;
if(n==0) return 0;
while(n>0){
   if(n&1)break;
   kth++;
    n=n>>1;
}
return kth+1;


}

 
int main(){
    fast;
 int tc;
 cin >> tc;
 while(tc--){
 int a,b;
 cin >> a >> b;
 cout << solve(a,b) << "\n";
  
  
 }
 
return 0;
}