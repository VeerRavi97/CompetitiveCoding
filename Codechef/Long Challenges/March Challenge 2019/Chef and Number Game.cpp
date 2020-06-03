#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll>pi;
typedef pair<string, ll> ps;
typedef vector<ll>vi;


#define fast cin.sync_with_stdio(0);cin.tie(0)
#define all(x) (x).begin(), (x).end()
#define pb push_back


const ll MOD = 1e9 + 7;
const ll INF=0x7fffffff;
const ll MINF=-0x7fffffff;


int main(){
    fast;
    ll tc;
    cin >> tc;
    while(tc--){
        ll n;
        cin >> n;
        ll plus=0;
        ll minus=0;
        for(ll i=0;i<n;i++){
            ll in;
            cin >> in;
            if(in<0)
            minus++;
            else
            plus++;
            
        }
        ll maxm=0;
        ll minm=0;
        if(minus==0||plus==0){
            maxm=n;
            minm=n;
        }
        else if(minus>plus){
            maxm=minus;
            minm=plus;
        }
        else{
            maxm=plus;
            minm=minus;
        }
        
        cout << maxm << " " << minm << "\n";
        
    }
    
    
    
}