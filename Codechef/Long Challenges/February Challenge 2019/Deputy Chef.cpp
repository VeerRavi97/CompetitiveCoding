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
        vi a(n,0);
        vi d(n,0);
        for(ll i=0;i<n;i++)
         {
             ll att;
             scanf("%lld",&att);
             a[i]=att;
         }
         for(ll i=0;i<n;i++)
         {
             ll def;
             scanf("%lld",&def);
             d[i]=def;
         }
         ll ans=-1;
         for(ll i=0;i<n;i++){
             if(i==0){
                 if(d[i]>(a[i+1]+a[n-1])) ans=max(ans,d[i]);
             }
             else {
                  if(d[i]>(a[i-1]+a[(i+1)%n])) ans=max(ans,d[i]);
                 
             }
             
             
         }
        
        cout << ans << "\n";
        
    }
    
    
    
    
}