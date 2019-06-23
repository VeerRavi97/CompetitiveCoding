#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll>vi;
ll factorial(ll n){   // up to factorial 20
ll cal=1; 
for(ll i=2;i<=n;i++){
    cal*=i;
}
return cal;
}
vi res;
void multiply(ll x){
ll carry=0;
for(ll i=0;i<res.size();i++)
 {
     ll cal=res[i]*x+carry;
     res[i]=cal%10;
     carry=cal/10;
 }
while(carry){
    res.push_back(carry%10);
    carry/=10;
}

}

void factorialLarge(ll n){
res.push_back(1);
for(ll i=2;i<=n;i++){
    multiply(i);
}



}




int main(){
ll n;
while(scanf("%lld",&n)==1){
    res.clear();
 factorialLarge(n);
 cout << n << "!" << "\n";
 for(ll i=res.size()-1;i>=0;i--){
 cout << res[i];
}
cout << "\n";
}
}
