#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll>vi;
vi primes;
#define upperbound 10000000
bitset<10000001>bs;
ll pthpowerofxinn(ll n,ll x){
  ll r=x;
  ll cnt=0;
  while(r<=n){
     cnt++;
     r*=x;
  }
 return cnt;
}

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
int main(){
    // ios::sync_with_stdio(0);
    // cin.tie(0);
    sieve();
   ll n;
   while(cin>>n,n>0){
    // ll no2s=pthpowerofxinn(n,2);
    // ll no5s=pthpowerofxinn(n,5);
    ll ans=1;
    // for(ll i=0;i<no2s-no5s;i++) // removing trailing zeros
    //   ans=(ans*2)%10;

    //    cout << no2s << " " <<no5s << " " << ans << "\n";
    
    ll pf=primes[0];
    ll pf_index=0;
     while(pf<=n){
        
       ll nopfs=pthpowerofxinn(n,pf);
       ans*=(ll)(pow(pf,nopfs)+0.5);
        //  ans=(ans*pf)%10;
    //    cout << pf << " " << nopfs << " " << ans << "\n";  
         
     pf=primes[++pf_index];
     }

   cout << ans << "\n";



   }


    return 0;
}