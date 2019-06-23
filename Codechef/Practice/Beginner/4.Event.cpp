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
    
    unordered_map<string,int>mp;
    mp["monday"]=0;
    mp["tuesday"]=1;
    mp["wednesday"]=2;
    mp["thursday"]=3;
    mp["friday"]=4;
    mp["saturday"]=5;
    mp["sunday"]=6;
    
    cin >> tc;
    while(tc--){
      
       string s,e;
       int l,r;
       cin >> s >> e >> l >> r;
       int diff=(mp[e]-mp[s]);
       if(diff<0)
       diff+=7;
       
       diff+=1;
       vector<int>v;
       int count=0;
       int sum=diff;
       v.push_back(diff);
       while(true){
           sum+=7;
           if(sum>100)
           break;
           
          v.push_back(sum); 
       }
int ans=0;
        for(auto x:v){
            if(x>=l&&x<=r){
                ans=x;
            count++;
            }
            
        }
        if(count==1)
        cout << ans << "\n";
        else if(count>1)
        cout << "many" << "\n";
        else
        cout << "impossible" << "\n";
        
        
    }
    
    
    
    
}

