#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll gcd(ll a,ll b){
    if(b==0) return a;
    return gcd(b,a%b);
} 
int main(){
ll tc;
cin >> tc;
 cin.ignore();
while(tc--){
    string s;
   
    getline(cin,s);
    // cout << s << "\n";
  stringstream ss;
  ss << s;
  int x=0;
  vector<ll>v;
  while(ss>>x){
  v.push_back(x);
  }
  ll ans=-1;
  for(ll i=0;i<v.size()-1;i++){
      for(ll j=i+1;j<v.size();j++){
          ans=max(ans,gcd(v[i],v[j]));
      }
  }
cout << ans << "\n";

}


}