#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool isperfectsquare( ll n){
    double sqrtn=sqrt(n);
    if(sqrtn==(ll)sqrt(n))
    return true;
    return false;

}
bool isprime(ll n){
    if(n<2) return false;
    if(n==2) return true;
    if(n%2==0) return false;
    for(ll i=3;i<=(ll)sqrt(n);i+=2)
    {
        if(n%i==0) return false;
    }
    return true;
}

int main(){
   ll n;
   cin >> n;
   vector<ll>v;
   for(ll i=0;i<n;i++){
    ll in;
    cin >> in;
    v.push_back(in);
   }
   for(ll i=0;i<v.size();i++){
       ll n=v[i];
        if(n && isperfectsquare(n) && isprime((ll)sqrt(n)))
    cout << "YES" << "\n";
else
{
    cout << "NO" << "\n";
}
   }
  




    return 0;
}