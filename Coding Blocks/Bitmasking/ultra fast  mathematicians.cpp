#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll>vi;
typedef pair<ll,ll>ii;
typedef vector<ii>vii;
 
#define all(c) (c).begin(),(c).end()
#define fast ios::sync_with_stdio(0);cin.tie(0);
 
const ll MOD=1e9+7;
const ll INF=0x3f3f3f3f;
const double EPS=1e-9;
const ll MAX_N=1e5+5;

 string  solve(string a,string b){
 string res="";
for(int i=a.length()-1;i>=0;i--){
 int one=a[i]-'0';
 int two=b[i]-'0';
 int xored=one^two; 
//  cout << one << " " << two << " " << xored << "\n";
 if(xored) res+="1";
 else res+='0';  

}
reverse(all(res));
return res;

}

 
int main(){
    fast;
 int tc;
 cin >> tc;
 while(tc--){
 string a,b;
 cin >> a >> b;
 string  ans=solve(a,b);
cout << ans << "\n";
  
  
 }
 
return 0;
}