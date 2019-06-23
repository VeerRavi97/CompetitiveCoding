#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll>vi;
#define MAX_N 10000000
bitset<10000001>bs;
vi primes;
void sieve(){
  bs.set();
  bs[0]=bs[1]=0;
  primes.push_back(2);
  for(ll i=2;i<=MAX_N;i+=2) bs[i]=0;
  for(ll i=3;i<=MAX_N;i+=2){
      if(bs[i]){
          primes.push_back(i);
          for(ll j=i*i;j<=MAX_N;j+=i){
              bs[j]=0;
          }
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
        power++;
        n/=pf;
    }
    ans*=(power+1);
    pf=primes[++pf_index];
}
if(n!=1) ans*=2;
return ans;
}
int main(){
    sieve();
ll n;
cin >> n;
vector<ll>v(100001,0);
for(ll i=0;i<n;i++){
    ll in;
    cin >> in;
    v[i]=in;
}
for(ll i=0;i<n;i++){
    ll temp=numDiv(v[i]);
    // cout << temp << "\n";
    if(temp==3)
    {
        cout << "YES" << "\n";
    }
    else
    {
        cout << "NO" << "\n";
    }
    
}

}