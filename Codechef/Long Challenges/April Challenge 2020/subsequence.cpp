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
vi v(n,0);
for(ll i=0;i<n;i++) cin >> v[i];
ll subarrays=n*(n+1)/2;
for(ll i=0;i<n;i++){
    if(v[i]&1) v[i]=0;
    else if(v[i]%4==0) v[i]=4;
    else v[i]=2;
    
}
// for(auto x:v) cout << x << " ";
// cout << "\n";
vi left(n,0);
vi right(n,0);
ll start=-1;
for(ll i=0;i<n;i++){
    if(v[i]==4) start=i;
    else if (v[i]==2){left[i]=i-start-1;start=i;}
}
// for(auto x:left) cout << x << " ";
// cout << "\n";
ll end=n;
for(ll i=n-1;i>=0;i--){
    if(v[i]==4) end=i;
    else if (v[i]==2){right[i]=end-i-1;end=i;}
}
// for(auto x:right) cout << x << " ";
// cout << "\n";
ll cnt=0;
for(ll i=0;i<n;i++){
    ll temp=0;
   if(v[i]==2){
        temp=(left[i]+1)*(right[i]+1);
    //    cout << temp << "\n";
   }
   cnt+=temp;
}
// cout << cnt << "\n";
cout << subarrays-cnt<<"\n";

}
}

// 1
// 13
// 4 3 3 2 3 4 3 2 3 2 3 4 3