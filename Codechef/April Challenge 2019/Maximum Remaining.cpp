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
       cin  >> n;
       vector<ll>v;
       for(int i=0;i<n;i++)
       {
           ll in;
           cin >> in;
           v.push_back(in);
       }
       ll ans=MINF;
       for(int i=0;i<v.size();i++){
        for(int j=0;j<v.size();j++){
            ll cal=v[i]%v[j];
            ans=max(ans,cal);
            cout << cal << " ";
        } 
        cout << endl;
           }  
        cout << ans << "\n";
        
    }
    
    
    
    
}

