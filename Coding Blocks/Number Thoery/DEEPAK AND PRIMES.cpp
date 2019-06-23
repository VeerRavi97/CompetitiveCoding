#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll>vi;
#define MAX_N 100000000
bitset<100000001>bs;
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

int main(){
    sieve();
    int n;
    cin >> n;
    cout << primes[n-1] << "\n";
}