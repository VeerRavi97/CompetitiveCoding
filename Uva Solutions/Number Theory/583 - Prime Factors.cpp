#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll>pi;
typedef vector<ll>vi;

#define fast ios::sync_with_stdio(0);cin.tie(0);
#define all(v) v.begin(),v.end()
#define del cout << "\n"
#define pb push_back()

const ll MOD=1e9+7;
const ll INF=0x3f3f3f3f;
const ll MINF=-INF;
const double EPS=1e-9;
bitset<10000001>bs;
#define upperbound 10000000
vi primes;
void sieve(){
bs.set();
bs[0]=bs[1]=0;
primes.push_back(2);
for(ll i=4;i<=upperbound;i+=2)
  bs[i]=0;

for(ll i=3;i<=upperbound;i+=2){
    if(bs[i]){
        primes.push_back(i);
        for(ll j=i*i;j<=upperbound;j+=i)
        bs[j]=0;
    }
}  


}
void primefactorization(ll n,vector<ll>&pfactors){
ll pf_index=0;
ll pf=primes[pf_index];

while(pf*pf<=n){
    while(n%pf==0){
        n/=pf;
        pfactors.push_back(pf);
    }
  pf=primes[++pf_index];
}
if(n!=1) 
pfactors.push_back(n);

}


int main(){
   ll n;
   sieve();
  while(cin >> n,n!=0){
    vi pfactors;
    primefactorization(abs(n),pfactors);
    cout << n << " " << "= ";
    if(n<0) cout << "-1";
    ll i=0;
   for(auto x:pfactors)
{
    if(i==0 && n>0) cout << x;
    else
  cout << " * " << x;
  i++;
}
del;

  }
    
    
    
    
}

