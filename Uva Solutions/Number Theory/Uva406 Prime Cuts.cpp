#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll>pi;
typedef vector<ll>vi;

#define fast ios::sync_with_stdio(0);cin.tie(0);
#define all(v) v.begin(),v.end()
#define endl "\n"
#define pb push_back()

const ll MOD=1e9+7;
const ll INF=0x3f3f3f3f;
const ll MINF=-INF;
const double EPS=1e-9;
const ll MAX_N=3000;
ll n,c;
vi primes;

void sieve(ll n){
    primes.clear();
    vi marked(n+1,1);
    marked[0]=0;
    marked[1]=1;
    marked[2]=1;
    for(ll i=4;i<=n;i+=2)
     marked[i]=0;
    primes.push_back(1); 
    primes.push_back(2);
  for(ll i=3;i<=n;i+=2){
      if(marked[i]){
      for(ll j=i*i;j<=n;j+=i){
         marked[j]=0; 
      }
      primes.push_back(i);
      }
  }
return;
}

int main(){
    sieve(3000);
   
    while(cin >> n >> c){
    
    ll i,j;

    ll sz=0;
    ll pf_index=0;
    ll pf=primes[0];
    while(pf<=n){
        pf=primes[++pf_index];
        sz++;
    }
    
    i=j=sz/2;
    ll lim=2*c-1;
    ll cnt=1;
   if(!(sz&1)){
       i=j-1;
       lim+=1;
       cnt++;
   } 
  

while(cnt<lim && i>0 && j<sz){
i-=1;
j+=1;
cnt+=2;
}
std::cout << n << " " << c << ":" ;
    for(ll x=i;x<=j;x++){
        std::cout << " "<< primes[x];
    }
    std::cout << "\n\n";
}
return 0;
}