#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vi;
int main(){
    
    ll tc;
    scanf("%lld",&tc);
    while(tc--){
        ll n=0;
        scanf("%lld",&n);
        vi v(n,0);
       
        for(ll i=0;i<n;i++)
         {
             ll in;
             scanf("%lld",&in);
             v[i]=in-1;
         }
         
         ll ans=0;
         for(ll i=0;i<n;i++){
             ans+=v[i];
             
             
         }
        ans=ans+1;
        cout << ans << "\n";
        
    }
    
    
    
    
}