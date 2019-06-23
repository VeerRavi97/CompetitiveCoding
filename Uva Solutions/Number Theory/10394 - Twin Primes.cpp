#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll>vi;
#define all(c) c.begin(),c.end();
vi primes;
 const ll upperbound=20000000;
bitset<upperbound+1>bs;
void sieve(){
 bs.set();
 primes.push_back(2);
 bs[0]=bs[1]=0;
 for(ll i=2;i<=upperbound;i+=2) bs[i]=0;
 for(ll i=3;i<=upperbound;i+=2){
     if(bs[i]){
         primes.push_back(i);
     for(ll j=i*i;j<=upperbound;j+=i){
      bs[j]=0;
     }
     }
 }

}
void solve(vector<pair<ll,ll>>&ans){
for(ll i=1;i<primes.size();i++){
       if(primes[i]-primes[i-1]==2){
           ll a=primes[i-1];
           ll b=primes[i];
           ans.push_back(make_pair(a,b));
       }
   }
}
int main(){
 ll n;
 sieve();
 vector<pair<ll,ll>>ans;
 solve(ans);
//  for(auto x:primes)
//  cout << x << " ";
 while(scanf("%lld",&n)==1){
  
   ll a,b;
a=ans[n-1].first;
  b=ans[n-1].second;
cout << "(" << a << "," << " " << b << ")" <<"\n";

 }




}