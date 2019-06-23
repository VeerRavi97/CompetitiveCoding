#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll>vi;
bitset<10000001>bs;
#define upperbound 10000000
vi primes;
void sieve(){
    bs.set();
 bs[0]=bs[1]=0;
 primes.push_back(2);
 for(ll i=4;i<=upperbound;i+=2)
  bs[i]=0;
  for(ll i=3;i<=upperbound;i+=2)
  {
      if(bs[i]){
          primes.push_back(i);
          for(ll j=i*i;j<=upperbound;j+=i)
           bs[j]=0;
      }
  }
}

ll largestprime(ll n){
ll pf=primes[0];
ll pf_index=0;
ll ans,cnt;
cnt=0;
while(pf*pf<=n){
   if(n%pf==0){
    ans=pf;
    cnt++;
    while(n%pf==0)
    n/=pf;
   }
  pf=primes[++pf_index];
}
if(n!=1)
{ans=n;
 cnt++;
}
if(cnt==1) ans=-1;
return ans;

}
int main(){
    sieve();
ll n;
 while(cin >> n,n!=0){
  ll ans=largestprime(abs(n));
  if(ans==n || ans==-1 || abs(n)==1)
  ans=-1;
 cout << ans << "\n";

 }



}