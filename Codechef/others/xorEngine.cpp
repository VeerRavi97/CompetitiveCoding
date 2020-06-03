#include<bits/stdc++.h>
using namespace std;
#define all(c) c.begin(),c.end()
#define IOS ios::sync_with_stdio(0);cin.tie(0)
typedef long long ll;
int main(){
//IOS;
ll tc;
scanf("%lld",&tc);
while(tc--){
ll n,q;
scanf("%lld%lld",&n,&q);
//cin >> n >> q;
//vector<ll>v(n,0);
ll oddparity=0,evenparity=0;
for(ll i=0;i<n;i++) {
    ll in;
    scanf("%lld",&in);
    ll temp=__builtin_popcount(in);
    if(temp&1LL) oddparity++;
    else evenparity++;

}
// for(auto x:v) cout << x << " ";
//cout << evenparity << " " << oddparity << "\n";
ll p;

while(q--){
scanf("%lld",&p);
ll even=0,odd=0;
p=__builtin_popcount(p);
if(p&1){
 even=oddparity;
 odd=evenparity;
}
else
{
    even=evenparity;
    odd=oddparity;
}

printf("%lld %lld\n",even,odd);
// cout << even << " " << odd << "\n";

}

}
}
