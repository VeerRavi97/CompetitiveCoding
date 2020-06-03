#include<bits/stdc++.h>
using namespace std;
#define all(c) c.begin(),c.end()
#define IOS ios::sync_with_stdio(0);cin.tie(0)
typedef long long ll;
typedef vector<int>v;
int main(){
//IOS;
ll tc;
cin >> tc;
while(tc--){
ll n,m;
cin >> n >> m;
vector<ll>baskets(n+1,0);
vector<ll>prices(n+1,0);
unordered_map<ll,ll>mp;
for(ll i=0;i<n;i++){
ll in;
cin >> in;
baskets[i]=in;

}
for(ll i=0;i<n;i++){
ll in;
cin >> in;
prices[i]=in;

}
for(ll i=0;i<n;i++){
ll index=baskets[i];
ll price=prices[i];
mp[index]+=price;
}
// for(auto x:mp) cout << x.first << " " << x.second << "\n";
// cout << "\n";
ll ans=99999999;
for(auto x:mp){
    ans=min(ans,x.second);
}
cout << ans << "\n";


}
}