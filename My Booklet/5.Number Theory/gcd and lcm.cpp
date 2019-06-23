#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll x,y,g;
ll gcd(ll a,ll b){
    if(b==0) return a;
    return gcd(b,a%b);
}
ll lcm(ll a,ll b){
    return a*(b/gcd(a,b));
}
void ExtendedEuclid(ll a,ll b){
  if(b==0){
      x=1;y=0;
      g=a;
      return;
  }
  ExtendedEuclid(b,a%b);
  ll x1=y;
  ll y1=x-(a/b)*y;
  x=x1;
  y=y1;
  cout << x << " " << y << "\n";
}
int main(){
    ll a,b,c;
 while(scanf("%lld%lld%lld",&a,&b,&c)==3)
{
    ll ans=gcd(a,b);
    ll ans2=lcm(a,b);
    cout << ans << " " <<  __gcd(a,b) << " " << ans2 << " " << a*(b/__gcd(a,b)) << "\n";
    ExtendedEuclid(a,b);
    if(c%g==0){
        cout << "Solution Exists" << "\n";
      x*=(c/g);
      y*=(c/g);
      cout << x << " " << y << "\n";
      int t=1;
    while(x<0 || y<0){
       x=x+(b/g);
       y=y-(a/g);
       t++;
       cout << x << " " << y << " " << x*a+y*b << "\n";
    }
  cout << x << " " << y << " " << x*a+y*b << "\n";
    }

}



}