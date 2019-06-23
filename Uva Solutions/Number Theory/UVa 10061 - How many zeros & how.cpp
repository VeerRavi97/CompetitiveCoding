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
  for( ll i=4;i<=upperbound;i+=2)
   bs[i]=0;
  for( ll i=3;i<=upperbound;i+=2){
    if(bs[i]){
       primes.push_back(i);
       for( ll j=i*i;j<=upperbound;j+=i)
        bs[j]=0;

    }

  }

}

ll pthpowerofxinNfactorial(ll n,ll x){
ll p=0;
ll den=x; // denominator
while(den<=n){
 p+=(n/den);
 den*=x;
}
return p;
}
void primefactorization(ll n,vector<pair<ll,ll> >&pfactors){
 ll pf=primes[0];
 ll pf_index=0;
 while(pf*pf<=n){
    //  cout << pf << "\n";
    if(n%pf==0){
        ll cnt=0;
        while(n%pf==0){
            n/=pf;
            cnt++;
        }
        pfactors.push_back(make_pair(pf,cnt));
    }
   pf=primes[++pf_index];
 }
 if(n!=1)  pfactors.push_back(make_pair(n,1));

}

int main(){
 sieve();
 ll n,b;
 while(scanf("%lld%lld",&n,&b)!=EOF){
  vector<pair<ll,ll>> pfactors;
//     for(auto x:primes){
//    cout << x << " ";
//    if(x>1000)
//    break;
//  }
  primefactorization(b,pfactors); 
//   for(auto x:pfactors){
//    cout << x.first << " " << x.second << "\n";
//  }
  ll ans=INT_MAX;

 for(auto x:pfactors){
   ans=min(ans,pthpowerofxinNfactorial(n,x.first)/x.second);
 }
   double nodigits=0;
 for(ll i=2;i<=n;i++)
 {
      double cal=log10(i);
     nodigits+=cal;
 }
 nodigits/=log10(double(b));
 ll ans2=(ll)floor(1+nodigits);
 cout << ans << " " << ans2 << "\n";
 }



}