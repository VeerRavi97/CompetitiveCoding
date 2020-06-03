#include<bits/stdc++.h>
using namespace std;
#define all(c) c.begin(),c.end()
#define IOS ios::sync_with_stdio(0);cin.tie(0)
typedef long long ll;
typedef vector<ll>vi;
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
ll numpf(ll n){
  ll ans=0;
  ll p=primes[0];
  ll pf_index=0;
  while(p*p<=n){
      while(n%p==0){n=n/p;ans++;}
     p=primes[++pf_index];
  }
  if(n!=1) ans++;
  return ans;
}

int main(){
IOS;
sieve();
ll tc;
cin >> tc;
while(tc--){
    ll x,k;
    cin >> x >> k;
    ll cnt=numpf(x);
    cout << cnt << "\n";
    if(cnt>=k)
cout << 1 << "\n";
else
{
    cout << 0 << "\n";
}

}
}