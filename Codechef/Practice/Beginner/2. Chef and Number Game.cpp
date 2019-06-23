#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll>pi;
typedef vector<pi>vi;

#define fast ios::sync_with_stdio(0);cin.tie(0);
#define loop(i,a,b) for(int i=a;i<=b;i++)
#define all(v) v.begin(),v.end()

const ll MOD=1e9+7;
const ll INF=0x3f3f3f3f;
const ll MINF=-INF;
const double EPS=1e-9;


int main(){
    fast;
    ll tc;
    cin >> tc;
    while(tc--){
      
       ll pos=0;
       ll neg=0;
       ll n;
       cin >> n;
       for(int i=0;i<n;i++){
           ll in;
           cin >> in;
           if(in>0) pos++;
           else neg++;
           
       }
        ll maxm=max(pos,neg);
        ll minm=min(pos,neg);
        if(minm==0) minm=maxm;
        
        cout << maxm << " " << minm << "\n";
        
    }
    
    
    
    
}

