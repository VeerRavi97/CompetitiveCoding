#include<bits/stdc++.h>
using namespace std;
#define all(c) c.begin(),c.end()
#define IOS ios::sync_with_stdio(0);cin.tie(0)
typedef long long ll;
typedef vector<ll>vi;
const unsigned int MOD=1000000007;
int main(){
IOS;
ll tc;
cin >> tc;
while(tc--){
ll n;
cin >> n;
vi v(n,0);
for(ll i=0;i<n;i++) cin >> v[i];
sort(all(v));
reverse(all(v));
ll ans=0;
for(ll i=0;i<n;i++){
    ll temp=v[i]-i;
    if(temp<0)v[i]=0;
    else v[i]=temp;
    ans=(ans+v[i])%MOD;
}
//for(auto x:v) cout << x << " ";
cout << ans << "\n";

}
}