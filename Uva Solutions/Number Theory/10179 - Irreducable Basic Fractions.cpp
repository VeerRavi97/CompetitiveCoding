#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll>vi;
vi primes;
#define upperbound 1000000
bitset<1000001>bs;
void sieve(){
bs.set();
bs[0]=bs[1]=0;
primes.push_back(2);
for(ll i=2;i<=upperbound;i+=2) bs[i]=0;
for(ll i=3;i<=upperbound;i+=2){
    if(bs[i]){
        primes.push_back(i);
        for(ll j=i*i;j<=upperbound;j+=i)
          {
              bs[j]=0;
          }
    }
}

}
ll EulerPhi(ll n){
ll pf=primes[0];
ll pf_index=0;
ll ans=n;
while(pf*pf<=n){
    if(n%pf==0) ans-=ans/pf;
   while(n%pf==0) n/=pf;
//    cout << pf << " " << ans << "\n";
  pf=primes[++pf_index];
}
if(n!=1)
ans-=ans/n;
return ans;

}
int main(){
ll n;
sieve();
while(cin >> n,n>0){
 ll ans=EulerPhi(n);
 cout <<  ans << "\n";

}


}