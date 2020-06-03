#include<bits/stdc++.h>
using namespace std;
#define all(c) c.begin(),c.end()
#define IOS ios::sync_with_stdio(0);cin.tie(0)
typedef long long ll;
typedef vector<int>v;
vector<int>primes;
bitset<21>bs;
 
void sieve(){
bs.set();
primes.push_back(2);
bs[2]=0;
for(int i=4;i<=20;i+=2) bs[i]=0;
for(int i=3;i<=20;i+=2){
 if(bs[i]){
  primes.push_back(i);
  for(int j=i*i;j<=20;j+=i) bs[j]=0;
 }
}
return;
}

int main(){
IOS;
// sieve();   
int tc;
cin >> tc;
primes={2,3,5,7,11,13,17,19};
// cout << bs << "\n";
// for(auto x:primes) cout << x << " ";
while(tc--){
    // cout << "hello " << "\n";
ll n;
cin >> n;
int len=primes.size();
ll subsets=(ll)(1<<len)-1;
ll ans=0;
// cout << subsets << "\n";
for(int i=1;i<=subsets;i++){
ll denom=1;
for(int j=0;j<8;j++){
 if(i&(1<<j)) denom*=primes[j];
}

int cnt=__builtin_popcount(i);
if(cnt&1) ans+=n/denom;
else ans-=n/denom;
// cout << i << " " << denom <<  " " << ans <<"\n";

}

cout << ans << "\n";




}
}