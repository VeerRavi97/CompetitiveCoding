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
ll n,m,k;
cin >> n >> m >> k;
vector<ll>v[n];
for(ll  i=0;i<n;i++){
    for( ll j=0;j<k;j++){
        ll in; 
        cin >> in;
        v[i].push_back(in);
    }
}
vector<ll>ans;
for(int i=0;i<n;i++){
ans.push_back(v[i][0]);
}
ans[n-1]=(m+1)%m;

for(auto x:ans) cout <<  x << " ";
cout << "\n";
}
}