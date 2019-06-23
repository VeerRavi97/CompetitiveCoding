#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vi;

vi v;
void multiply(ll n){
    ll carry=0;
  for(ll i=0;i<v.size();i++){
    ll tem=v[i]*n+carry;
    v[i]=tem%10;
    carry=tem/10;
  }
  while(carry){
      v.push_back(carry%10);
      carry/=10;
  }
}

void factorial(ll n){
  v.push_back(1);
 for(ll i=2;i<=n;i++){
  multiply(i);
 }

}
int main(){
 ll n;
 cin >> n;
 factorial(n);
 for(ll i=v.size()-1;i>=0;i--){
     cout << v[i];
 }
cout << "\n";

}