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
 for(ll i=4;i<=upperbound;i+=2) bs[i]=0;
 for(ll i=3;i<=upperbound;i+=2){
     if(bs[i]){
         primes.push_back(i);
         for(ll j=i*i;j<=upperbound;j+=i)
         bs[j]=0;
     }
 }


 }

ll SumDiv(ll n){
  ll pf=primes[0];
  ll pf_index=0;
  ll ans=1;
  while(pf*pf<=n){
     ll power=0;
     while(n%pf==0){
         power++;
         n/=pf;
     }
     ll temp=((ll)(pow((double)pf,(double)power+1)+0.5)-1)/(pf-1);
     ans*=temp;
    //  cout << pf << " " << temp << "\n";
     pf=primes[++pf_index];
  }
if(n!=1) {
     ll temp=((ll)(pow((double)n,2.0)+0.5)-1)/(n-1);
    ans*=temp;
}
return ans;
}

  vector<ll>v;
 void precalculate(){
  for(ll i=1;i<=1000;i++){
    {
        ll temp=SumDiv(i);
        v.push_back(temp);
    }

  }


 }
 int main(){
     sieve();
     precalculate();
    ll n;
    ll tc=1;
    while(cin >> n,n!=0){
     if(find(v.begin(),v.end(),n)!=v.end()){
      ll pos=find(v.begin(),v.end(),n)-v.begin();
      cout << "Case " << tc << ":" << " " <<  pos+1 << "\n";

     }else{
         cout << "Case " << tc << ":" << " " << "-1" << "\n";
     }
tc++;
    }
 }