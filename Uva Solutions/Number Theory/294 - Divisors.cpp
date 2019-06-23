#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll>vi;
vi primes;
#define upperbound 10000000
bitset<10000001>bs;
void sieve(){
    bs.set();
    bs[0]=bs[1]=0;
 primes.push_back(2);
 for(ll i=2;i<=upperbound;i+=2) bs[i]=0;
 for(ll i=3;i<=upperbound;i+=2){
     if(bs[i]){
         primes.push_back(i);
         for(ll j=i*i;j<=upperbound;j+=i)
            bs[j]=0;
     }
 }

}
ll NumDiv(ll n){
  ll pf=primes[0];
  ll pf_index=0;
  ll ans=1;
  while(pf*pf<=n){
   ll power=0;
   while(n%pf==0){
       power++;n/=pf;
       }
   ans*=(power+1);
    // cout << pf << " " << power << " "  << ans << "\n";
  pf=primes[++pf_index];
  }
  if(n!=1) ans*=2;
  return ans;
}


int main(){
sieve();
 ll n;
 cin >> n;
 while(n--){
  ll l,u;
  cin >> l >> u;
   ll ans=-1;
   ll num;
   for(ll i=l;i<=u;i++){
    //    cout << i << " " << NumDiv(i) << "\n";
       ll temp=NumDiv(i);
       if(ans<temp){
           ans=temp;
           num=i;
       }
   }
   cout << "Between " << l << " and " << u << ", " <<  num << " has a maximum of " <<  ans << " divisors." << "\n";
 }
return 0;
}
