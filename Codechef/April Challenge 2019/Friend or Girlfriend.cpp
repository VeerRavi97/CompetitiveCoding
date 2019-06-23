#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll>pi;
typedef vector<pi>vi;

#define fast ios::sync_with_stdio(0);cin.tie(0);
#define all(v) v.begin(),v.end()
#define endl "\n"

const ll MOD=1e9+7;
const ll INF=0x3f3f3f3f;
const ll MINF=-INF;
const double EPS=1e-9;


int main(){
    fast;
    ll tc;
    cin >> tc;
    while(tc--){
      
       ll n;
       string s;
       cin >> n;
       char ch;
       cin >> s >> ch;
      
        ll ans=(n*(n+1))/2;
        ll last=-1;
        for(ll i=0;i<n;i++){
            if(s[i]==ch){
                last=i;
                continue;
            }
            ans-=(i-last);
            
        }
      
       
       
        cout << ans << "\n";
        
    }
    
    
    
    
}

