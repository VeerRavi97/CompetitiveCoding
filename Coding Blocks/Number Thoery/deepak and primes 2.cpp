#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll>vi;
vi primes;
bitset<10000001>bs;
#define N 100000
void sieve(){
bs.set();
bs[0]=bs[1]=0;
primes.push_back(2);
for(ll i=2;i<=10000000;i+=2) bs[i]=0;
for(ll i=3;i<=10000000;i+=2){
 if(bs[i]){
     primes.push_back(i);
     for(ll j=i*i;j<=10000000;j+=i)
      bs[j]=0;
 }

} 
}

ll segmented_sieve(ll l, ll r, vector<ll>&output){
 for(ll i=0;i<primes.size()&&(primes[i]*primes[i])<=r;i++){
    //  cout << "prime" << " " << primes[i]*primes[i] << "\n";
  for( ll x=l;x<=r;x++){
      if(primes[i]==x) continue;
  if(x%primes[i]==0){
       output[x-l]=0;
  }
  }
 }


}
int main(){
 ll tc;
 sieve();
 cin >> tc;
 while(tc--){
     ll l,r;
     cin >> l >> r;
     ll diff=r-l+1;
     vector<ll>output(diff+1,1);
     segmented_sieve(l,r,output);
     for(ll i=0;i<diff;i++){
         if(output[i]){
             cout << i+l << "\n";
         }
     }
 }


}