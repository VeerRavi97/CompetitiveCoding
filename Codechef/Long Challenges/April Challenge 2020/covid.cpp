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
int n;
cin >> n;
vi v(n,0);
for(ll i=0;i<n;i++) cin >> v[i];
vi diff(n,0);
ll lastindex=-107;
for(ll i=0;i<n;i++){
    if(v[i]){
        diff[i]=i-lastindex;
        lastindex=i;
    }
}
bool ans=true;
for(auto x:diff){
    //cout << x << " ";
    if(x>0 && x<6) {
       // cout << "found at " << x << "\n";
        ans=false;
       break;
    }
}
if(ans) cout << "Yes" << "\n";
else cout << "No" << "\n";

}
}