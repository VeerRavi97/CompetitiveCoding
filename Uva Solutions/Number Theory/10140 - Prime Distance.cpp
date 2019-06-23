#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll>vi;
#define all(c) (c).begin(),(c).end()
vi primes;

void sieve(ll n){
 vi marked(n+1,1);
 marked[0]=marked[1]=0;
 primes.push_back(2);
 for(ll i=4;i<=n;i+=2) marked[i]=0;
 for(ll i=3;i<=n;i+=2){
     if(marked[i]){
         primes.push_back(i);
         for(ll j=i*i;j<=n;j+=i){
             marked[j]=0;
         }
     }
 }

}
 bool isprime(ll n){
     if(n<2) return false;
     if(n==2) return true;
     if(n%2==0) return false;
     ll m=sqrt(n);
     for( ll i=0;i<primes.size() && primes[i]<=m;i++){
         if(n%primes[i]==0) return false;
     }
     return true;
 }


int main(){
    ll upperbound=2147483647;
    sieve(1000000);
   ll l,r;
 while(scanf("%lld %lld", &l, &r) == 2) {
  ll cnt=0;
  ll a,b,c,d;
    ll maxm=-1;
    ll minm=99999999;
    bool isfirst=true;
    ll firstprime=-1;
    for(ll i=l;i<=r;i++){
        if(isprime(i)){
            cnt++;
           if(isfirst){
             firstprime=i;
             isfirst=false;
           } 
           else{
        ll cal=i-firstprime;
        if(maxm<cal){
            maxm=cal;
            a=firstprime;
            b=i;

        }
        if(minm>cal){
           minm=cal;
           c=firstprime;
            d=i;
        }
        firstprime=i;
           }
    }
    }
    if(cnt<2)
    cout << "There are no adjacent primes." << "\n";
    else
   printf("%lld,%lld are closest, %lld,%lld are most distant.\n",c,d,a,b);

   }
}