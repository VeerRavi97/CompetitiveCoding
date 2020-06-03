#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll>pi;
typedef vector<ll>vi;

#define fast ios::sync_with_stdio(0);cin.tie(0);
#define all(v) v.begin(),v.end()
#define endl "\n"
#define del cout << "\n"
#define pb push_back()

const ll MOD=1e9+7;
const ll INF=0x3f3f3f3f;
const ll MINF=-INF;
const double EPS=1e-9;


int main(){
    fast;
    int tc;
    cin >> tc;
    while(tc--){
   ll d;
   cin >> d;
   string s;
   cin >> s;
    ll pres=count(all(s),'P');
    ll req=ceil(.75*d);
    ll ans=-1;
    ll proxy=req-pres;
    // cout << pres << " " << req << " " << proxy << "\n"
;    if(proxy<=0){
      ans=0;
    }
    else{

       for(ll i=2;i<d-2;i++){
           if(s[i-1]=='P'||s[i-2]=='P'||s[i+1]=='P' || s[i+2]=='P'){
               ans++;
           }
           if(ans==proxy){
               ans=proxy;
               break;
           }
       }

    }
   
cout << ans << "\n";
        
    }
    
    
    
    
}

