#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll>vi;
const unsigned int mod=1e9+7;
vi primes;
#define upperbound 1000000
bitset<1000010>bs;
void sieve(){
    bs.set();
 bs[0]=bs[1]=0;
 primes.push_back(2);
 for(ll i=4;i<=upperbound;i+=2) bs[i]=0;
 for(ll i=3;i<=upperbound;i+=2){
     if(bs[i]){
         primes.push_back(i);
         for(ll j=i*i;j<=upperbound;j+=i)
            bs[j]=0;
     }
 }

}
ll numDiv(ll n){
 ll pf=primes[0];
 ll pf_index=0;
 ll ans=1;
 while(pf*pf<=n){
     ll power=0;
     while(n%pf==0){
         n=n/pf;
         power++;
     }
     ans=((ans)*((power+1)))%mod;
     pf=primes[++pf_index];
 }

if(n!=1) ans=(ans*2)%mod;
return ans;

}
int main()
 {
     sieve();
ll tc;
// cin >> tc;
while(tc--){
    
    ll n=3*1*4*6*9;
    cout << numDiv(n) << "\n";
}

	//code
	return 0;
}