#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll>pi;
typedef pair<string, ll> ps;
typedef vector<ll>vi;


#define fast cin.sync_with_stdio(0);cin.tie(0)
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define mp make_pair

const unsigned int MOD = 1e9 + 7;

int main(){
    fast;
    ll tc;
    cin >> tc;
    
    while(tc--){
        ll n;
        cin >> n;
        vi v;
        vi ans(n,1);
        for(ll i=0;i<n;i++)
        {
            ll in;
            cin >> in;
            v.pb(in);
        }
    
        for(ll i=n-2;i>=0;i--)
        {
            if(v[i]>0){
                if(v[i+1]<0){
                ans[i]+=ans[i+1];
                    // cout << "printing" << ans[i] << "\n";
                }
            }
            
            if(v[i]<0){
                if(v[i+1]>0)
                ans[i]+=ans[i+1];
            }
        }
        
        
        for(ll i=0;i<n;i++)
        {
            cout << ans[i] << " ";
        }
        cout << "\n";
        
    }
    
    
}