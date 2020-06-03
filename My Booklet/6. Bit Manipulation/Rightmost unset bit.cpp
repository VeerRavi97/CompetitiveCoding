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
    int ans=0;
    int kth=0;
    int temp=~n;
    temp=temp&-temp;
    cout << n << " " << temp << " : ";
while(n){

if(!(n&1)) break;
   kth++;
n=n>>1;
}
cout << "  ";
ans=(int)(pow(2,kth)+0.5);

cout << kth << "  " << ans << "\n";



}
 
int main(){
 solve(1);
  solve(2);

   solve(5);

    solve(10);
     solve(11);
      solve(13);
       solve(15);
        solve(20);
         solve(22);

          solve(25);
 
return 0;
}