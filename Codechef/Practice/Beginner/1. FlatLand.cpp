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
        
        ll n;
        cin >> n;
        int count=0;
        
        while(n>0){
            
            int m=sqrt(n);
            count++;
            n-=(m*m);
            
            
        }
        cout << count << "\n";
        
        
        
        
        
        
        
        
        
        
        
      
        
    }
    
    
    
    
}

