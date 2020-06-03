#include<bits/stdc++.h>
using namespace std;
#define all(c) c.begin(),c.end()
#define IOS ios::sync_with_stdio(0);cin.tie(0)
typedef long long ll;
typedef vector<ll>vi;
int main(){
IOS;
ll tc;
cin >> tc;
while(tc--){
ll n;
cin >> n;
ll ans=n/2;
if(n==1){   
    ans=1;
}
cout << ans << "\n";
ll num=1;
ll times=(n%2==1)?3:2;
if(n==1) {
    cout << 1 << " " << 1 << "\n";
    ans-=1;
}
while(ans--){

cout << times << " " << num << " " <<  num+1;
if(n%2==1){
    cout << " " << n;
    n-=1;
}
cout << "\n";
num+=2;
times=2;

}

}
}