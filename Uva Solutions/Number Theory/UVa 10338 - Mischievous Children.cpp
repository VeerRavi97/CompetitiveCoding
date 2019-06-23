#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll factorial(ll n){
    ll ans=1;
    for(ll i=2;i<=n;i++){
        ans*=i;
    }
    return ans;
}
int main(){

  ll n;
  cin >> n;
  ll tc=1;
  while(n--){

   string s;
   cin >> s;
   ll n=s.length();
   ll ans=factorial(n);
   vector<ll>v(26,0);
   for(auto x:s){
       ll index=x-65;
    //    cout << index;
     v[index]++;
   }
  for(auto x:v){
      ans/=(factorial(x));
  }
  cout <<  "Data set " << tc <<  ": "   <<  ans << "\n";
  tc++;
  }


}