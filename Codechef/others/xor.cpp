#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll>pi;
typedef vector<ll>vi;

#define fast ios::sync_with_stdio(0);cin.tie(0);
#define loop(i,a,b) for(int i=a;i<=b;i++)
#define all(v) v.begin(),v.end()

const ll MOD=1e9+7;
const ll INF=0x3f3f3f3f;
const ll MINF=-INF;

int main(){
    fast;
   
        ll n,q;
        cin >> n >> q;
        vi v;
        for(int i=0;i<n;i++){
            ll in;
            cin >> in;
            v.push_back(in);
        }
        
        ll ans=v[0]^v[1]^v[2];
        ll ans1=v[0]^v[1]^v[2]^ans;
        ll ans2=v[0]^v[1]^v[2]^ans^ans1;
        ll ans3=v[0]^v[1]^v[2]^ans^ans1^ans2;
    cout << ans << ans1 << ans2 << ans3;
    
    
    
}

