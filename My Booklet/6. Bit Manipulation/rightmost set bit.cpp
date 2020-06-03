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
void represent(int n){
for(int i=13;i>=0;i--){
if(n&(1<<i)) cout << "1";
else cout << "0";
}
cout << "\n";



}

 int solve(int n){
// int ans=0;
// int kth=0;
if(n==0) return 0;
represent(n);
int temp=(n&-n);
int flipped=~n;
represent(flipped);
cout << temp <<  " " << ~n << "\n";
return log2((double)temp)+1;

// while(n>0){
//    if(n&1)break;
//    kth++;
//     n=n>>1;
// }
// return kth+1;



}

 
int main(){
    fast;
 int tc;
 cin >> tc;
 while(tc--){
 int n;
 cin >> n;
 cout << solve(n) << "\n";
  
  
 }
 
return 0;
}