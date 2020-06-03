#include<bits/stdc++.h>
using namespace std;
#define all(c) c.begin(),c.end()
#define IOS ios::sync_with_stdio(0);cin.tie(0)
typedef long long ll;
typedef vector<int>v;
// A number is prime if it is available 1 and itself only
bool isPrime(ll n){
if(n<2) return false;
if(n==2) return true;
if(n%2==0) return false;
for(ll i=3;i<=(ll)sqrt(n);i+=2){
    if(n%i==0) return false;
}
return true;

}

int main(){
IOS;
 int tc;
 cin >> tc;
 while(tc--){
 ll n;
 cin >> n;
 cout << isPrime(n) << "\n";



 }




	
}