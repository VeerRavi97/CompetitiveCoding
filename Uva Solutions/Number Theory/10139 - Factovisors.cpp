#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll>vi;
vi primes;
#define upperbound 10000000
bitset<10000001>bs;
void sieve(){
    bs.set();
    primes.push_back(2);
    bs[0]=bs[1]=0;
    for(ll i=4;i<=upperbound;i+=2)bs[i]=0;
    for(ll i=3;i<=upperbound;i+=2){
        if(bs[i]){
            primes.push_back(i);
            for(ll j=i*i;j<=upperbound;j+=i)
            bs[j]=0;
        }
    }
}

ll pthpowerofxinfactorialn(ll n,ll x){
  ll r=x;
  ll cnt=0;
  while(r<=n){
     cnt+=n/r;
     r*=x;
  }
return cnt;
}

vector<pair<ll,ll> > primefactorization(ll n){
  vector<pair<ll,ll> >ans;
  ll pf=primes[0];
  ll pf_index=0;
  while(pf*pf<=n){
      ll cnt=0;
      if(n%pf==0){
         while(n%pf==0){
             cnt++;
             n/=pf;
         }
       ans.push_back(make_pair(pf,cnt));
      }
    pf=primes[++pf_index];
  }
if(n!=1) ans.push_back(make_pair(n,1));

return ans;
}
int main(){
    ll n,m;
    sieve();
    while(cin >> n >> m){
     vector<pair<ll,ll>> mfactors=primefactorization(m);
     bool flag=true;
    for(auto x:mfactors){
        // cout << x.first << " " << x.second << "\n";
         ll cnt=pthpowerofxinfactorialn(n,x.first);
        //  cout << cnt << "\n";
         if(x.second>cnt){
           flag=false;
           break;
         }
     }
  if(flag)
      cout << m << " divides " << n << "!" << "\n";
  else
      cout << m << " does not divide " << n << "!" << "\n";

  
    }

    return 0;
}